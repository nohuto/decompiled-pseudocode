/*
 * XREFs of sub_1800B8C88 @ 0x1800B8C88
 * Callers:
 *     sub_1800C6080 @ 0x1800C6080 (sub_1800C6080.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_1800B6D80 @ 0x1800B6D80 (sub_1800B6D80.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800B8C88(__int64 a1, const void **a2)
{
  unsigned __int64 v4; // r8
  const void *v5; // rdx
  char v6; // r10
  __int64 *v7; // rax
  __int64 *v8; // rcx
  char v9; // bl
  __int64 v10; // rdx
  signed __int64 v11; // rcx
  unsigned __int16 v12; // r8
  int v13; // eax
  unsigned __int64 v14; // r8
  const void *v15; // rdx
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rdx
  signed __int64 v19; // rcx
  unsigned __int16 v20; // r8
  int v21; // eax
  struct _Mtx_internal_imp_t *v22; // rbx
  int v23; // eax
  int v24; // eax
  __int64 v26[2]; // [rsp+30h] [rbp-49h] BYREF
  __m128i v27; // [rsp+40h] [rbp-39h]
  __int64 v28[2]; // [rsp+50h] [rbp-29h] BYREF
  __m128i si128; // [rsp+60h] [rbp-19h]
  __int64 v30[2]; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp+7h]
  unsigned __int64 v32; // [rsp+88h] [rbp+Fh]
  __int64 v33[2]; // [rsp+90h] [rbp+17h] BYREF
  unsigned __int64 v34; // [rsp+A0h] [rbp+27h]
  unsigned __int64 v35; // [rsp+A8h] [rbp+2Fh]

  v34 = 0LL;
  v35 = 7LL;
  LOWORD(v33[0]) = 0;
  std::wstring::assign((char *)v33, L"Camera.", 7uLL);
  v31 = 0LL;
  v32 = 7LL;
  LOWORD(v30[0]) = 0;
  std::wstring::assign((char *)v30, L"/Internal/Camera.", 0x11uLL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v28[0]) = 0;
  v4 = v34;
  if ( (unsigned __int64)a2[2] < v34 )
    v4 = (unsigned __int64)a2[2];
  v5 = a2;
  if ( (unsigned __int64)a2[3] >= 8 )
    v5 = *a2;
  std::wstring::assign((char *)v28, v5, v4);
  v6 = 5;
  v7 = v33;
  if ( v35 >= 8 )
    v7 = (__int64 *)v33[0];
  v8 = v28;
  if ( si128.m128i_i64[1] >= 8uLL )
    v8 = (__int64 *)v28[0];
  v9 = 1;
  v10 = si128.m128i_i64[0];
  if ( si128.m128i_i64[0] != v34 )
    goto LABEL_16;
  if ( si128.m128i_i64[0] )
  {
    v11 = (char *)v8 - (char *)v7;
    while ( 1 )
    {
      v12 = *(_WORD *)((char *)v7 + v11);
      if ( v12 != *(_WORD *)v7 )
        break;
      v7 = (__int64 *)((char *)v7 + 2);
      if ( !--v10 )
        goto LABEL_14;
    }
    v13 = v12 < *(_WORD *)v7 ? -1 : 1;
  }
  else
  {
LABEL_14:
    v13 = 0;
  }
  if ( v13 )
  {
LABEL_16:
    v27 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
    LOWORD(v26[0]) = 0;
    v14 = v31;
    if ( (unsigned __int64)a2[2] < v31 )
      v14 = (unsigned __int64)a2[2];
    v15 = a2;
    if ( (unsigned __int64)a2[3] >= 8 )
      v15 = *a2;
    std::wstring::assign((char *)v26, v15, v14);
    v6 = 15;
    v16 = v30;
    if ( v32 >= 8 )
      v16 = (__int64 *)v30[0];
    v17 = v26;
    if ( v27.m128i_i64[1] >= 8uLL )
      v17 = (__int64 *)v26[0];
    v18 = v27.m128i_i64[0];
    if ( v27.m128i_i64[0] != v31 )
      goto LABEL_31;
    if ( v27.m128i_i64[0] )
    {
      v19 = (char *)v17 - (char *)v16;
      while ( 1 )
      {
        v20 = *(_WORD *)((char *)v16 + v19);
        if ( v20 != *(_WORD *)v16 )
          break;
        v16 = (__int64 *)((char *)v16 + 2);
        if ( !--v18 )
          goto LABEL_29;
      }
      v21 = v20 < *(_WORD *)v16 ? -1 : 1;
    }
    else
    {
LABEL_29:
      v21 = 0;
    }
    if ( v21 )
LABEL_31:
      v9 = 0;
  }
  if ( (v6 & 2) != 0 )
    unknown_libname_101(v26);
  unknown_libname_101(v28);
  if ( v9 )
  {
    v22 = (struct _Mtx_internal_imp_t *)(*(_QWORD *)a1 + 1552LL);
    v23 = Mtx_lock(v22);
    if ( !v23 )
    {
      sub_1800B6D80((_QWORD *)(*(_QWORD *)a1 + 1488LL), (__int64)v26, a2);
      v24 = Mtx_unlock(v22);
      if ( !v24 )
        goto LABEL_37;
      std::_Throw_C_error(v24);
    }
    std::_Throw_C_error(v23);
    JUMPOUT(0x1800B8EE0LL);
  }
LABEL_37:
  unknown_libname_101(v30);
  return unknown_libname_101(v33);
}
