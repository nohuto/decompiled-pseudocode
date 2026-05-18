/*
 * XREFs of sub_1800D0174 @ 0x1800D0174
 * Callers:
 *     sub_18002D804 @ 0x18002D804 (sub_18002D804.c)
 * Callees:
 *     sub_180025F94 @ 0x180025F94 (sub_180025F94.c)
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 *     sub_180067B20 @ 0x180067B20 (sub_180067B20.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801243E0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_1800D0174(_QWORD *a1)
{
  _QWORD *v2; // rax
  const void **v3; // rax
  __int64 v4; // rcx
  __int128 v6; // [rsp+38h] [rbp-50h] BYREF
  __int128 v7; // [rsp+48h] [rbp-40h]
  _QWORD *v8; // [rsp+58h] [rbp-30h]
  __int64 v9[3]; // [rsp+60h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+78h] [rbp-10h]

  v8 = a1;
  sub_180067B20(a1, 7, 3u);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::DepthBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  `eh vector constructor iterator'(
    a1 + 16,
    0x10uLL,
    4uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_98);
  `eh vector constructor iterator'(
    a1 + 24,
    0x10uLL,
    4uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_98);
  a1[32] = 0LL;
  a1[33] = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  a1[32] = v2;
  _InterlockedExchangeAdd(&dword_180220CF4, 1u);
  sub_180025F94(v9, dword_180220CF4);
  v3 = sub_18005A894(v9, 0LL, "DepthBuffer", 0xBuLL);
  v7 = 0uLL;
  v6 = *(_OWORD *)v3;
  v7 = *((_OWORD *)v3 + 1);
  v3[2] = 0LL;
  v3[3] = (const void *)15;
  *(_BYTE *)v3 = 0;
  sub_180068194((__int64)a1, (__int64 *)&v6);
  if ( v10 >= 0x10 )
  {
    v4 = v9[0];
    if ( v10 + 1 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v9[0] - 8);
      if ( (unsigned __int64)(v9[0] - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, v10 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  return a1;
}
