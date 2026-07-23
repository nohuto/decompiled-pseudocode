/*
 * XREFs of PfSnParametersRead @ 0x1407BF810
 * Callers:
 *     PfpParametersWatcher @ 0x1408E0D60 (PfpParametersWatcher.c)
 *     PfpParametersInitialize @ 0x140A6B864 (PfpParametersInitialize.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140252F68 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wcsupr @ 0x1403D2560 (_wcsupr.c)
 *     PfpGetParameter @ 0x1407BFD5C (PfpGetParameter.c)
 *     PfSnParametersVerify @ 0x1407BFE4C (PfSnParametersVerify.c)
 */

__int64 __fastcall PfSnParametersRead(__int64 a1)
{
  __int64 v1; // rsi
  _OWORD *v3; // rax
  char *v4; // rdx
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  void *v15; // r15
  bool v16; // sf
  _DWORD *v17; // r13
  const wchar_t **v18; // rax
  int v19; // r12d
  int *v20; // rbx
  char *v21; // r14
  const wchar_t *v22; // rdi
  int v23; // eax
  wchar_t *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  wchar_t *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  char *v30; // rax
  wchar_t v31; // r9
  wchar_t *v32; // rax
  wchar_t *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  wchar_t *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  char *v39; // rax
  wchar_t v40; // r9
  wchar_t *v41; // rax
  wchar_t *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  wchar_t *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  char *v48; // rax
  wchar_t v49; // r9
  wchar_t *v50; // rax
  __int64 result; // rax
  _OWORD *v52; // rbx
  char *v53; // rax
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int64 v62; // rax
  __int64 v63; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v64; // [rsp+40h] [rbp-C8h]
  _OWORD *v65; // [rsp+48h] [rbp-C0h]
  char v66[8]; // [rsp+58h] [rbp-B0h] BYREF
  char v67; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t String[128]; // [rsp+E8h] [rbp-20h] BYREF
  wchar_t pszDest[80]; // [rsp+1F8h] [rbp+F0h] BYREF

  v1 = 3LL;
  v65 = (_OWORD *)(a1 + 96);
  v3 = (_OWORD *)(a1 + 96);
  v4 = v66;
  v5 = 3LL;
  do
  {
    v6 = v3[1];
    *(_OWORD *)v4 = *v3;
    v7 = v3[2];
    *((_OWORD *)v4 + 1) = v6;
    v8 = v3[3];
    *((_OWORD *)v4 + 2) = v7;
    v9 = v3[4];
    *((_OWORD *)v4 + 3) = v8;
    v10 = v3[5];
    *((_OWORD *)v4 + 4) = v9;
    v11 = v3[6];
    *((_OWORD *)v4 + 5) = v10;
    v12 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v11;
    v4 += 128;
    *((_OWORD *)v4 - 1) = v12;
    --v5;
  }
  while ( v5 );
  v13 = *v3;
  v14 = *((_QWORD *)v3 + 2);
  v15 = *(void **)(a1 + 8);
  *(_OWORD *)v4 = v13;
  *((_QWORD *)v4 + 2) = v14;
  v63 = 4LL;
  v16 = (int)PfpGetParameter(v15, (__int64)&v63) < 0;
  v17 = (_DWORD *)&v63 + 1;
  v18 = (const wchar_t **)(a1 + 520);
  v19 = 0;
  if ( v16 )
    v17 = 0LL;
  v64 = a1 + 520;
  v20 = (int *)v66;
  v21 = &v67;
  do
  {
    v22 = *v18;
    if ( v17 )
      v23 = 2 - ((*v17 & (1 << v19)) != 0);
    else
      v23 = 0;
    *v20 = v23;
    RtlStringCbCopyW(pszDest, 0xA0uLL, v22);
    v24 = pszDest;
    v25 = 80LL;
    do
    {
      if ( !*v24 )
        break;
      ++v24;
      --v25;
    }
    while ( v25 );
    if ( v25 )
      v26 = 80 - v25;
    else
      v26 = 0LL;
    if ( v25 )
    {
      v27 = &pszDest[v26];
      v28 = 80 - v26;
      if ( 80 != v26 )
      {
        v29 = 2147483646LL;
        v30 = (char *)((char *)L"MaxNumPages" - (char *)v27);
        do
        {
          if ( !v29 )
            break;
          v31 = *(_WORD *)&v30[(_QWORD)v27];
          if ( !v31 )
            break;
          *v27 = v31;
          --v29;
          ++v27;
          --v28;
        }
        while ( v28 );
      }
      v32 = v27 - 1;
      if ( v28 )
        v32 = v27;
      *v32 = 0;
    }
    LODWORD(v63) = 4;
    PfpGetParameter(v15, (__int64)&v63);
    RtlStringCbCopyW(pszDest, 0xA0uLL, v22);
    v33 = pszDest;
    v34 = 80LL;
    do
    {
      if ( !*v33 )
        break;
      ++v33;
      --v34;
    }
    while ( v34 );
    if ( v34 )
      v35 = 80 - v34;
    else
      v35 = 0LL;
    if ( v34 )
    {
      v36 = &pszDest[v35];
      v37 = 80 - v35;
      if ( 80 != v35 )
      {
        v38 = 2147483646LL;
        v39 = (char *)((char *)L"MaxNumSections" - (char *)v36);
        do
        {
          if ( !v38 )
            break;
          v40 = *(wchar_t *)((char *)v36 + (_QWORD)v39);
          if ( !v40 )
            break;
          *v36 = v40;
          --v38;
          ++v36;
          --v37;
        }
        while ( v37 );
      }
      v41 = v36 - 1;
      if ( v37 )
        v41 = v36;
      *v41 = 0;
    }
    LODWORD(v63) = 4;
    PfpGetParameter(v15, (__int64)&v63);
    RtlStringCbCopyW(pszDest, 0xA0uLL, v22);
    v42 = pszDest;
    v43 = 80LL;
    do
    {
      if ( !*v42 )
        break;
      ++v42;
      --v43;
    }
    while ( v43 );
    if ( v43 )
      v44 = 80 - v43;
    else
      v44 = 0LL;
    if ( v43 )
    {
      v45 = &pszDest[v44];
      v46 = 80 - v44;
      if ( 80 != v44 )
      {
        v47 = 2147483646LL;
        v48 = (char *)((char *)L"TimerPeriod" - (char *)v45);
        do
        {
          if ( !v47 )
            break;
          v49 = *(_WORD *)&v48[(_QWORD)v45];
          if ( !v49 )
            break;
          *v45 = v49;
          --v47;
          ++v45;
          --v46;
        }
        while ( v46 );
      }
      v50 = v45 - 1;
      if ( v46 )
        v50 = v45;
      *v50 = 0;
    }
    LODWORD(v63) = 8;
    PfpGetParameter(v15, (__int64)&v63);
    ++v19;
    v18 = (const wchar_t **)(v64 + 8);
    v21 += 16;
    ++v20;
    v64 += 8LL;
  }
  while ( v19 < 2 );
  LODWORD(v63) = 96;
  PfpGetParameter(v15, (__int64)&v63);
  LODWORD(v63) = 4;
  PfpGetParameter(v15, (__int64)&v63);
  LODWORD(v63) = 4;
  PfpGetParameter(v15, (__int64)&v63);
  LODWORD(v63) = 4;
  PfpGetParameter(v15, (__int64)&v63);
  LODWORD(v63) = 256;
  PfpGetParameter(v15, (__int64)&v63);
  String[127] = 0;
  wcsupr(String);
  LODWORD(v63) = 4;
  PfpGetParameter(v15, (__int64)&v63);
  result = PfSnParametersVerify(v66);
  v52 = v65;
  if ( (int)result >= 0 )
  {
    v53 = v66;
    do
    {
      v54 = *((_OWORD *)v53 + 1);
      *v52 = *(_OWORD *)v53;
      v55 = *((_OWORD *)v53 + 2);
      v52[1] = v54;
      v56 = *((_OWORD *)v53 + 3);
      v52[2] = v55;
      v57 = *((_OWORD *)v53 + 4);
      v52[3] = v56;
      v58 = *((_OWORD *)v53 + 5);
      v52[4] = v57;
      v59 = *((_OWORD *)v53 + 6);
      v52[5] = v58;
      v60 = *((_OWORD *)v53 + 7);
      v53 += 128;
      v52[6] = v59;
      v52 += 8;
      *(v52 - 1) = v60;
      --v1;
    }
    while ( v1 );
    v61 = *(_OWORD *)v53;
    v62 = *((_QWORD *)v53 + 2);
    *v52 = v61;
    *((_QWORD *)v52 + 2) = v62;
    return 0LL;
  }
  return result;
}
