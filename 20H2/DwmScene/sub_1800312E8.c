/*
 * XREFs of sub_1800312E8 @ 0x1800312E8
 * Callers:
 *     sub_18002ED04 @ 0x18002ED04 (sub_18002ED04.c)
 *     sub_180030200 @ 0x180030200 (sub_180030200.c)
 *     sub_180030E0C @ 0x180030E0C (sub_180030E0C.c)
 * Callees:
 *     sub_18002D4BC @ 0x18002D4BC (sub_18002D4BC.c)
 *     sub_18002DB2C @ 0x18002DB2C (sub_18002DB2C.c)
 *     sub_18002DDF0 @ 0x18002DDF0 (sub_18002DDF0.c)
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x18002E180 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     sub_18002E5A8 @ 0x18002E5A8 (sub_18002E5A8.c)
 *     sub_180031418 @ 0x180031418 (sub_180031418.c)
 *     sub_180031EF0 @ 0x180031EF0 (sub_180031EF0.c)
 *     memset @ 0x18011E09A (memset.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800312E8(__int64 a1, unsigned int *a2, __int64 a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-138h]
  _BYTE v15[256]; // [rsp+50h] [rbp-128h] BYREF

  memset(v15, 0, 0xF8uLL);
  sub_18002DDF0((__int64)v15, 3, 1);
  v6 = (_QWORD *)sub_180031418(v13, a3);
  v7 = sub_18002D4BC((__int64)&v15[16], (__int64)"desc=");
  v8 = sub_18002E5A8(v7, a2);
  v9 = sub_18002D4BC(v8, (__int64)", subresourceData=");
  v10 = v6[2];
  if ( v6[3] >= 0x10uLL )
    v6 = (_QWORD *)*v6;
  sub_18002DB2C(v9, (__int64)v6, v10);
  if ( v14 >= 0x10 )
  {
    v11 = v13[0];
    if ( v14 + 1 >= 0x1000 )
    {
      v11 = *(_QWORD *)(v13[0] - 8LL);
      if ( (unsigned __int64)(v13[0] - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v14 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v11);
  }
  sub_180031EF0(&v15[24], a1);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>((__int64)&v15[152]);
  std::ios::~ios<char,std::char_traits<char>>(&v15[152]);
  return a1;
}
