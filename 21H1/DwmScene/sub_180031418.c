/*
 * XREFs of sub_180031418 @ 0x180031418
 * Callers:
 *     sub_1800312E8 @ 0x1800312E8 (sub_1800312E8.c)
 * Callees:
 *     sub_18002D4BC @ 0x18002D4BC (sub_18002D4BC.c)
 *     sub_18002DDF0 @ 0x18002DDF0 (sub_18002DDF0.c)
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x18002E180 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     sub_18002E4E0 @ 0x18002E4E0 (sub_18002E4E0.c)
 *     sub_180031EF0 @ 0x180031EF0 (sub_180031EF0.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180031418(__int64 a1, _QWORD *a2)
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
  sub_18002DDF0((__int64)v12, 3, 1);
  if ( *a2 != a2[1] )
  {
    sub_18002D4BC((__int64)&v12[16], (__int64)"{");
    v4 = 0LL;
    if ( (__int64)(a2[1] - *a2) >> 4 )
    {
      v5 = 0LL;
      do
      {
        v6 = v5 + *a2;
        v7 = sub_18002D4BC((__int64)&v12[16], (__int64)"[");
        v8 = std::ostream::operator<<(v7, v4);
        v9 = sub_18002D4BC(v8, (__int64)"] = ");
        v10 = sub_18002E4E0(v9, v6);
        sub_18002D4BC(v10, (__int64)&unk_18013CEAC);
        ++v4;
        v5 += 16LL;
      }
      while ( v4 < (__int64)(a2[1] - *a2) >> 4 );
    }
    sub_18002D4BC((__int64)&v12[16], (__int64)&unk_18013CEA8);
  }
  sub_180031EF0(&v12[24], a1);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>((__int64)&v12[152]);
  std::ios::~ios<char,std::char_traits<char>>(&v12[152]);
  return a1;
}
