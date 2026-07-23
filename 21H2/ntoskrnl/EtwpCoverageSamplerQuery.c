/*
 * XREFs of EtwpCoverageSamplerQuery @ 0x1409465F4
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x1409479B4 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     RtlStringCchCopyNW @ 0x1403710C0 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140942064 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x140942418 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureFlush @ 0x1409429A0 (EtwpCovSampCaptureFlush.c)
 *     EtwpCovSampCaptureFlushStats @ 0x140942A18 (EtwpCovSampCaptureFlushStats.c)
 *     EtwpCovSampContextPruneModules @ 0x1409444A4 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1409455E8 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140946508 (EtwpCoverageSamplerFreeTable.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rcx
  int v33; // edx
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // edx
  __int64 *PoolWithTag; // rax
  __int64 v41; // rsi
  __int64 v42; // r15
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r12
  char *v46; // rsi
  char *v47; // rax
  char *v48; // rsi
  _OWORD *v49; // rcx
  __int64 v50; // rdx
  char *v51; // rsi
  char *v52; // r9
  char *v53; // rsi
  __int64 *i; // rdx
  unsigned int v55; // r8d
  _DWORD *v56; // r10
  __int64 v57; // rdx
  char *v58; // rcx
  char *v59; // rsi
  void *v60; // r9
  unsigned int v61; // ecx
  unsigned int v62; // esi
  __int128 *v63; // r15
  char *v64; // rdx
  int v65; // edx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  _OWORD *v69; // r15
  __int64 *v70; // rsi
  __int64 *v71; // r15
  __int64 **v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  unsigned int j; // ebx
  unsigned int v84; // [rsp+20h] [rbp-178h]
  unsigned int v85; // [rsp+24h] [rbp-174h]
  unsigned int v86; // [rsp+28h] [rbp-170h]
  __int64 *v87; // [rsp+30h] [rbp-168h]
  char *v88; // [rsp+38h] [rbp-160h]
  unsigned int v89; // [rsp+40h] [rbp-158h]
  unsigned int v90; // [rsp+44h] [rbp-154h]
  unsigned int v91; // [rsp+48h] [rbp-150h]
  int v92; // [rsp+4Ch] [rbp-14Ch]
  __int64 *v93; // [rsp+50h] [rbp-148h]
  __int128 v94; // [rsp+58h] [rbp-140h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+68h] [rbp-130h]
  __int64 v96; // [rsp+70h] [rbp-128h] BYREF
  unsigned int v97; // [rsp+78h] [rbp-120h]
  unsigned int v98; // [rsp+7Ch] [rbp-11Ch]
  int v99; // [rsp+80h] [rbp-118h]
  unsigned __int64 v100; // [rsp+88h] [rbp-110h]
  __int64 v101; // [rsp+90h] [rbp-108h]
  char *v102; // [rsp+98h] [rbp-100h]
  unsigned __int64 v103; // [rsp+A0h] [rbp-F8h]
  __int64 v104; // [rsp+A8h] [rbp-F0h]
  char *v105; // [rsp+B0h] [rbp-E8h]
  unsigned int *v106; // [rsp+B8h] [rbp-E0h]
  ULONG_PTR v107; // [rsp+C0h] [rbp-D8h]
  ULONG_PTR v108; // [rsp+C8h] [rbp-D0h]
  unsigned int v109; // [rsp+D0h] [rbp-C8h]
  __int64 v110; // [rsp+D8h] [rbp-C0h]
  unsigned __int64 v111; // [rsp+E0h] [rbp-B8h]
  char *v112; // [rsp+E8h] [rbp-B0h]
  wchar_t *v113; // [rsp+F0h] [rbp-A8h]
  __int64 *v114; // [rsp+F8h] [rbp-A0h]
  __int64 v115; // [rsp+100h] [rbp-98h]
  char *v116; // [rsp+108h] [rbp-90h]
  char *v117; // [rsp+110h] [rbp-88h]
  _DWORD *v118; // [rsp+118h] [rbp-80h]
  struct _KTHREAD *v119; // [rsp+120h] [rbp-78h]
  struct _KTHREAD *v120; // [rsp+128h] [rbp-70h]
  struct _KTHREAD *v121; // [rsp+130h] [rbp-68h]
  __int128 v122; // [rsp+138h] [rbp-60h] BYREF
  __int128 v123; // [rsp+148h] [rbp-50h]

  v106 = a4;
  v98 = a3;
  v115 = a2;
  v108 = BugCheckParameter2;
  v96 = 0LL;
  v5 = qword_140C198C8;
  v101 = qword_140C198C8;
  v6 = BugCheckParameter2 + 16;
  v107 = BugCheckParameter2 + 16;
  v88 = 0LL;
  v104 = 0LL;
  v94 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v93 = 0LL;
  v105 = 0LL;
  v9 = EtwpCovSampAcquireSamplerRundown(&v96);
  if ( v9 >= 0 )
  {
    if ( v96 == BugCheckParameter2 )
    {
      EtwpCovSampCaptureFlush(v5);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      v11 = 0;
      v12 = *(__int64 **)(BugCheckParameter2 + 1168);
      v87 = v12;
      while ( v12 != (__int64 *)(BugCheckParameter2 + 1168) )
      {
        v11 += *((_DWORD *)v12 + 4);
        v12 = (__int64 *)*v12;
      }
      v87 = v12;
      v91 = v11;
      v13 = 8LL * v11;
      v111 = v13;
      v14 = -1;
      v15 = -1;
      if ( v13 <= 0xFFFFFFFF )
        v15 = v13;
      v109 = v15;
      v9 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v13 <= 0xFFFFFFFF )
      {
        v16 = v15 + 716;
        if ( v15 + 716 >= v15 )
          v14 = v15 + 716;
        v97 = v14;
        v86 = v14;
        v9 = v16 < v15 ? 0xC0000095 : 0;
        if ( v16 >= v15 )
        {
          v17 = 0;
          v84 = 0;
          v85 = 0;
          v90 = 0;
          v89 = 0;
          *((_QWORD *)&v94 + 1) = &v94;
          *(_QWORD *)&v94 = &v94;
          v18 = KeGetCurrentThread();
          --v18->KernelApcDisable;
          ExAcquirePushLockSharedEx(v6 + 664, 0LL);
          v19 = *(__int64 **)(v6 + 712);
          v87 = v19;
LABEL_14:
          v20 = (_OWORD **)*((_QWORD *)&v94 + 1);
          while ( 1 )
          {
            v21 = v19;
            if ( v19 == (__int64 *)(v6 + 712) )
              break;
            v19 = (__int64 *)*v19;
            v87 = v19;
            if ( *((_DWORD *)v21 + 15) || (v21[6] & 0x100000) != 0 )
            {
              if ( !v21[4] )
              {
                if ( *(v21 - 1) == 1 )
                  _InterlockedIncrement((volatile signed __int32 *)(v6 + 1124));
                _InterlockedExchange((volatile __int32 *)v21 + 15, 0);
                v19 = v87;
                goto LABEL_14;
              }
              v84 = v17 + 1;
              ++v85;
              v22 = 2 * (unsigned __int16)*((_DWORD *)v21 + 12) + 2;
              v23 = v22 + v90;
              v24 = -1;
              if ( v22 + v90 >= v22 )
                v24 = v22 + v90;
              v90 = v24;
              v9 = v23 < v22 ? 0xC0000095 : 0;
              if ( v23 < v22 )
                goto LABEL_86;
              v25 = *((_DWORD *)v21 - 4) - (((unsigned __int8)*((_DWORD *)v21 - 4) - 1) & 3) + 3;
              v26 = v25 + v89;
              v27 = -1;
              if ( v25 + v89 >= v25 )
                v27 = v25 + v89;
              v89 = v27;
              v9 = v26 < v25 ? 0xC0000095 : 0;
              if ( v26 < v25 )
                goto LABEL_86;
              v28 = v21 + 9;
              if ( *v20 != &v94 )
LABEL_82:
                __fastfail(3u);
              *v28 = &v94;
              v28[1] = v20;
              *v20 = v28;
              v20 = (_OWORD **)v28;
              *((_QWORD *)&v94 + 1) = v28;
              v17 = v84;
            }
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 664), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v6 + 664));
          KeAbPostRelease(v6 + 664);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v29, v30, v31);
          v32 = 48LL * v85;
          v33 = -1;
          if ( v32 <= 0xFFFFFFFF )
            v33 = 48 * v85;
          v109 = v33;
          v9 = v32 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v32 <= 0xFFFFFFFF )
          {
            v34 = v33 + v86;
            v35 = -1;
            if ( v34 >= v86 )
              v35 = v34;
            v86 = v35;
            v9 = v34 < v97 ? 0xC0000095 : 0;
            if ( v34 >= v97 )
            {
              v36 = v35 + v90;
              v37 = -1;
              if ( v35 + v90 >= v35 )
                v37 = v35 + v90;
              v86 = v37;
              v9 = v36 < v35 ? 0xC0000095 : 0;
              if ( v36 >= v35 )
              {
                v38 = v37 + v89;
                v39 = -1;
                if ( v37 + v89 >= v37 )
                  v39 = v37 + v89;
                v86 = v39;
                v9 = v38 < v37 ? 0xC0000095 : 0;
                if ( v38 >= v37 )
                {
                  v7 = v84;
                  if ( v98 < v39 )
                  {
                    *v106 = v39;
                    v9 = -1073741789;
                    goto LABEL_87;
                  }
                  if ( v84 )
                  {
                    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8 * v84, 0x56777445u);
                    v8 = PoolWithTag;
                    v93 = PoolWithTag;
                    if ( !PoolWithTag )
                    {
                      v9 = -1073741670;
                      goto LABEL_87;
                    }
                    memset(PoolWithTag, 0, 8 * v84);
                  }
                  v41 = v115;
                  if ( (*(_DWORD *)(v115 + 16) & 1) != 0 )
                  {
                    v42 = v101;
                    v43 = *(_QWORD *)(v101 + 952);
                    if ( v43 )
                    {
                      v110 = *(_QWORD *)(v101 + 952);
                      memset((void *)(v43 + 8), 0, 4LL * *(unsigned int *)(v43 + 4));
                    }
                    v44 = *(_QWORD *)(v42 + 960);
                    if ( v44 )
                    {
                      v110 = *(_QWORD *)(v42 + 960);
                      memset((void *)(v44 + 8), 0, 4LL * *(unsigned int *)(v44 + 4));
                    }
                  }
                  v45 = v41 + 20;
                  v104 = v45;
                  v46 = (char *)(v41 + 64);
                  v88 = v46;
                  *(_OWORD *)v45 = 0LL;
                  *(_OWORD *)(v45 + 16) = 0LL;
                  *(_QWORD *)(v45 + 32) = 0LL;
                  *(_DWORD *)(v45 + 40) = 0;
                  *(_DWORD *)v45 = 44;
                  *(_DWORD *)(v45 + 8) = *(_DWORD *)(BugCheckParameter2 + 1212);
                  *(_DWORD *)(v45 + 16) = 592;
                  *(_DWORD *)(v45 + 12) = 44;
                  v47 = v46;
                  v116 = v46;
                  v48 = v46 + 592;
                  v88 = v48;
                  v49 = (_OWORD *)(v6 + 8);
                  v50 = 4LL;
                  do
                  {
                    *(_OWORD *)v47 = *v49;
                    *((_OWORD *)v47 + 1) = v49[1];
                    *((_OWORD *)v47 + 2) = v49[2];
                    *((_OWORD *)v47 + 3) = v49[3];
                    *((_OWORD *)v47 + 4) = v49[4];
                    *((_OWORD *)v47 + 5) = v49[5];
                    *((_OWORD *)v47 + 6) = v49[6];
                    v47 += 128;
                    *((_OWORD *)v47 - 1) = v49[7];
                    v49 += 8;
                    --v50;
                  }
                  while ( v50 );
                  *(_OWORD *)v47 = *v49;
                  *((_OWORD *)v47 + 1) = v49[1];
                  *((_OWORD *)v47 + 2) = v49[2];
                  *((_OWORD *)v47 + 3) = v49[3];
                  *((_OWORD *)v47 + 4) = v49[4];
                  *(_DWORD *)(v45 + 24) = 60;
                  *(_DWORD *)(v45 + 20) = (_DWORD)v48 - v45;
                  v105 = v48;
                  v51 = v48 + 60;
                  *(_DWORD *)(v45 + 32) = v91;
                  *(_DWORD *)(v45 + 28) = (_DWORD)v51 - v45;
                  v52 = v51;
                  v112 = v51;
                  v53 = &v51[v111];
                  v88 = v53;
                  v117 = v53;
                  for ( i = *(__int64 **)(BugCheckParameter2 + 1168); ; i = (__int64 *)*i )
                  {
                    v87 = i;
                    if ( i == (__int64 *)(BugCheckParameter2 + 1168) )
                      break;
                    v114 = i;
                    v55 = 0;
                    v99 = 0;
                    while ( v55 < *((_DWORD *)i + 5) )
                    {
                      v56 = (_DWORD *)(i[3] + 8LL * v55);
                      v118 = v56;
                      if ( *(_QWORD *)v56 )
                      {
                        if ( v52 >= v53 )
                          break;
                        *(_DWORD *)v52 = *v56;
                        *((_DWORD *)v52 + 1) = v56[1];
                        v52 += 8;
                        v112 = v52;
                      }
                      v99 = ++v55;
                    }
                  }
                  v57 = v85;
                  *(_DWORD *)(v45 + 40) = v85;
                  *(_DWORD *)(v45 + 36) = (_DWORD)v53 - v45;
                  v58 = v53;
                  v102 = v53;
                  v59 = &v53[48 * v57];
                  memset(v58, 0, 48 * v57);
                  v60 = v59;
                  v100 = (unsigned __int64)v59;
                  v113 = (wchar_t *)&v59[v89];
                  v61 = v89 + (_DWORD)v59;
                  pszDest = v113;
                  v62 = v90 + (_DWORD)v113;
                  v88 = (char *)v113 + v90;
                  v103 = (unsigned __int64)v88;
                  v92 = 0;
                  v63 = (__int128 *)v94;
                  v87 = (__int64 *)v94;
                  while ( v63 != &v94 )
                  {
                    v87 = *(__int64 **)v63;
                    v64 = v102;
                    *((_DWORD *)v102 + 2) = (_DWORD)v60 - v45;
                    *((_DWORD *)v64 + 3) = *((_DWORD *)v63 - 22);
                    *(_DWORD *)v64 = v61 - v45;
                    *((_DWORD *)v64 + 1) = (unsigned __int16)*((_DWORD *)v63 - 6);
                    *((_DWORD *)v64 + 4) = *((_DWORD *)v63 - 27);
                    *((_DWORD *)v64 + 5) = *((_DWORD *)v63 - 28);
                    *((_DWORD *)v64 + 6) = *((_DWORD *)v63 - 26);
                    *((_DWORD *)v64 + 7) = *((_DWORD *)v63 - 5);
                    *((_DWORD *)v64 + 8) = *((_DWORD *)v63 - 4);
                    *((_DWORD *)v64 + 9) = *((_DWORD *)v63 + 4);
                    *((_DWORD *)v64 + 10) = *((_DWORD *)v63 + 5);
                    *((_DWORD *)v64 + 11) = *((_DWORD *)v63 + 6);
                    v102 = v64 + 48;
                    memmove(v60, *((const void **)v63 - 12), *((unsigned int *)v63 - 22));
                    v100 = (*((unsigned int *)v63 - 22) + v100 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( v100 > (unsigned __int64)v113 )
                      break;
                    RtlStringCchCopyNW(
                      pszDest,
                      (__int64)(v103 - (_QWORD)pszDest) >> 1,
                      *((STRSAFE_PCNZWCH *)v63 - 4),
                      (unsigned __int16)*((_DWORD *)v63 - 6));
                    pszDest += (unsigned int)(unsigned __int16)*((_DWORD *)v63 - 6) + 1;
                    if ( (unsigned __int64)pszDest > v103 )
                      break;
                    v119 = KeGetCurrentThread();
                    --v119->KernelApcDisable;
                    ExAcquirePushLockExclusiveEx(v6 + 664, 0LL);
                    v120 = KeGetCurrentThread();
                    *(_QWORD *)(v6 + 672) = v120;
                    v65 = v92;
                    v93[v92] = *((_QWORD *)v63 - 5);
                    v92 = v65 + 1;
                    *((_QWORD *)v63 - 5) = 0LL;
                    *((_QWORD *)v63 - 4) = 0LL;
                    *((_DWORD *)v63 - 6) &= 0xFFFF0000;
                    *((_DWORD *)v63 - 6) |= 0x80000u;
                    *(_QWORD *)(v6 + 672) = 0LL;
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v6 + 664);
                    KeAbPostRelease(v6 + 664);
                    v121 = KeGetCurrentThread();
                    KeLeaveCriticalRegionThread((__int64)v121, v66, v67, v68);
                    --v85;
                    if ( *((_QWORD *)v63 - 10) == 1LL )
                      _InterlockedIncrement((volatile signed __int32 *)(v6 + 1124));
                    _InterlockedExchange((volatile __int32 *)v63 - 3, 0);
                    v62 = (unsigned int)v88;
                    v45 = v104;
                    v63 = (__int128 *)v87;
                    v61 = (unsigned int)pszDest;
                    v60 = (void *)v100;
                  }
                  v69 = v105;
                  *(_OWORD *)v105 = *(_OWORD *)(v6 + 600);
                  v69[1] = *(_OWORD *)(v6 + 616);
                  v69[2] = *(_OWORD *)(v6 + 632);
                  *((_QWORD *)v69 + 6) = *(_QWORD *)(v6 + 648);
                  *((_DWORD *)v69 + 14) = *(_DWORD *)(v6 + 656);
                  *(_OWORD *)(v6 + 600) = 0LL;
                  *(_OWORD *)(v6 + 616) = 0LL;
                  *(_OWORD *)(v6 + 632) = 0LL;
                  *(_QWORD *)(v6 + 648) = 0LL;
                  *(_DWORD *)(v6 + 656) = 0;
                  v122 = 0LL;
                  v123 = 0LL;
                  EtwpCovSampCaptureFlushStats(v101, &v122);
                  *(_OWORD *)((char *)v69 + 28) = v122;
                  *(_OWORD *)((char *)v69 + 44) = v123;
                  *(_DWORD *)(v45 + 4) = v62 - v45;
                  v70 = *(__int64 **)(BugCheckParameter2 + 1168);
                  v87 = v70;
                  while ( v70 != (__int64 *)(BugCheckParameter2 + 1168) )
                  {
                    v71 = v70;
                    v114 = v70;
                    v70 = (__int64 *)*v70;
                    v87 = v70;
                    if ( v71 == *(__int64 **)(BugCheckParameter2 + 1152) )
                    {
                      memset((void *)v71[3], 0, 8LL * *((unsigned int *)v71 + 5));
                      *((_DWORD *)v71 + 4) = 0;
                    }
                    else
                    {
                      v72 = (__int64 **)v71[1];
                      if ( (__int64 *)v70[1] != v71 || *v72 != v71 )
                        goto LABEL_82;
                      *v72 = v70;
                      v70[1] = (__int64)v72;
                      --*(_DWORD *)(BugCheckParameter2 + 1184);
                      EtwpCoverageSamplerFreeTable(v71);
                    }
                  }
                  ++*(_DWORD *)(BugCheckParameter2 + 1212);
                  EtwpCovSampCaptureContextSetPaused(BugCheckParameter2, v101, 0);
                  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock(BugCheckParameter2);
                  KeAbPostRelease(BugCheckParameter2);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v73, v74, v75);
                  EtwpCovSampContextPruneModules(v6);
                  *v106 = v86;
                  v9 = 0;
                  v8 = v93;
                }
              }
            }
          }
LABEL_86:
          v7 = v84;
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
      ExfTryToWakePushLock(v6 + 664);
    KeAbPostRelease(v6 + 664);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v76, v77, v78);
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v79, v80, v81);
  }
  if ( v8 )
  {
    for ( j = 0; j < v7; ++j )
      EtwpCovSampModuleNameInfoCleanup(&v8[j]);
    ExFreePoolWithTag(v8, 0x56777445u);
  }
  if ( v96 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&stru_140C198C0);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v9;
}
