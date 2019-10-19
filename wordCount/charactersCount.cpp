#include <iostream>
#include <string>
using namespace std;

int count_characters(string s){	

	int num = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]>=0&&s[i]<=127)
		num++;
	}
	return num;
}

int main(){	

	/*大小写英文字母*36 + 水平制表符*1 + 换行符*1 + 其他符号*6 + 空格*2 +（汉字*4） = 46 */
	string s ="Mo\tnday Tuesday We我太难了dnesday?#$%&&Thursday\nFriday";
	cout<<"characters:"<<count_characters(s)<<endl;
	return 0;
}




