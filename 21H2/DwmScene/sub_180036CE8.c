/*
 * XREFs of sub_180036CE8 @ 0x180036CE8
 * Callers:
 *     sub_180036BB8 @ 0x180036BB8 (sub_180036BB8.c)
 * Callees:
 *     sub_180032D8C @ 0x180032D8C (sub_180032D8C.c)
 *     sub_1800336C0 @ 0x1800336C0 (sub_1800336C0.c)
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180033A50 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     sub_180033DB0 @ 0x180033DB0 (sub_180033DB0.c)
 *     sub_1800377C0 @ 0x1800377C0 (sub_1800377C0.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180036CE8(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v12[256]; // [rsp+30h] [rbp-128h] BYREF

  memset(v12, 0, 0xF8uLL);
  sub_1800336C0((__int64)v12, 3, 1);
  if ( *a2 != a2[1] )
  {
    sub_180032D8C((__int64)&v12[16], (__int64)"{");
    v4 = 0LL;
    if ( (__int64)(a2[1] - *a2) >> 4 )
    {
      v5 = 0LL;
      do
      {
        v6 = v5 + *a2;
        v7 = sub_180032D8C((__int64)&v12[16], (__int64)"[");
        v8 = std::ostream::operator<<(v7, v4);
        v9 = sub_180032D8C(v8, (__int64)"] = ");
        v10 = sub_180033DB0(v9, v6);
        sub_180032D8C(v10, (__int64)&unk_1801431FC);
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < (__int64)(a2[1] - *a2) >> 4 );
    }
    sub_180032D8C((__int64)&v12[16], (__int64)&unk_1801431F8);
  }
  sub_1800377C0(&v12[24], a1);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>((__int64)&v12[152]);
  std::ios::~ios<char,std::char_traits<char>>(&v12[152]);
  return a1;
}
