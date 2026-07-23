/*
 * XREFs of HvAnalyzeLogFiles @ 0x140880D8C
 * Callers:
 *     HvLoadHive @ 0x1406FA774 (HvLoadHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvpHeaderCheckSum @ 0x1406FC8D4 (HvpHeaderCheckSum.c)
 *     HvpDetermineIncrementalLogFileMaximums @ 0x1408818D8 (HvpDetermineIncrementalLogFileMaximums.c)
 *     HvpDetermineLatestLogFile @ 0x140881990 (HvpDetermineLatestLogFile.c)
 *     HvpIsReadErrorTransient @ 0x140881AE4 (HvpIsReadErrorTransient.c)
 *     HvpLogIneligibleLogHeader @ 0x140881BE0 (HvpLogIneligibleLogHeader.c)
 *     HvpLogInvalidLogHeader @ 0x140881CA8 (HvpLogInvalidLogHeader.c)
 *     HvpLogUnreadableLog @ 0x140881E40 (HvpLogUnreadableLog.c)
 */

__int64 __fastcall HvAnalyzeLogFiles(
        unsigned __int64 a1,
        int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int128 *v12; // r15
  _QWORD *v13; // rsi
  int v14; // eax
  unsigned int v15; // r12d
  int v16; // r14d
  unsigned int v17; // edi
  __int128 *v18; // rsi
  _QWORD *v19; // r13
  unsigned int *v20; // r15
  __int64 v21; // r12
  __int64 v22; // r9
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  unsigned int v26; // r10d
  __int64 v27; // rdi
  __int64 v28; // r13
  unsigned int v29; // eax
  __int64 v30; // rdx
  _OWORD *v31; // rcx
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  __int128 *v34; // r15
  unsigned int v35; // r13d
  _QWORD *v36; // rsi
  unsigned int v37; // r12d
  unsigned int v38; // r14d
  _DWORD *v39; // rdx
  bool v40; // zf
  _DWORD *v41; // r8
  _DWORD *v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // r9d
  unsigned int v47; // r15d
  unsigned int v48; // r14d
  _DWORD *v49; // rax
  __int128 v50; // xmm0
  __int64 v51; // xmm1_8
  int v52; // eax
  char *v53; // r14
  char *v54; // rcx
  _DWORD *v55; // rax
  __int64 v56; // xmm1_8
  _DWORD *v57; // rax
  __int64 v58; // xmm1_8
  __int128 v59; // xmm0
  __int64 v60; // xmm1_8
  unsigned int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int128 v64; // xmm0
  __int64 v65; // xmm1_8
  __int128 v66; // xmm0
  __int64 v67; // xmm1_8
  char v69; // [rsp+30h] [rbp-D0h] BYREF
  char v70; // [rsp+31h] [rbp-CFh] BYREF
  char v71; // [rsp+32h] [rbp-CEh] BYREF
  char v72; // [rsp+33h] [rbp-CDh]
  unsigned int v73; // [rsp+34h] [rbp-CCh] BYREF
  int v74; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v75; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v76; // [rsp+48h] [rbp-B8h]
  __int64 v77; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v78; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+68h] [rbp-98h]
  __int64 v80; // [rsp+70h] [rbp-90h]
  __int128 v81; // [rsp+78h] [rbp-88h] BYREF
  __int128 v82; // [rsp+88h] [rbp-78h] BYREF
  __int128 v83; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v84[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v85; // [rsp+C8h] [rbp-38h]
  __int64 v86; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+E0h] [rbp-20h] BYREF
  char *v88; // [rsp+100h] [rbp+0h]
  __int64 v89; // [rsp+108h] [rbp+8h]
  char *v90; // [rsp+110h] [rbp+10h]
  __int64 v91; // [rsp+118h] [rbp+18h]
  char *v92; // [rsp+120h] [rbp+20h]
  __int64 v93; // [rsp+128h] [rbp+28h]
  int *v94; // [rsp+130h] [rbp+30h]
  __int64 v95; // [rsp+138h] [rbp+38h]
  unsigned int *v96; // [rsp+140h] [rbp+40h]
  __int64 v97; // [rsp+148h] [rbp+48h]

  v8 = 0;
  v74 = a2;
  v9 = a4;
  v10 = a5;
  v75 = a1;
  v11 = 0;
  v79 = a5;
  v76 = a6;
  v73 = a4;
  v72 = a3;
  v80 = a7;
  v77 = a8;
  v78 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  if ( a4 )
  {
    v12 = &v78;
    v13 = (_QWORD *)(a5 + 16);
    do
    {
      v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, char *))*(v13 - 1))(
              *v13,
              0LL,
              512LL,
              (char *)&v78 + 8 * v11);
      v15 = v14;
      if ( v14 < 0 )
      {
        if ( (unsigned __int8)HvpIsReadErrorTransient((unsigned int)v14) )
          return (unsigned int)-1073741491;
        HvpLogUnreadableLog(*((unsigned int *)v13 - 4), v15);
        *(_QWORD *)v12 = 0LL;
      }
      v9 = v73;
      ++v11;
      v13 += 3;
      v12 = (__int128 *)((char *)v12 + 8);
    }
    while ( v11 < v73 );
    v10 = v79;
  }
  v16 = 0;
  if ( !v9 )
    goto LABEL_61;
  v17 = v74;
  v18 = &v78;
  v19 = (_QWORD *)v75;
  v20 = (unsigned int *)v10;
  v21 = v9;
  do
  {
    v22 = *(_QWORD *)v18;
    if ( !*(_QWORD *)v18 )
      goto LABEL_25;
    if ( *(_DWORD *)v22 == 1718052210
      && *(_DWORD *)(v22 + 4) == *(_DWORD *)(v22 + 8)
      && *(_QWORD *)(v22 + 12) == *v19
      && ((v23 = *(_DWORD *)(v22 + 28), v23 == 6) || v23 == 1)
      && (v24 = *(_DWORD *)(v22 + 40), (unsigned int)(v24 - 1) <= 0x7FFFDFFF)
      && (v24 & 0xFFF) == 0
      && (v25 = HvpHeaderCheckSum(*(_DWORD **)v18), *(_DWORD *)(v22 + 508) == v25) )
    {
      if ( v26 >= v17 )
      {
        ++v16;
        goto LABEL_25;
      }
      HvpLogIneligibleLogHeader(*v20, v17, v26);
    }
    else
    {
      HvpLogInvalidLogHeader(v19, *v20, v22);
    }
    *(_QWORD *)v18 = 0LL;
LABEL_25:
    v20 += 6;
    v18 = (__int128 *)((char *)v18 + 8);
    --v21;
  }
  while ( v21 );
  v27 = v80;
  v28 = v77;
  if ( !v16 )
  {
LABEL_61:
    if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
    {
      v77 = 0x1000000LL;
      v85 = &v77;
      v86 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_140023DFD, 0LL, 0LL, 3u, v84);
    }
    return (unsigned int)-1073741492;
  }
  if ( v77 )
  {
    if ( v16 == 1 )
    {
      v29 = (_QWORD)v78 == 0LL;
    }
    else
    {
      LODWORD(v75) = *(_DWORD *)(v78 + 4);
      HIDWORD(v75) = *(_DWORD *)(*((_QWORD *)&v78 + 1) + 8LL);
      v29 = HvpDetermineLatestLogFile(&v75);
    }
    v30 = 4LL;
    v31 = (_OWORD *)*((_QWORD *)&v78 + v29);
    v32 = (_OWORD *)v28;
    do
    {
      *v32 = *v31;
      v32[1] = v31[1];
      v32[2] = v31[2];
      v32[3] = v31[3];
      v32[4] = v31[4];
      v32[5] = v31[5];
      v32[6] = v31[6];
      v32 += 8;
      v33 = v31[7];
      v31 += 8;
      *(v32 - 1) = v33;
      --v30;
    }
    while ( v30 );
    memset((void *)(v28 + 512), 0, 0xE00uLL);
    *(_DWORD *)(v28 + 28) = 0;
  }
  v34 = &v78;
  v35 = v73;
  v36 = (_QWORD *)(v79 + 8);
  v37 = 0;
  v38 = 0;
  do
  {
    v39 = *(_DWORD **)v34;
    if ( *(_QWORD *)v34 )
    {
      v40 = v39[7] == 6;
      v41 = (_DWORD *)&v81 + 6 * v37 + 3;
      v42 = (_DWORD *)&v82 + 6 * v37;
      *((_DWORD *)&v81 + 6 * v37 + 1) = *((_DWORD *)v36 - 2);
      v43 = v39[1];
      *((_DWORD *)&v81 + 6 * v37 + 2) = v43;
      *((_DWORD *)&v81 + 6 * v37) = v38;
      if ( v40 )
      {
        v44 = v36[1];
        *((_BYTE *)&v82 + 24 * v37 + 4) = 0;
        v45 = *v36;
        *(_QWORD *)v34 = 0LL;
        if ( (int)HvpDetermineIncrementalLogFileMaximums(v45, v44, v41, v42) < 0 )
          return (unsigned int)-1073741491;
      }
      else
      {
        *v41 = v43;
        *v42 = v39[10];
        *((_BYTE *)&v82 + 24 * v37 + 4) = 1;
      }
      ++v37;
    }
    ++v38;
    v36 += 3;
    v34 = (__int128 *)((char *)v34 + 8);
  }
  while ( v38 < v35 );
  v46 = dword_140C02130;
  v47 = v83;
  v48 = DWORD2(v81);
  if ( (unsigned int)dword_140C02130 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 8LL) )
  {
    v69 = v37;
    v88 = &v69;
    v70 = BYTE4(v81);
    v89 = 1LL;
    v90 = &v70;
    v71 = BYTE12(v82);
    v92 = &v71;
    v94 = &v74;
    v96 = &v73;
    v91 = 1LL;
    v93 = 1LL;
    v74 = v48;
    v95 = 4LL;
    v73 = v47;
    v97 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)byte_140023E31, 0LL, 0LL, 7u, &v87);
    v46 = dword_140C02130;
  }
  if ( v37 == 1 )
  {
    v49 = v76;
    v50 = v81;
    v51 = v82;
    goto LABEL_47;
  }
  if ( v72 )
  {
    v75 = __PAIR64__(v47, v48);
    v61 = HvpDetermineLatestLogFile(&v75);
    v62 = v61 == 0 ? 0x18 : 0;
    v63 = 3LL * v61;
    v40 = *(_DWORD *)((char *)&v81 + v62 + 12) + 1 == *((_DWORD *)&v81 + 6 * v61 + 2);
    v49 = v76;
    if ( v40 )
    {
      v64 = *(__int128 *)((char *)&v81 + v62);
      *v76 = 2;
      v65 = *(_QWORD *)((char *)&v82 + v62);
      *(_OWORD *)v27 = v64;
      v66 = *(__int128 *)((char *)&v81 + 8 * v63);
      *(_QWORD *)(v27 + 16) = v65;
      v67 = *((_QWORD *)&v82 + v63);
      *(_OWORD *)(v27 + 24) = v66;
      *(_QWORD *)(v27 + 40) = v67;
    }
    else
    {
      v50 = *(__int128 *)((char *)&v81 + 8 * v63);
      v51 = *((_QWORD *)&v82 + v63);
LABEL_47:
      *v49 = 1;
      *(_OWORD *)v27 = v50;
      *(_QWORD *)(v27 + 16) = v51;
    }
  }
  else
  {
    if ( v48 >= v47 )
    {
      v52 = DWORD1(v83);
      v54 = (char *)&v82 + 8;
      v47 = v48;
      v53 = (char *)&v81;
    }
    else
    {
      v52 = HIDWORD(v81);
      v53 = (char *)&v82 + 8;
      v54 = (char *)&v81;
    }
    if ( v52 + 1 == v47 )
    {
      v57 = v76;
      v58 = *((_QWORD *)v54 + 2);
      *(_OWORD *)v27 = *(_OWORD *)v54;
      v59 = *(_OWORD *)v53;
      *(_QWORD *)(v27 + 16) = v58;
      v60 = *((_QWORD *)v53 + 2);
      *(_OWORD *)(v27 + 24) = v59;
      *(_QWORD *)(v27 + 40) = v60;
      *v57 = 2;
    }
    else
    {
      if ( v46 > 5 && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000000LL) )
      {
        v77 = 0x1000000LL;
        v85 = &v77;
        v86 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02130,
          (unsigned __int8 *)byte_140023DC0,
          0LL,
          0LL,
          3u,
          v84);
      }
      v55 = v76;
      v56 = *((_QWORD *)v53 + 2);
      *(_OWORD *)v27 = *(_OWORD *)v53;
      *(_QWORD *)(v27 + 16) = v56;
      *v55 = 1;
    }
  }
  return v8;
}
