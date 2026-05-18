/*
 * XREFs of sub_180036BB8 @ 0x180036BB8
 * Callers:
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 *     sub_1800366DC @ 0x1800366DC (sub_1800366DC.c)
 * Callees:
 *     sub_180032D8C @ 0x180032D8C (sub_180032D8C.c)
 *     sub_1800333FC @ 0x1800333FC (sub_1800333FC.c)
 *     sub_1800336C0 @ 0x1800336C0 (sub_1800336C0.c)
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180033A50 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     sub_180033E78 @ 0x180033E78 (sub_180033E78.c)
 *     sub_180036CE8 @ 0x180036CE8 (sub_180036CE8.c)
 *     sub_1800377C0 @ 0x1800377C0 (sub_1800377C0.c)
 *     memset @ 0x18012396A (memset.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180036BB8(__int64 a1, unsigned int *a2, __int64 a3)
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
  sub_1800336C0((__int64)v15, 3, 1);
  v6 = (_QWORD *)sub_180036CE8(v13, a3);
  v7 = sub_180032D8C((__int64)&v15[16], (__int64)"desc=");
  v8 = sub_180033E78(v7, a2);
  v9 = sub_180032D8C(v8, (__int64)", subresourceData=");
  v10 = v6[2];
  if ( v6[3] >= 0x10uLL )
    v6 = (_QWORD *)*v6;
  sub_1800333FC(v9, (__int64)v6, v10);
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
  sub_1800377C0(&v15[24], a1);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>((__int64)&v15[152]);
  std::ios::~ios<char,std::char_traits<char>>(&v15[152]);
  return a1;
}
