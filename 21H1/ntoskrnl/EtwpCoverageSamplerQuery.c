/*
 * XREFs of EtwpCoverageSamplerQuery @ 0x140941C14
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x140942FE0 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlStringCchCopyNW @ 0x14036E300 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x14093D684 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x14093DA38 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampCaptureFlush @ 0x14093DFC0 (EtwpCovSampCaptureFlush.c)
 *     EtwpCovSampCaptureFlushStats @ 0x14093E038 (EtwpCovSampCaptureFlushStats.c)
 *     EtwpCovSampContextPruneModules @ 0x14093FAC4 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampModuleNameInfoCleanup @ 0x140940C08 (EtwpCovSampModuleNameInfoCleanup.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140941B28 (EtwpCoverageSamplerFreeTable.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageSamplerQuery(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  unsigned int v7; // r13d
  __int64 *v8; // r12
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
  __int64 v42; // r13
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
  __int64 v63; // r13
  char *v64; // rdx
  __int64 *v65; // r8
  int v66; // edx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  volatile __int32 *v70; // rcx
  _OWORD *v71; // r13
  __int64 *v72; // rsi
  __int64 *v73; // r13
  __int64 **v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned int j; // ebx
  unsigned int v86; // [rsp+20h] [rbp-178h]
  __int64 *v87; // [rsp+28h] [rbp-170h]
  unsigned int v88; // [rsp+30h] [rbp-168h]
  unsigned int v89; // [rsp+34h] [rbp-164h]
  char *v90; // [rsp+38h] [rbp-160h]
  unsigned int v91; // [rsp+40h] [rbp-158h]
  unsigned int v92; // [rsp+44h] [rbp-154h]
  unsigned int v93; // [rsp+48h] [rbp-150h]
  int v94; // [rsp+4Ch] [rbp-14Ch]
  __int64 *v95; // [rsp+50h] [rbp-148h]
  __int128 v96; // [rsp+58h] [rbp-140h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+68h] [rbp-130h]
  __int64 v98; // [rsp+70h] [rbp-128h] BYREF
  unsigned int v99; // [rsp+78h] [rbp-120h]
  unsigned int v100; // [rsp+7Ch] [rbp-11Ch]
  int v101; // [rsp+80h] [rbp-118h]
  unsigned __int64 v102; // [rsp+88h] [rbp-110h]
  __int64 v103; // [rsp+90h] [rbp-108h]
  char *v104; // [rsp+98h] [rbp-100h]
  unsigned __int64 v105; // [rsp+A0h] [rbp-F8h]
  __int64 v106; // [rsp+A8h] [rbp-F0h]
  char *v107; // [rsp+B0h] [rbp-E8h]
  unsigned int *v108; // [rsp+B8h] [rbp-E0h]
  ULONG_PTR v109; // [rsp+C0h] [rbp-D8h]
  ULONG_PTR v110; // [rsp+C8h] [rbp-D0h]
  unsigned int v111; // [rsp+D0h] [rbp-C8h]
  __int64 v112; // [rsp+D8h] [rbp-C0h]
  unsigned __int64 v113; // [rsp+E0h] [rbp-B8h]
  char *v114; // [rsp+E8h] [rbp-B0h]
  wchar_t *v115; // [rsp+F0h] [rbp-A8h]
  __int64 *v116; // [rsp+F8h] [rbp-A0h]
  __int64 v117; // [rsp+100h] [rbp-98h]
  char *v118; // [rsp+108h] [rbp-90h]
  char *v119; // [rsp+110h] [rbp-88h]
  _DWORD *v120; // [rsp+118h] [rbp-80h]
  struct _KTHREAD *v121; // [rsp+120h] [rbp-78h]
  struct _KTHREAD *v122; // [rsp+128h] [rbp-70h]
  struct _KTHREAD *v123; // [rsp+130h] [rbp-68h]
  __int128 v124; // [rsp+138h] [rbp-60h] BYREF
  __int128 v125; // [rsp+148h] [rbp-50h]

  v108 = a4;
  v100 = a3;
  v117 = a2;
  v110 = BugCheckParameter2;
  v98 = 0LL;
  v5 = qword_140C19868;
  v103 = qword_140C19868;
  v6 = BugCheckParameter2 + 16;
  v109 = BugCheckParameter2 + 16;
  v90 = 0LL;
  v106 = 0LL;
  v96 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v95 = 0LL;
  v107 = 0LL;
  v9 = EtwpCovSampAcquireSamplerRundown(&v98);
  if ( v9 >= 0 )
  {
    if ( v98 == BugCheckParameter2 )
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
      v93 = v11;
      v13 = 8LL * v11;
      v113 = v13;
      v14 = -1;
      v15 = -1;
      if ( v13 <= 0xFFFFFFFF )
        v15 = v13;
      v111 = v15;
      v9 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v13 <= 0xFFFFFFFF )
      {
        v16 = v15 + 716;
        if ( v15 + 716 >= v15 )
          v14 = v15 + 716;
        v99 = v14;
        v89 = v14;
        v9 = v16 < v15 ? 0xC0000095 : 0;
        if ( v16 >= v15 )
        {
          v17 = 0;
          v86 = 0;
          v88 = 0;
          v92 = 0;
          v91 = 0;
          *((_QWORD *)&v96 + 1) = &v96;
          *(_QWORD *)&v96 = &v96;
          v18 = KeGetCurrentThread();
          --v18->KernelApcDisable;
          ExAcquirePushLockSharedEx(v6 + 664, 0LL);
          v19 = *(__int64 **)(v6 + 712);
          v87 = v19;
LABEL_14:
          v20 = (_OWORD **)*((_QWORD *)&v96 + 1);
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
              v86 = v17 + 1;
              ++v88;
              v22 = 2 * (unsigned __int16)*((_DWORD *)v21 + 12) + 2;
              v23 = v22 + v92;
              v24 = -1;
              if ( v22 + v92 >= v22 )
                v24 = v22 + v92;
              v92 = v24;
              v9 = v23 < v22 ? 0xC0000095 : 0;
              if ( v23 < v22 )
                goto LABEL_86;
              v25 = *((_DWORD *)v21 - 4) - (((unsigned __int8)*((_DWORD *)v21 - 4) - 1) & 3) + 3;
              v26 = v25 + v91;
              v27 = -1;
              if ( v25 + v91 >= v25 )
                v27 = v25 + v91;
              v91 = v27;
              v9 = v26 < v25 ? 0xC0000095 : 0;
              if ( v26 < v25 )
                goto LABEL_86;
              v28 = v21 + 9;
              if ( *v20 != &v96 )
LABEL_82:
                __fastfail(3u);
              *v28 = &v96;
              v28[1] = v20;
              *v20 = v28;
              v20 = (_OWORD **)v28;
              *((_QWORD *)&v96 + 1) = v28;
              v17 = v86;
            }
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 664), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v6 + 664));
          KeAbPostRelease(v6 + 664);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v29, v30, v31);
          v32 = 48LL * v88;
          v33 = -1;
          if ( v32 <= 0xFFFFFFFF )
            v33 = 48 * v88;
          v111 = v33;
          v9 = v32 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v32 <= 0xFFFFFFFF )
          {
            v34 = v33 + v89;
            v35 = -1;
            if ( v34 >= v89 )
              v35 = v34;
            v89 = v35;
            v9 = v34 < v99 ? 0xC0000095 : 0;
            if ( v34 >= v99 )
            {
              v36 = v35 + v92;
              v37 = -1;
              if ( v35 + v92 >= v35 )
                v37 = v35 + v92;
              v89 = v37;
              v9 = v36 < v35 ? 0xC0000095 : 0;
              if ( v36 >= v35 )
              {
                v38 = v37 + v91;
                v39 = -1;
                if ( v37 + v91 >= v37 )
                  v39 = v37 + v91;
                v89 = v39;
                v9 = v38 < v37 ? 0xC0000095 : 0;
                if ( v38 >= v37 )
                {
                  v7 = v86;
                  if ( v100 < v39 )
                  {
                    *v108 = v39;
                    v9 = -1073741789;
                    goto LABEL_87;
                  }
                  if ( v86 )
                  {
                    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8 * v86, 0x56777445u);
                    v8 = PoolWithTag;
                    v95 = PoolWithTag;
                    if ( !PoolWithTag )
                    {
                      v9 = -1073741670;
                      goto LABEL_87;
                    }
                    memset(PoolWithTag, 0, 8 * v86);
                  }
                  v41 = v117;
                  if ( (*(_DWORD *)(v117 + 16) & 1) != 0 )
                  {
                    v42 = v103;
                    v43 = *(_QWORD *)(v103 + 952);
                    if ( v43 )
                    {
                      v112 = *(_QWORD *)(v103 + 952);
                      memset((void *)(v43 + 8), 0, 4LL * *(unsigned int *)(v43 + 4));
                    }
                    v44 = *(_QWORD *)(v42 + 960);
                    if ( v44 )
                    {
                      v112 = *(_QWORD *)(v42 + 960);
                      memset((void *)(v44 + 8), 0, 4LL * *(unsigned int *)(v44 + 4));
                    }
                  }
                  v45 = v41 + 20;
                  v106 = v45;
                  v46 = (char *)(v41 + 64);
                  v90 = v46;
                  *(_OWORD *)v45 = 0LL;
                  *(_OWORD *)(v45 + 16) = 0LL;
                  *(_QWORD *)(v45 + 32) = 0LL;
                  *(_DWORD *)(v45 + 40) = 0;
                  *(_DWORD *)v45 = 44;
                  *(_DWORD *)(v45 + 8) = *(_DWORD *)(BugCheckParameter2 + 1212);
                  *(_DWORD *)(v45 + 16) = 592;
                  *(_DWORD *)(v45 + 12) = 44;
                  v47 = v46;
                  v118 = v46;
                  v48 = v46 + 592;
                  v90 = v48;
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
                  v107 = v48;
                  v51 = v48 + 60;
                  *(_DWORD *)(v45 + 32) = v93;
                  *(_DWORD *)(v45 + 28) = (_DWORD)v51 - v45;
                  v52 = v51;
                  v114 = v51;
                  v53 = &v51[v113];
                  v90 = v53;
                  v119 = v53;
                  for ( i = *(__int64 **)(BugCheckParameter2 + 1168); ; i = (__int64 *)*i )
                  {
                    v87 = i;
                    if ( i == (__int64 *)(BugCheckParameter2 + 1168) )
                      break;
                    v116 = i;
                    v55 = 0;
                    v101 = 0;
                    while ( v55 < *((_DWORD *)i + 5) )
                    {
                      v56 = (_DWORD *)(i[3] + 8LL * v55);
                      v120 = v56;
                      if ( *(_QWORD *)v56 )
                      {
                        if ( v52 >= v53 )
                          break;
                        *(_DWORD *)v52 = *v56;
                        *((_DWORD *)v52 + 1) = v56[1];
                        v52 += 8;
                        v114 = v52;
                      }
                      v101 = ++v55;
                    }
                  }
                  v57 = v88;
                  *(_DWORD *)(v45 + 40) = v88;
                  *(_DWORD *)(v45 + 36) = (_DWORD)v53 - v45;
                  v58 = v53;
                  v104 = v53;
                  v59 = &v53[48 * v57];
                  memset(v58, 0, 48 * v57);
                  v60 = v59;
                  v102 = (unsigned __int64)v59;
                  v115 = (wchar_t *)&v59[v91];
                  v61 = v91 + (_DWORD)v59;
                  pszDest = v115;
                  v62 = v92 + (_DWORD)v115;
                  v90 = (char *)v115 + v92;
                  v105 = (unsigned __int64)v90;
                  v94 = 0;
                  v63 = v96;
                  while ( 1 )
                  {
                    v87 = (__int64 *)v63;
                    if ( (__int128 *)v63 == &v96 )
                      break;
                    v64 = v104;
                    *((_DWORD *)v104 + 2) = (_DWORD)v60 - v45;
                    *((_DWORD *)v64 + 3) = *(_DWORD *)(v63 - 88);
                    *(_DWORD *)v64 = v61 - v45;
                    *((_DWORD *)v64 + 1) = (unsigned __int16)*(_DWORD *)(v63 - 24);
                    *((_DWORD *)v64 + 4) = *(_DWORD *)(v63 - 108);
                    *((_DWORD *)v64 + 5) = *(_DWORD *)(v63 - 112);
                    *((_DWORD *)v64 + 6) = *(_DWORD *)(v63 - 104);
                    *((_DWORD *)v64 + 7) = *(_DWORD *)(v63 - 20);
                    *((_DWORD *)v64 + 8) = *(_DWORD *)(v63 - 16);
                    *((_DWORD *)v64 + 9) = *(_DWORD *)(v63 + 16);
                    *((_DWORD *)v64 + 10) = *(_DWORD *)(v63 + 20);
                    *((_DWORD *)v64 + 11) = *(_DWORD *)(v63 + 24);
                    v104 = v64 + 48;
                    memmove(v60, *(const void **)(v63 - 96), *(unsigned int *)(v63 - 88));
                    v102 = (*(unsigned int *)(v63 - 88) + v102 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( v102 > (unsigned __int64)v115 )
                      break;
                    RtlStringCchCopyNW(
                      pszDest,
                      (__int64)(v105 - (_QWORD)pszDest) >> 1,
                      *(STRSAFE_PCNZWCH *)(v63 - 32),
                      (unsigned __int16)*(_DWORD *)(v63 - 24));
                    pszDest += (unsigned int)(unsigned __int16)*(_DWORD *)(v63 - 24) + 1;
                    if ( (unsigned __int64)pszDest > v105 )
                      break;
                    v121 = KeGetCurrentThread();
                    --v121->KernelApcDisable;
                    ExAcquirePushLockExclusiveEx(v6 + 664, 0LL);
                    v122 = KeGetCurrentThread();
                    *(_QWORD *)(v6 + 672) = v122;
                    v65 = v87;
                    v66 = v94;
                    v95[v94] = *(v87 - 5);
                    v94 = v66 + 1;
                    *(v65 - 5) = 0LL;
                    *(_QWORD *)(v63 - 32) = 0LL;
                    *(_DWORD *)(v63 - 24) &= 0xFFFF0000;
                    *(_DWORD *)(v63 - 24) |= 0x80000u;
                    *(_QWORD *)(v6 + 672) = 0LL;
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock(v6 + 664);
                    KeAbPostRelease(v6 + 664);
                    v123 = KeGetCurrentThread();
                    KeLeaveCriticalRegionThread((__int64)v123, v67, v68, v69);
                    --v88;
                    v70 = (volatile __int32 *)v87;
                    if ( *(v87 - 10) == 1 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v6 + 1124));
                      v70 = (volatile __int32 *)v87;
                    }
                    _InterlockedExchange(v70 - 3, 0);
                    v63 = *v87;
                    v62 = (unsigned int)v90;
                    v45 = v106;
                    v61 = (unsigned int)pszDest;
                    v60 = (void *)v102;
                  }
                  v71 = v107;
                  *(_OWORD *)v107 = *(_OWORD *)(v6 + 600);
                  v71[1] = *(_OWORD *)(v6 + 616);
                  v71[2] = *(_OWORD *)(v6 + 632);
                  *((_QWORD *)v71 + 6) = *(_QWORD *)(v6 + 648);
                  *((_DWORD *)v71 + 14) = *(_DWORD *)(v6 + 656);
                  *(_OWORD *)(v6 + 600) = 0LL;
                  *(_OWORD *)(v6 + 616) = 0LL;
                  *(_OWORD *)(v6 + 632) = 0LL;
                  *(_QWORD *)(v6 + 648) = 0LL;
                  *(_DWORD *)(v6 + 656) = 0;
                  v124 = 0LL;
                  v125 = 0LL;
                  EtwpCovSampCaptureFlushStats(v103, &v124);
                  *(_OWORD *)((char *)v71 + 28) = v124;
                  *(_OWORD *)((char *)v71 + 44) = v125;
                  *(_DWORD *)(v45 + 4) = v62 - v45;
                  v72 = *(__int64 **)(BugCheckParameter2 + 1168);
                  v87 = v72;
                  while ( v72 != (__int64 *)(BugCheckParameter2 + 1168) )
                  {
                    v73 = v72;
                    v116 = v72;
                    v72 = (__int64 *)*v72;
                    v87 = v72;
                    if ( v73 == *(__int64 **)(BugCheckParameter2 + 1152) )
                    {
                      memset((void *)v73[3], 0, 8LL * *((unsigned int *)v73 + 5));
                      *((_DWORD *)v73 + 4) = 0;
                    }
                    else
                    {
                      v74 = (__int64 **)v73[1];
                      if ( (__int64 *)v72[1] != v73 || *v74 != v73 )
                        goto LABEL_82;
                      *v74 = v72;
                      v72[1] = (__int64)v74;
                      --*(_DWORD *)(BugCheckParameter2 + 1184);
                      EtwpCoverageSamplerFreeTable(v73);
                    }
                  }
                  ++*(_DWORD *)(BugCheckParameter2 + 1212);
                  EtwpCovSampCaptureContextSetPaused(BugCheckParameter2, v103, 0);
                  *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock(BugCheckParameter2);
                  KeAbPostRelease(BugCheckParameter2);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v75, v76, v77);
                  EtwpCovSampContextPruneModules(v6);
                  *v108 = v89;
                  v9 = 0;
                  v8 = v95;
                }
              }
            }
          }
LABEL_86:
          v7 = v86;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v78, v79, v80);
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v81, v82, v83);
  }
  if ( v8 )
  {
    for ( j = 0; j < v7; ++j )
      EtwpCovSampModuleNameInfoCleanup(&v8[j]);
    ExFreePoolWithTag(v8, 0x56777445u);
  }
  if ( v98 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C19860);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v9;
}
