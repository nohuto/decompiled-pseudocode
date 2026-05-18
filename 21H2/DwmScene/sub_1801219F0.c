/*
 * XREFs of sub_1801219F0 @ 0x1801219F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x18002C608 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_1.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180077714 @ 0x180077714 (sub_180077714.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__m128i *__fastcall sub_1801219F0(__int64 a1, __m128i *a2, __int64 *a3)
{
  unsigned __int64 v4; // rcx
  _WORD *v5; // rax
  char *v6; // r9
  unsigned __int64 v7; // rdx
  char *v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  __int64 v12; // r9
  __int64 v13; // r9
  _QWORD pExceptionObject[8]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v15[8]; // [rsp+70h] [rbp-19h] BYREF
  __m128i v16; // [rsp+B0h] [rbp+27h] BYREF
  __m128i si128; // [rsp+C0h] [rbp+37h]

  v4 = a3[2];
  if ( !v4 )
  {
    sub_18000FE28(&v16);
    sub_180077714(pExceptionObject, (__int64)&v16, 0, v12);
    throw (Spectre::Utils::SpectreInvalidArgException *)pExceptionObject;
  }
  v5 = a3;
  if ( (unsigned __int64)a3[3] >= 8 )
    v5 = (_WORD *)*a3;
  if ( *v5 == 47 )
  {
    v6 = (char *)a3;
    if ( (unsigned __int64)a3[3] >= 8 )
      v6 = (char *)*a3;
    if ( v4 <= 1 )
      goto LABEL_14;
    v7 = v4 - 1;
    v8 = v6 + 2;
    while ( *(_WORD *)v8 != 47 )
    {
      v8 += 2;
      if ( !--v7 )
      {
        v8 = 0LL;
        break;
      }
    }
    if ( v8 )
      v9 = (v8 - v6) >> 1;
    else
LABEL_14:
      v9 = -1LL;
    if ( v9 == -1 )
    {
      sub_18000FE28(pExceptionObject);
      sub_180077714(v15, (__int64)pExceptionObject, 0, v13);
      throw (Spectre::Utils::SpectreInvalidArgException *)v15;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_180142440);
    v16.m128i_i16[0] = 0;
    v10 = v9 - 1;
    if ( v4 - 1 < v9 - 1 )
      v10 = v4 - 1;
    if ( (unsigned __int64)a3[3] >= 8 )
      a3 = (__int64 *)*a3;
    std::wstring::assign(v16.m128i_i8, (char *)a3 + 2, v10);
    *a2 = v16;
    a2[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&xmmword_180142440);
    v16.m128i_i16[0] = 0;
    unknown_libname_103(v16.m128i_i64);
  }
  else
  {
    a2[1].m128i_i64[0] = 0LL;
    a2[1].m128i_i64[1] = 0LL;
    sub_18001277C(a2, (__int64)byte_180214E90);
  }
  return a2;
}
