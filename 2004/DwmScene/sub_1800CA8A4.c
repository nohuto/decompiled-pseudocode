/*
 * XREFs of sub_1800CA8A4 @ 0x1800CA8A4
 * Callers:
 *     sub_180027F34 @ 0x180027F34 (sub_180027F34.c)
 * Callees:
 *     sub_1800206C4 @ 0x1800206C4 (sub_1800206C4.c)
 *     sub_180054FC4 @ 0x180054FC4 (sub_180054FC4.c)
 *     sub_180062250 @ 0x180062250 (sub_180062250.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18011EB10 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_1800CA8A4(_QWORD *a1)
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
  sub_180062250(a1, 7, 3u);
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
    (void (*)(void *))unknown_libname_96);
  `eh vector constructor iterator'(
    a1 + 24,
    0x10uLL,
    4uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_96);
  a1[32] = 0LL;
  a1[33] = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  a1[32] = v2;
  _InterlockedExchangeAdd(&dword_1802199C4, 1u);
  sub_1800206C4(v9, dword_1802199C4);
  v3 = sub_180054FC4(v9, 0LL, "DepthBuffer", 0xBuLL);
  v7 = 0uLL;
  v6 = *(_OWORD *)v3;
  v7 = *((_OWORD *)v3 + 1);
  v3[2] = 0LL;
  v3[3] = (const void *)15;
  *(_BYTE *)v3 = 0;
  sub_1800628C4((__int64)a1, (__int64 *)&v6);
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
