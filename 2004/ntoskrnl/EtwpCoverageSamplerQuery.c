/*
 * XREFs of EtwpCoverageSamplerQuery @ 0x140942E94
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x140944254 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     RtlStringCchCopyNW @ 0x14036EF30 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x14093E904 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x14093ECB8 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureFlush @ 0x14093F240 (EtwpCovSampCaptureFlush.c)
 *     EtwpCovSampCaptureFlushStats @ 0x14093F2B8 (EtwpCovSampCaptureFlushStats.c)
 *     EtwpCovSampContextPruneModules @ 0x140940D44 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140941E88 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140942DA8 (EtwpCoverageSamplerFreeTable.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageSamplerQuery(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned int v7; // r12d
  __int64 *v8; // r15
  signed int v9; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ecx
  __int64 *v12; // rax
  unsigned __int64 v13; // rax
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // esi
  struct _KTHREAD *v18; // rax
  __int64 *v19; // r9
  _OWORD **v20; // r10
  __int64 *v21; // r8
  unsigned int v22; // edx
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // ecx
  int v27; // eax
  _QWORD *v28; // r8
  unsigned __int64 v29; // rcx
  int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // edx
  __int64 *PoolWithTag; // rax
  __int64 v38; // rsi
  __int64 v39; // r15
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r12
  char *v43; // rsi
  char *v44; // rax
  char *v45; // rsi
  _OWORD *v46; // rcx
  __int64 v47; // rdx
  char *v48; // rsi
  char *v49; // r9
  char *v50; // rsi
  __int64 *i; // rdx
  unsigned int v52; // r8d
  _DWORD *v53; // r10
  __int64 v54; // rdx
  char *v55; // rcx
  char *v56; // rsi
  void *v57; // r9
  unsigned int v58; // ecx
  unsigned int v59; // esi
  __int128 *v60; // r15
  char *v61; // rdx
  int v62; // edx
  _OWORD *v63; // r15
  __int64 *v64; // rsi
  __int64 *v65; // r15
  __int64 **v66; // rax
  unsigned int j; // ebx
  unsigned int v69; // [rsp+20h] [rbp-178h]
  unsigned int v70; // [rsp+24h] [rbp-174h]
  unsigned int v71; // [rsp+28h] [rbp-170h]
  __int64 *v72; // [rsp+30h] [rbp-168h]
  char *v73; // [rsp+38h] [rbp-160h]
  unsigned int v74; // [rsp+40h] [rbp-158h]
  unsigned int v75; // [rsp+44h] [rbp-154h]
  unsigned int v76; // [rsp+48h] [rbp-150h]
  int v77; // [rsp+4Ch] [rbp-14Ch]
  __int64 *v78; // [rsp+50h] [rbp-148h]
  __int128 v79; // [rsp+58h] [rbp-140h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+68h] [rbp-130h]
  __int64 v81; // [rsp+70h] [rbp-128h] BYREF
  unsigned int v82; // [rsp+78h] [rbp-120h]
  unsigned int v83; // [rsp+7Ch] [rbp-11Ch]
  int v84; // [rsp+80h] [rbp-118h]
  unsigned __int64 v85; // [rsp+88h] [rbp-110h]
  __int64 v86; // [rsp+90h] [rbp-108h]
  char *v87; // [rsp+98h] [rbp-100h]
  unsigned __int64 v88; // [rsp+A0h] [rbp-F8h]
  __int64 v89; // [rsp+A8h] [rbp-F0h]
  char *v90; // [rsp+B0h] [rbp-E8h]
  unsigned int *v91; // [rsp+B8h] [rbp-E0h]
  ULONG_PTR v92; // [rsp+C0h] [rbp-D8h]
  ULONG_PTR v93; // [rsp+C8h] [rbp-D0h]
  unsigned int v94; // [rsp+D0h] [rbp-C8h]
  __int64 v95; // [rsp+D8h] [rbp-C0h]
  unsigned __int64 v96; // [rsp+E0h] [rbp-B8h]
  char *v97; // [rsp+E8h] [rbp-B0h]
  wchar_t *v98; // [rsp+F0h] [rbp-A8h]
  __int64 *v99; // [rsp+F8h] [rbp-A0h]
  __int64 v100; // [rsp+100h] [rbp-98h]
  char *v101; // [rsp+108h] [rbp-90h]
  char *v102; // [rsp+110h] [rbp-88h]
  _DWORD *v103; // [rsp+118h] [rbp-80h]
  struct _KTHREAD *v104; // [rsp+120h] [rbp-78h]
  struct _KTHREAD *v105; // [rsp+128h] [rbp-70h]
  struct _KTHREAD *v106; // [rsp+130h] [rbp-68h]
  __int128 v107; // [rsp+138h] [rbp-60h] BYREF
  __int128 v108; // [rsp+148h] [rbp-50h]

  v91 = a4;
  v83 = a3;
  v100 = a2;
  v93 = BugCheckParameter2;
  v81 = 0LL;
  v5 = qword_140C196E8;
  v86 = qword_140C196E8;
  v6 = BugCheckParameter2 + 16;
  v92 = BugCheckParameter2 + 16;
  v73 = 0LL;
  v89 = 0LL;
  v79 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v78 = 0LL;
  v90 = 0LL;
  v9 = EtwpCovSampAcquireSamplerRundown(&v81);
  if ( v9 >= 0 )
  {
    if ( v81 == BugCheckParameter2 )
    {
      EtwpCovSampCaptureFlush(v5);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      v11 = 0;
      v12 = *(__int64 **)(BugCheckParameter2 + 1168);
      v72 = v12;
      while ( v12 != (__int64 *)(BugCheckParameter2 + 1168) )
      {
        v11 += *((_DWORD *)v12 + 4);
        v12 = (__int64 *)*v12;
      }
      v72 = v12;
      v76 = v11;
      v13 = 8LL * v11;
      v96 = v13;
      v14 = -1;
      v15 = -1;
      if ( v13 <= 0xFFFFFFFF )
        v15 = v13;
      v94 = v15;
      v9 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v13 <= 0xFFFFFFFF )
      {
        v16 = v15 + 716;
        if ( v15 + 716 >= v15 )
          v14 = v15 + 716;
        v82 = v14;
        v71 = v14;
        v9 = v16 < v15 ? 0xC0000095 : 0;
        if ( v16 >= v15 )
        {
          v17 = 0;
          v69 = 0;
          v70 = 0;
          v75 = 0;
          v74 = 0;
          *((_QWORD *)&v79 + 1) = &v79;
          *(_QWORD *)&v79 = &v79;
          v18 = KeGetCurrentThread();
          --v18->KernelApcDisable;
          ExAcquirePushLockSharedEx(v6 + 664, 0LL);
          v19 = *(__int64 **)(v6 + 712);
          v72 = v19;
LABEL_14:
          v20 = (_OWORD **)*((_QWORD *)&v79 + 1);
          while ( 1 )
          {
            v21 = v19;
            if ( v19 == (__int64 *)(v6 + 712) )
              break;
            v19 = (__int64 *)*v19;
            v72 = v19;
            if ( *((_DWORD *)v21 + 15) || (v21[6] & 0x100000) != 0 )
            {
              if ( !v21[4] )
              {
                if ( *(v21 - 1) == 1 )
                  _InterlockedIncrement((volatile signed __int32 *)(v6 + 1124));
                _InterlockedExchange((volatile __int32 *)v21 + 15, 0);
                v19 = v72;
                goto LABEL_14;
              }
              v69 = v17 + 1;
              ++v70;
              v22 = 2 * (unsigned __int16)*((_DWORD *)v21 + 12) + 2;
              v23 = v22 + v75;
              v24 = -1;
              if ( v22 + v75 >= v22 )
                v24 = v22 + v75;
              v75 = v24;
              v9 = v23 < v22 ? 0xC0000095 : 0;
              if ( v23 < v22 )
                goto LABEL_86;
              v25 = *((_DWORD *)v21 - 4) - (((unsigned __int8)*((_DWORD *)v21 - 4) - 1) & 3) + 3;
              v26 = v25 + v74;
              v27 = -1;
              if ( v25 + v74 >= v25 )
                v27 = v25 + v74;
              v74 = v27;
              v9 = v26 < v25 ? 0xC0000095 : 0;
              if ( v26 < v25 )
                goto LABEL_86;
              v28 = v21 + 9;
              if ( *v20 != &v79 )
LABEL_82:
                __fastfail(3u);
              *v28 = &v79;
              v28[1] = v20;
              *v20 = v28;
              v20 = (_OWORD **)v28;
              *((_QWORD *)&v79 + 1) = v28;
              v17 = v69;
            }
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 664), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v6 + 664));
          KeAbPostRelease(v6 + 664);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v29 = 48LL * v70;
          v30 = -1;
          if ( v29 <= 0xFFFFFFFF )
            v30 = 48 * v70;
          v94 = v30;
          v9 = v29 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v29 <= 0xFFFFFFFF )
          {
            v31 = v30 + v71;
            v32 = -1;
            if ( v31 >= v71 )
              v32 = v31;
            v71 = v32;
            v9 = v31 < v82 ? 0xC0000095 : 0;
            if ( v31 >= v82 )
            {
              v33 = v32 + v75;
              v34 = -1;
              if ( v32 + v75 >= v32 )
                v34 = v32 + v75;
              v71 = v34;
              v9 = v33 < v32 ? 0xC0000095 : 0;
              if ( v33 >= v32 )
              {
                v35 = v34 + v74;
                v36 = -1;
                if ( v34 + v74 >= v34 )
                  v36 = v34 + v74;
                v71 = v36;
                v9 = v35 < v34 ? 0xC0000095 : 0;
                if ( v35 >= v34 )
                {
                  v7 = v69;
                  if ( v83 < v36 )
                  {
                    *v91 = v36;
                    v9 = -1073741789;
                    goto LABEL_87;
                  }
                  if ( v69 )
                  {
                    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8 * v69, 0x56777445u);
                    v8 = PoolWithTag;
                    v78 = PoolWithTag;
                    if ( !PoolWithTag )
                    {
                      v9 = -1073741670;
                      goto LABEL_87;
                    }
                    memset(PoolWithTag, 0, 8 * v69);
                  }
                  v38 = v100;
                  if ( (*(_DWORD *)(v100 + 16) & 1) != 0 )
                  {
                    v39 = v86;
                    v40 = *(_QWORD *)(v86 + 952);
                    if ( v40 )
                    {
                      v95 = *(_QWORD *)(v86 + 952);
                      memset((void *)(v40 + 8), 0, 4LL * *(unsigned int *)(v40 + 4));
                    }
                    v41 = *(_QWORD *)(v39 + 960);
                    if ( v41 )
                    {
                      v95 = *(_QWORD *)(v39 + 960);
                      memset((void *)(v41 + 8), 0, 4LL * *(unsigned int *)(v41 + 4));
                    }
                  }
                  v42 = v38 + 20;
                  v89 = v42;
                  v43 = (char *)(v38 + 64);
                  v73 = v43;
                  *(_OWORD *)v42 = 0LL;
                  *(_OWORD *)(v42 + 16) = 0LL;
                  *(_QWORD *)(v42 + 32) = 0LL;
                  *(_DWORD *)(v42 + 40) = 0;
                  *(_DWORD *)v42 = 44;
                  *(_DWORD *)(v42 + 8) = *(_DWORD *)(BugCheckParameter2 + 1212);
                  *(_DWORD *)(v42 + 16) = 592;
                  *(_DWORD *)(v42 + 12) = 44;
                  v44 = v43;
                  v101 = v43;
                  v45 = v43 + 592;
                  v73 = v45;
                  v46 = (_OWORD *)(v6 + 8);
                  v47 = 4LL;
                  do
                  {
                    *(_OWORD *)v44 = *v46;
                    *((_OWORD *)v44 + 1) = v46[1];
                    *((_OWORD *)v44 + 2) = v46[2];
                    *((_OWORD *)v44 + 3) = v46[3];
                    *((_OWORD *)v44 + 4) = v46[4];
                    *((_OWORD *)v44 + 5) = v46[5];
                    *((_OWORD *)v44 + 6) = v46[6];
                    v44 += 128;
                    *((_OWORD *)v44 - 1) = v46[7];
                    v46 += 8;
                    --v47;
                  }
                  while ( v47 );
                  *(_OWORD *)v44 = *v46;
                  *((_OWORD *)v44 + 1) = v46[1];
                  *((_OWORD *)v44 + 2) = v46[2];
                  *((_OWORD *)v44 + 3) = v46[3];
                  *((_OWORD *)v44 + 4) = v46[4];
                  *(_DWORD *)(v42 + 24) = 60;
                  *(_DWORD *)(v42 + 20) = (_DWORD)v45 - v42;
                  v90 = v45;
                  v48 = v45 + 60;
                  *(_DWORD *)(v42 + 32) = v76;
                  *(_DWORD *)(v42 + 28) = (_DWORD)v48 - v42;
                  v49 = v48;
                  v97 = v48;
                  v50 = &v48[v96];
                  v73 = v50;
                  v102 = v50;
                  for ( i = *(__int64 **)(BugCheckParameter2 + 1168); ; i = (__int64 *)*i )
                  {
                    v72 = i;
                    if ( i == (__int64 *)(BugCheckParameter2 + 1168) )
                      break;
                    v99 = i;
                    v52 = 0;
                    v84 = 0;
                    while ( v52 < *((_DWORD *)i + 5) )
                    {
                      v53 = (_DWORD *)(i[3] + 8LL * v52);
                      v103 = v53;
                      if ( *(_QWORD *)v53 )
                      {
                        if ( v49 >= v50 )
                          break;
                        *(_DWORD *)v49 = *v53;
                        *((_DWORD *)v49 + 1) = v53[1];
                        v49 += 8;
                        v97 = v49;
                      }
                      v84 = ++v52;
                    }
                  }
                  v54 = v70;
                  *(_DWORD *)(v42 + 40) = v70;
                  *(_DWORD *)(v42 + 36) = (_DWORD)v50 - v42;
                  v55 = v50;
                  v87 = v50;
                  v56 = &v50[48 * v54];
                  memset(v55, 0, 48 * v54);
                  v57 = v56;
                  v85 = (unsigned __int64)v56;
                  v98 = (wchar_t *)&v56[v74];
                  v58 = v74 + (_DWORD)v56;
                  pszDest = v98;
                  v59 = v75 + (_DWORD)v98;
                  v73 = (char *)v98 + v75;
                  v88 = (unsigned __int64)v73;
                  v77 = 0;
                  v60 = (__int128 *)v79;
                  v72 = (__int64 *)v79;
                  while ( v60 != &v79 )
                  {
                    v72 = *(__int64 **)v60;
                    v61 = v87;
                    *((_DWORD *)v87 + 2) = (_DWORD)v57 - v42;
                    *((_DWORD *)v61 + 3) = *((_DWORD *)v60 - 22);
                    *(_DWORD *)v61 = v58 - v42;
                    *((_DWORD *)v61 + 1) = (unsigned __int16)*((_DWORD *)v60 - 6);
                    *((_DWORD *)v61 + 4) = *((_DWORD *)v60 - 27);
                    *((_DWORD *)v61 + 5) = *((_DWORD *)v60 - 28);
                    *((_DWORD *)v61 + 6) = *((_DWORD *)v60 - 26);
                    *((_DWORD *)v61 + 7) = *((_DWORD *)v60 - 5);
                    *((_DWORD *)v61 + 8) = *((_DWORD *)v60 - 4);
                    *((_DWORD *)v61 + 9) = *((_DWORD *)v60 + 4);
                    *((_DWORD *)v61 + 10) = *((_DWORD *)v60 + 5);
                    *((_DWORD *)v61 + 11) = *((_DWORD *)v60 + 6);
                    v87 = v61 + 48;
                    memmove(v57, *((const void **)v60 - 12), *((unsigned int *)v60 - 22));
                    v85 = (*((unsigned int *)v60 - 22) + v85 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( v85 > (unsigned __int64)v98 )
                      break;
                    RtlStringCchCopyNW(
                      pszDest,
                      (__int64)(v88 - (_QWORD)pszDest) >> 1,
                      *((STRSAFE_PCNZWCH *)v60 - 4),
                      (unsigned __int16)*((_DWORD *)v60 - 6));
                    pszDest += (unsigned int)(unsigned __int16)*((_DWORD *)v60 - 6) + 1;
                    if ( (unsigned __int64)pszDest > v88 )
                      break;
                    v104 = KeGetCurrentThread();
                    --v104->KernelApcDisable;
                    ExAcquirePushLockExclusiveEx(v6 + 664, 0LL);
                    v105 = KeGetCurrentThread();
                    *(_QWORD *)(v6 + 672) = v105;
                    v62 = v77;
                    v78[v77] = *((_QWORD *)v60 - 5);
                    v77 = v62 + 1;
                    *((_QWORD *)v60 - 5) = 0LL;
                    *((_QWORD *)v60 - 4) = 0LL;
                    *((_DWORD *)v60 - 6) &= 0xFFFF0000;
                    *((_DWORD *)v60 - 6) |= 0x80000u;
                    *(_QWORD *)(v6 + 672) = 0LL;
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 664));
                    KeAbPostRelease(v6 + 664);
                    v106 = KeGetCurrentThread();
                    KeLeaveCriticalRegionThread((__int64)v106);
                    --v70;
                    if ( *((_QWORD *)v60 - 10) == 1LL )
                      _InterlockedIncrement((volatile signed __int32 *)(v6 + 1124));
                    _InterlockedExchange((volatile __int32 *)v60 - 3, 0);
                    v59 = (unsigned int)v73;
                    v42 = v89;
                    v60 = (__int128 *)v72;
                    v58 = (unsigned int)pszDest;
                    v57 = (void *)v85;
                  }
                  v63 = v90;
                  *(_OWORD *)v90 = *(_OWORD *)(v6 + 600);
                  v63[1] = *(_OWORD *)(v6 + 616);
                  v63[2] = *(_OWORD *)(v6 + 632);
                  *((_QWORD *)v63 + 6) = *(_QWORD *)(v6 + 648);
                  *((_DWORD *)v63 + 14) = *(_DWORD *)(v6 + 656);
                  *(_OWORD *)(v6 + 600) = 0LL;
                  *(_OWORD *)(v6 + 616) = 0LL;
                  *(_OWORD *)(v6 + 632) = 0LL;
                  *(_QWORD *)(v6 + 648) = 0LL;
                  *(_DWORD *)(v6 + 656) = 0;
                  v107 = 0LL;
                  v108 = 0LL;
                  EtwpCovSampCaptureFlushStats(v86, &v107);
                  *(_OWORD *)((char *)v63 + 28) = v107;
                  *(_OWORD *)((char *)v63 + 44) = v108;
                  *(_DWORD *)(v42 + 4) = v59 - v42;
                  v64 = *(__int64 **)(BugCheckParameter2 + 1168);
                  v72 = v64;
                  while ( v64 != (__int64 *)(BugCheckParameter2 + 1168) )
                  {
                    v65 = v64;
                    v99 = v64;
                    v64 = (__int64 *)*v64;
                    v72 = v64;
                    if ( v65 == *(__int64 **)(BugCheckParameter2 + 1152) )
                    {
                      memset((void *)v65[3], 0, 8LL * *((unsigned int *)v65 + 5));
                      *((_DWORD *)v65 + 4) = 0;
                    }
                    else
                    {
                      v66 = (__int64 **)v65[1];
                      if ( (__int64 *)v64[1] != v65 || *v66 != v65 )
                        goto LABEL_82;
                      *v66 = v64;
                      v64[1] = (__int64)v66;
                      --*(_DWORD *)(BugCheckParameter2 + 1184);
                      EtwpCoverageSamplerFreeTable(v65);
                    }
                  }
                  ++*(_DWORD *)(BugCheckParameter2 + 1212);
                  EtwpCovSampCaptureContextSetPaused(BugCheckParameter2, v86, 0);
                  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
                  KeAbPostRelease(BugCheckParameter2);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  EtwpCovSampContextPruneModules(v6);
                  *v91 = v71;
                  v9 = 0;
                  v8 = v78;
                }
              }
            }
          }
LABEL_86:
          v7 = v69;
        }
      }
    }
    else
    {
      v9 = -1073741431;
    }
  }
LABEL_87:
  if ( *(struct _KTHREAD **)(v6 + 672) == KeGetCurrentThread() )
  {
    *(_QWORD *)(v6 + 672) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 664));
    KeAbPostRelease(v6 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v8 )
  {
    for ( j = 0; j < v7; ++j )
      EtwpCovSampModuleNameInfoCleanup(&v8[j]);
    ExFreePoolWithTag(v8, 0x56777445u);
  }
  if ( v81 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C196E0);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v9;
}
