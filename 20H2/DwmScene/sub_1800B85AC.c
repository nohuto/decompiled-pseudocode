/*
 * XREFs of sub_1800B85AC @ 0x1800B85AC
 * Callers:
 *     sub_1800C5ED0 @ 0x1800C5ED0 (sub_1800C5ED0.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B85AC(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // r8
  const void *v5; // rdx
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rcx
  signed __int64 v9; // rdx
  unsigned __int16 v10; // r8
  int v11; // eax
  char v12; // si
  __int64 *v13; // rax
  _BYTE *v14; // rdx
  unsigned __int64 v15; // rcx
  signed __int64 v16; // rdx
  unsigned __int16 v17; // r8
  int v18; // eax
  __int64 *v19; // rcx
  _BYTE *v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r10
  signed __int64 v23; // rdx
  unsigned __int16 v24; // r8
  int v25; // ecx
  __int64 *v26; // rcx
  _BYTE *v27; // rdx
  unsigned __int64 v28; // r10
  signed __int64 v29; // rdx
  unsigned __int16 v30; // r8
  int v31; // ecx
  __int64 *v32; // rcx
  _BYTE *v33; // rdx
  signed __int64 v34; // rdx
  unsigned __int16 v35; // r8
  int v36; // eax
  __int64 *v37; // rcx
  _BYTE *v38; // rdx
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r10
  signed __int64 v42; // rdx
  unsigned __int16 v43; // r8
  int v44; // ecx
  __int64 *v45; // rcx
  _BYTE *v46; // rdx
  unsigned __int64 v47; // r10
  signed __int64 v48; // rdx
  unsigned __int16 v49; // r8
  int v50; // ecx
  __int64 *v51; // rcx
  _BYTE *v52; // rdx
  unsigned __int64 v53; // r10
  signed __int64 v54; // rdx
  unsigned __int16 v55; // r8
  int v56; // ecx
  __int64 *v57; // rcx
  signed __int64 v58; // rbx
  unsigned __int16 v59; // dx
  int v60; // eax
  __int64 v62[2]; // [rsp+20h] [rbp-50h] BYREF
  __m128i si128; // [rsp+30h] [rbp-40h]
  __int64 v64[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v65; // [rsp+50h] [rbp-20h]
  unsigned __int64 v66; // [rsp+58h] [rbp-18h]

  v65 = 0LL;
  v66 = 7LL;
  LOWORD(v64[0]) = 0;
  std::wstring::assign((char *)v64, L"Model.", 6uLL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v62[0]) = 0;
  v4 = v65;
  if ( a2[2] < v65 )
    v4 = a2[2];
  v5 = a2;
  if ( a2[3] >= 8 )
    v5 = (const void *)*a2;
  std::wstring::assign((char *)v62, v5, v4);
  v6 = v64;
  if ( v66 >= 8 )
    v6 = (__int64 *)v64[0];
  v7 = v62;
  if ( si128.m128i_i64[1] >= 8uLL )
    v7 = (__int64 *)v62[0];
  v8 = si128.m128i_i64[0];
  if ( si128.m128i_i64[0] != v65 )
    goto LABEL_16;
  if ( si128.m128i_i64[0] )
  {
    v9 = (char *)v7 - (char *)v6;
    while ( 1 )
    {
      v10 = *(_WORD *)((char *)v6 + v9);
      if ( v10 != *(_WORD *)v6 )
        break;
      v6 = (__int64 *)((char *)v6 + 2);
      if ( !--v8 )
        goto LABEL_14;
    }
    v11 = v10 < *(_WORD *)v6 ? -1 : 1;
  }
  else
  {
LABEL_14:
    v11 = 0;
  }
  v12 = 1;
  if ( v11 )
LABEL_16:
    v12 = 0;
  unknown_libname_101(v62);
  if ( v12 )
    *(_BYTE *)(*(_QWORD *)a1 + 1465LL) = 1;
  v13 = &qword_180209030;
  if ( (unsigned __int64)qword_180209048 >= 8 )
    v13 = (__int64 *)qword_180209030;
  v14 = a2;
  if ( a2[3] >= 8 )
    v14 = (_BYTE *)*a2;
  v15 = a2[2];
  if ( v15 == qword_180209040 )
  {
    if ( v15 )
    {
      v16 = v14 - (_BYTE *)v13;
      while ( 1 )
      {
        v17 = *(_WORD *)((char *)v13 + v16);
        if ( v17 != *(_WORD *)v13 )
          break;
        v13 = (__int64 *)((char *)v13 + 2);
        if ( !--v15 )
          goto LABEL_28;
      }
      v18 = v17 < *(_WORD *)v13 ? -1 : 1;
    }
    else
    {
LABEL_28:
      v18 = 0;
    }
    if ( !v18 )
      *(_BYTE *)(*(_QWORD *)a1 + 1466LL) = 1;
  }
  v19 = &qword_180209090;
  if ( (unsigned __int64)qword_1802090A8 >= 8 )
    v19 = (__int64 *)qword_180209090;
  v20 = a2;
  if ( a2[3] >= 8 )
    v20 = (_BYTE *)*a2;
  v21 = a2[2];
  if ( v21 == qword_1802090A0 )
  {
    v22 = a2[2];
    if ( v21 )
    {
      v23 = v20 - (_BYTE *)v19;
      while ( 1 )
      {
        v24 = *(_WORD *)((char *)v19 + v23);
        if ( v24 != *(_WORD *)v19 )
          break;
        v19 = (__int64 *)((char *)v19 + 2);
        if ( !--v22 )
          goto LABEL_40;
      }
      v25 = v24 < *(_WORD *)v19 ? -1 : 1;
    }
    else
    {
LABEL_40:
      v25 = 0;
    }
    if ( !v25 )
      goto LABEL_64;
  }
  v26 = &qword_1802090B0;
  if ( (unsigned __int64)qword_1802090C8 >= 8 )
    v26 = (__int64 *)qword_1802090B0;
  v27 = a2;
  if ( a2[3] >= 8 )
    v27 = (_BYTE *)*a2;
  if ( v21 == qword_1802090C0 )
  {
    v28 = a2[2];
    if ( v21 )
    {
      v29 = v27 - (_BYTE *)v26;
      while ( 1 )
      {
        v30 = *(_WORD *)((char *)v26 + v29);
        if ( v30 != *(_WORD *)v26 )
          break;
        v26 = (__int64 *)((char *)v26 + 2);
        if ( !--v28 )
          goto LABEL_51;
      }
      v31 = v30 < *(_WORD *)v26 ? -1 : 1;
    }
    else
    {
LABEL_51:
      v31 = 0;
    }
    if ( !v31 )
      goto LABEL_64;
  }
  v32 = &qword_1802090D0;
  if ( (unsigned __int64)qword_1802090E8 >= 8 )
    v32 = (__int64 *)qword_1802090D0;
  v33 = a2;
  if ( a2[3] >= 8 )
    v33 = (_BYTE *)*a2;
  if ( v21 == qword_1802090E0 )
  {
    if ( v21 )
    {
      v34 = v33 - (_BYTE *)v32;
      while ( 1 )
      {
        v35 = *(_WORD *)((char *)v32 + v34);
        if ( v35 != *(_WORD *)v32 )
          break;
        v32 = (__int64 *)((char *)v32 + 2);
        if ( !--v21 )
          goto LABEL_62;
      }
      v36 = v35 < *(_WORD *)v32 ? -1 : 1;
    }
    else
    {
LABEL_62:
      v36 = 0;
    }
    if ( !v36 )
LABEL_64:
      *(_BYTE *)(*(_QWORD *)a1 + 1467LL) = 1;
  }
  v37 = &qword_180209150;
  if ( (unsigned __int64)qword_180209168 >= 8 )
    v37 = (__int64 *)qword_180209150;
  v38 = a2;
  v39 = a2[3];
  if ( v39 >= 8 )
    v38 = (_BYTE *)*a2;
  v40 = a2[2];
  if ( v40 == qword_180209160 )
  {
    v41 = a2[2];
    if ( v40 )
    {
      v42 = v38 - (_BYTE *)v37;
      while ( 1 )
      {
        v43 = *(_WORD *)((char *)v37 + v42);
        if ( v43 != *(_WORD *)v37 )
          break;
        v37 = (__int64 *)((char *)v37 + 2);
        if ( !--v41 )
          goto LABEL_74;
      }
      v44 = v43 < *(_WORD *)v37 ? -1 : 1;
    }
    else
    {
LABEL_74:
      v44 = 0;
    }
    if ( !v44 )
      goto LABEL_109;
  }
  v45 = &qword_1802090F0;
  if ( (unsigned __int64)qword_180209108 >= 8 )
    v45 = (__int64 *)qword_1802090F0;
  v46 = a2;
  if ( v39 >= 8 )
    v46 = (_BYTE *)*a2;
  if ( v40 == qword_180209100 )
  {
    v47 = a2[2];
    if ( v40 )
    {
      v48 = v46 - (_BYTE *)v45;
      while ( 1 )
      {
        v49 = *(_WORD *)((char *)v45 + v48);
        if ( v49 != *(_WORD *)v45 )
          break;
        v45 = (__int64 *)((char *)v45 + 2);
        if ( !--v47 )
          goto LABEL_85;
      }
      v50 = v49 < *(_WORD *)v45 ? -1 : 1;
    }
    else
    {
LABEL_85:
      v50 = 0;
    }
    if ( !v50 )
      goto LABEL_109;
  }
  v51 = &qword_180209110;
  if ( (unsigned __int64)qword_180209128 >= 8 )
    v51 = (__int64 *)qword_180209110;
  v52 = a2;
  if ( v39 >= 8 )
    v52 = (_BYTE *)*a2;
  if ( v40 == qword_180209120 )
  {
    v53 = a2[2];
    if ( v40 )
    {
      v54 = v52 - (_BYTE *)v51;
      while ( 1 )
      {
        v55 = *(_WORD *)((char *)v51 + v54);
        if ( v55 != *(_WORD *)v51 )
          break;
        v51 = (__int64 *)((char *)v51 + 2);
        if ( !--v53 )
          goto LABEL_96;
      }
      v56 = v55 < *(_WORD *)v51 ? -1 : 1;
    }
    else
    {
LABEL_96:
      v56 = 0;
    }
    if ( !v56 )
      goto LABEL_109;
  }
  v57 = &qword_180209130;
  if ( (unsigned __int64)qword_180209148 >= 8 )
    v57 = (__int64 *)qword_180209130;
  if ( v39 >= 8 )
    a2 = (unsigned __int64 *)*a2;
  if ( v40 == qword_180209140 )
  {
    if ( v40 )
    {
      v58 = (char *)a2 - (char *)v57;
      while ( 1 )
      {
        v59 = *(_WORD *)((char *)v57 + v58);
        if ( v59 != *(_WORD *)v57 )
          break;
        v57 = (__int64 *)((char *)v57 + 2);
        if ( !--v40 )
          goto LABEL_107;
      }
      v60 = v59 < *(_WORD *)v57 ? -1 : 1;
    }
    else
    {
LABEL_107:
      v60 = 0;
    }
    if ( !v60 )
LABEL_109:
      *(_BYTE *)(*(_QWORD *)a1 + 1468LL) = 1;
  }
  return unknown_libname_101(v64);
}
