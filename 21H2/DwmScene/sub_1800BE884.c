/*
 * XREFs of sub_1800BE884 @ 0x1800BE884
 * Callers:
 *     sub_1800CB960 @ 0x1800CB960 (sub_1800CB960.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800BE884(__int64 a1, const void **a2)
{
  unsigned __int64 v4; // r8
  const void **v5; // rdx
  char v6; // r10
  __int64 *v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rdx
  signed __int64 v10; // rcx
  unsigned __int16 v11; // r8
  int v12; // eax
  unsigned __int64 v13; // r8
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  signed __int64 v17; // rcx
  unsigned __int16 v18; // r8
  int v19; // eax
  char v20; // di
  __int64 v22[2]; // [rsp+28h] [rbp-41h] BYREF
  __m128i v23; // [rsp+38h] [rbp-31h]
  __int64 v24[2]; // [rsp+48h] [rbp-21h] BYREF
  __m128i si128; // [rsp+58h] [rbp-11h]
  __int64 v26[2]; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v28; // [rsp+80h] [rbp+17h]
  __int64 v29[2]; // [rsp+88h] [rbp+1Fh] BYREF
  unsigned __int64 v30; // [rsp+98h] [rbp+2Fh]
  unsigned __int64 v31; // [rsp+A0h] [rbp+37h]

  v30 = 0LL;
  v31 = 7LL;
  LOWORD(v29[0]) = 0;
  std::wstring::assign((char *)v29, L"Lighting.", 9uLL);
  v27 = 0LL;
  v28 = 7LL;
  LOWORD(v26[0]) = 0;
  std::wstring::assign((char *)v26, L"/Internal/Lighting.", 0x13uLL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_180142440);
  LOWORD(v24[0]) = 0;
  v4 = v30;
  if ( (unsigned __int64)a2[2] < v30 )
    v4 = (unsigned __int64)a2[2];
  v5 = a2;
  if ( (unsigned __int64)a2[3] >= 8 )
    v5 = (const void **)*a2;
  std::wstring::assign((char *)v24, v5, v4);
  v6 = 5;
  v7 = v29;
  if ( v31 >= 8 )
    v7 = (__int64 *)v29[0];
  v8 = v24;
  if ( si128.m128i_i64[1] >= 8uLL )
    v8 = (__int64 *)v24[0];
  v9 = si128.m128i_i64[0];
  if ( si128.m128i_i64[0] == v30 )
  {
    if ( si128.m128i_i64[0] )
    {
      v10 = (char *)v8 - (char *)v7;
      while ( 1 )
      {
        v11 = *(_WORD *)((char *)v7 + v10);
        if ( v11 != *(_WORD *)v7 )
          break;
        v7 = (__int64 *)((char *)v7 + 2);
        if ( !--v9 )
          goto LABEL_14;
      }
      v12 = v11 < *(_WORD *)v7 ? -1 : 1;
    }
    else
    {
LABEL_14:
      v12 = 0;
    }
    if ( !v12 )
      goto LABEL_31;
  }
  v23 = _mm_load_si128((const __m128i *)&xmmword_180142440);
  LOWORD(v22[0]) = 0;
  v13 = v27;
  if ( (unsigned __int64)a2[2] < v27 )
    v13 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)a2[3] >= 8 )
    a2 = (const void **)*a2;
  std::wstring::assign((char *)v22, a2, v13);
  v6 = 15;
  v14 = v26;
  if ( v28 >= 8 )
    v14 = (__int64 *)v26[0];
  v15 = v22;
  if ( v23.m128i_i64[1] >= 8uLL )
    v15 = (__int64 *)v22[0];
  v16 = v23.m128i_i64[0];
  if ( v23.m128i_i64[0] != v27 )
    goto LABEL_34;
  if ( v23.m128i_i64[0] )
  {
    v17 = (char *)v15 - (char *)v14;
    while ( 1 )
    {
      v18 = *(_WORD *)((char *)v14 + v17);
      if ( v18 != *(_WORD *)v14 )
        break;
      v14 = (__int64 *)((char *)v14 + 2);
      if ( !--v16 )
        goto LABEL_29;
    }
    v19 = v18 < *(_WORD *)v14 ? -1 : 1;
  }
  else
  {
LABEL_29:
    v19 = 0;
  }
  if ( v19 )
LABEL_34:
    v20 = 0;
  else
LABEL_31:
    v20 = 1;
  if ( (v6 & 2) != 0 )
    unknown_libname_103(v22);
  unknown_libname_103(v24);
  if ( v20 )
    *(_BYTE *)(*(_QWORD *)a1 + 1464LL) = 1;
  unknown_libname_103(v26);
  return unknown_libname_103(v29);
}
