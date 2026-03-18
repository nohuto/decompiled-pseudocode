/*
 * XREFs of MiFindContiguousPages @ 0x14027EAE0
 * Callers:
 *     MiWaitForInPageComplete @ 0x1402B6650 (MiWaitForInPageComplete.c)
 *     MiAllocateContiguousMemory @ 0x1402F8FFC (MiAllocateContiguousMemory.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x140340C48 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocateSlabEntry @ 0x14038F3C8 (MiAllocateSlabEntry.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocateSkipPagesForMdl @ 0x14052E3E0 (MiAllocateSkipPagesForMdl.c)
 *     MiRebuildLargePage @ 0x14054CBE8 (MiRebuildLargePage.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 *     MiAllocateDriverPage @ 0x1406F0068 (MiAllocateDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x1408C1A20 (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x1408D5794 (MiFindLargePageMemory.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D5A80 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiCreatePteCopyList @ 0x1402244A8 (MiCreatePteCopyList.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiClaimPhysicalRun @ 0x14027DE28 (MiClaimPhysicalRun.c)
 *     MiCollapseRunTopDown @ 0x14027F49C (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x14027F530 (MiPfnsWorthTrying.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiSufficientAvailablePages @ 0x1402A1900 (MiSufficientAvailablePages.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     MiSetPfnOwnedAndActive @ 0x1402B8600 (MiSetPfnOwnedAndActive.c)
 *     MiReferencePageRuns @ 0x1402F02C0 (MiReferencePageRuns.c)
 *     MiUnlockPage @ 0x1402FFA3C (MiUnlockPage.c)
 *     MiDereferencePageRunsEx @ 0x140313848 (MiDereferencePageRunsEx.c)
 *     MiReleasePteCopyList @ 0x14031B3E8 (MiReleasePteCopyList.c)
 *     MiAcquireNonPagedResources @ 0x140328924 (MiAcquireNonPagedResources.c)
 *     MiConvertContiguousPages @ 0x14034534C (MiConvertContiguousPages.c)
 *     MiUpdateLargePageBitMap @ 0x140346C18 (MiUpdateLargePageBitMap.c)
 *     MiIsPageOnBadList @ 0x14034906C (MiIsPageOnBadList.c)
 *     MiFindLargeNodePage @ 0x1403919F0 (MiFindLargeNodePage.c)
 *     MiQueueWorkingSetRequest @ 0x1403A2744 (MiQueueWorkingSetRequest.c)
 *     MiEmptyKernelStackCache @ 0x1403CBE84 (MiEmptyKernelStackCache.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiLockPage @ 0x140549E14 (MiLockPage.c)
 */

__int64 __fastcall MiFindContiguousPages(
        __int64 a1,
        unsigned __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 *a11)
{
  unsigned __int64 v12; // r11
  unsigned int v14; // edx
  __int64 v15; // r15
  unsigned __int64 v16; // r13
  unsigned __int8 CurrentIrql; // di
  int v19; // ecx
  int v20; // edi
  bool v21; // zf
  unsigned __int64 v22; // rsi
  int v23; // ecx
  int v24; // eax
  int v25; // r8d
  __int64 LargeNodePage; // rax
  unsigned int v27; // ebx
  __int64 v28; // rdx
  unsigned int v29; // r8d
  unsigned __int64 *v30; // rcx
  unsigned __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned int *v33; // rax
  __int64 v34; // r10
  int *v35; // r9
  int v36; // esi
  unsigned int *v37; // rdx
  __int64 v38; // rcx
  unsigned int v39; // edi
  unsigned int v40; // ebx
  unsigned __int8 *v41; // r8
  int v42; // r14d
  ULONG_PTR v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // ecx
  unsigned __int8 *v47; // rcx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r15
  unsigned __int64 v56; // r12
  bool v57; // r13
  __int64 v58; // r14
  __int64 v59; // rbx
  __int64 v60; // rdx
  unsigned __int64 v61; // rsi
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // ecx
  __int64 v65; // rcx
  unsigned __int8 v66; // al
  __int64 v67; // rdx
  __int64 v68; // r9
  __int64 v69; // rcx
  unsigned __int8 v70; // r8
  BOOL v71; // eax
  int v72; // eax
  unsigned int *v73; // r10
  __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // r8
  unsigned int v77; // r15d
  unsigned __int64 v78; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v81; // eax
  int v82; // [rsp+50h] [rbp-B0h]
  BOOL v83; // [rsp+54h] [rbp-ACh]
  int v84; // [rsp+58h] [rbp-A8h]
  int *v86; // [rsp+78h] [rbp-88h]
  unsigned __int8 *v87; // [rsp+80h] [rbp-80h]
  int v88; // [rsp+88h] [rbp-78h]
  int v89; // [rsp+8Ch] [rbp-74h] BYREF
  int v90; // [rsp+90h] [rbp-70h] BYREF
  int v91; // [rsp+94h] [rbp-6Ch]
  int v92; // [rsp+98h] [rbp-68h]
  unsigned int *v93; // [rsp+A0h] [rbp-60h]
  int v94; // [rsp+A8h] [rbp-58h]
  int v95; // [rsp+ACh] [rbp-54h]
  unsigned __int8 *v96; // [rsp+B0h] [rbp-50h]
  __int64 v97; // [rsp+B8h] [rbp-48h]
  __int64 v98; // [rsp+C0h] [rbp-40h]
  __int64 v99; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v100; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v101; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v102; // [rsp+E0h] [rbp-20h]
  __int64 v103; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v104; // [rsp+F0h] [rbp-10h]
  bool v105; // [rsp+F8h] [rbp-8h]
  int v106; // [rsp+F9h] [rbp-7h]
  __int16 v107; // [rsp+FDh] [rbp-3h]
  char v108; // [rsp+FFh] [rbp-1h]
  ULONG_PTR BugCheckParameter2; // [rsp+100h] [rbp+0h]
  __int64 v110; // [rsp+108h] [rbp+8h]
  unsigned int *v111; // [rsp+110h] [rbp+10h]
  __int64 *v112; // [rsp+118h] [rbp+18h]
  __int128 v113; // [rsp+120h] [rbp+20h] BYREF
  __int64 v114; // [rsp+130h] [rbp+30h]
  __int64 v115; // [rsp+138h] [rbp+38h]
  _QWORD v116[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v117[2]; // [rsp+150h] [rbp+50h] BYREF

  v12 = a5;
  v14 = a6;
  v15 = a1;
  v112 = a11;
  v16 = 0LL;
  BugCheckParameter2 = a3;
  v99 = 0LL;
  v100 = 0LL;
  v106 = 0;
  v107 = 0;
  v110 = a10;
  v113 = 0LL;
  v114 = 0LL;
  v108 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 3221225659LL;
  if ( a7 < (unsigned __int16)KeNumberNodes
    && !*(_QWORD *)(4544LL * a7 + *(_QWORD *)(a1 + 16) + 4176)
    && (_DWORD)InitializationPhase )
  {
    return 3221225495LL;
  }
  v19 = a9 | 8;
  if ( CurrentIrql != 2 )
    v19 = a9;
  v82 = v19;
  if ( (v19 & 0x20000000) == 0 )
  {
    if ( (int)MiAcquireNonPagedResources(v15, a5, 0LL, 2LL) < 0 )
      return 3221225626LL;
    v19 = v82;
    v14 = a6;
    v12 = a5;
  }
  if ( a10 )
    v91 = v12 + (*(_DWORD *)(a10 + 40) >> 12);
  else
    v91 = 0;
  if ( (v19 & 0x40) != 0 )
  {
    v20 = v19 | 0x8000;
    v21 = a2 == 0x100000;
    v22 = a5;
    if ( !v21 )
      v20 = v19;
    v23 = (KeFeatureBits & 0x2000000000LL) == 0;
    v89 = v23;
    v24 = v23;
    do
    {
      v25 = v24;
      if ( a5 == MiLargePageSizes[v24] )
        break;
      ++v24;
      v89 = v25 + 1;
      v23 = v25 + 1;
    }
    while ( (unsigned int)(v25 + 1) < 3 );
    LargeNodePage = MiFindLargeNodePage(v15, a7, (unsigned int)&v89, v23, v20, 0, v14);
    if ( LargeNodePage )
    {
      v28 = (LargeNodePage + 0x58000000000LL) / 48;
      *v112 = v28;
      if ( a10 )
      {
        v29 = *(_DWORD *)(a10 + 40);
        v30 = (unsigned __int64 *)(a10 + 8 * (((unsigned __int64)v29 >> 12) + 6));
        if ( (*(_DWORD *)(LargeNodePage + 16) & 0x3E0LL) != 0 )
          *(_QWORD *)(a10 + 24) = 1LL;
        if ( a5 )
        {
          do
          {
            v31 = v28 + v16++;
            *v30++ = v31;
          }
          while ( v16 < a5 );
          v29 = *(_DWORD *)(a10 + 40);
        }
        *(_DWORD *)(a10 + 40) = v29 + ((_DWORD)a5 << 12);
      }
      return 0LL;
    }
    v27 = -1073741801;
    goto LABEL_129;
  }
  if ( (*(_DWORD *)(v15 + 4) & 0x20) == 0 )
  {
    if ( !(unsigned int)MiSufficientAvailablePages(v15, v12 + 160) )
    {
      v27 = -1073741670;
      goto LABEL_128;
    }
    v19 = v82;
  }
  v94 = v19 & 0x10000000;
  if ( (v19 & 0x10000000) == 0 )
  {
    MiCreatePteCopyList(a5, 0x40uLL, (__int64)&v113);
    if ( !DWORD1(v113) )
    {
      v27 = -1073741670;
      goto LABEL_128;
    }
    v19 = v82;
  }
  v83 = 0;
  if ( (v19 & 0xB000008) == 0x8000000 && (_DWORD)InitializationPhase )
    v83 = CurrentIrql != 2;
  v32 = a7 | 0x80000000;
  if ( a7 < (unsigned __int16)KeNumberNodes )
    v32 = a7;
  v84 = v32;
  v33 = (unsigned int *)MiReferencePageRuns(v15, 1LL);
  v34 = *(_QWORD *)(v15 + 16);
  v35 = (int *)v33;
  v86 = (int *)v33;
  v101 = a2;
  v36 = v82;
  v37 = &v33[4 * *v33 + 4];
  v111 = 0LL;
  v104 = a5;
  v38 = 0LL;
  if ( ((a4 - 1) & a4) == 0 )
    v38 = a4;
  v93 = v37;
  v97 = 0LL;
  v103 = v38;
  v92 = v82 & 0x2000;
  v105 = v92 != 0;
  v88 = 0;
  v98 = v34;
  while ( 2 )
  {
    v39 = -1;
    while ( 2 )
    {
      v40 = MmNumberOfChannels;
      v41 = 0LL;
      v87 = 0LL;
      if ( (unsigned int)MmNumberOfChannels <= 1 )
      {
        v42 = v84;
LABEL_64:
        v47 = &v41[v40];
        v96 = v47;
        goto LABEL_66;
      }
      v42 = v84;
      if ( v84 >= 0 )
      {
        v45 = (unsigned int)v84;
      }
      else
      {
        if ( v39 == -1 )
        {
          v43 = *(_QWORD *)(v15 + 6920);
          if ( BugCheckParameter2 <= v43 )
            v43 = BugCheckParameter2;
          v44 = MiSearchNumaNodeTable(v43);
          v41 = 0LL;
          v35 = v86;
          v39 = *(_DWORD *)(v44 + 8);
          v97 = qword_140C4DDD8 + 4LL * v39 * (unsigned __int16)KeNumberNodes;
          v37 = v93;
          v111 = (unsigned int *)(v97 + 4LL * (unsigned __int16)KeNumberNodes);
          v34 = v98;
        }
        v45 = v39;
      }
      if ( (*(_DWORD *)(4544 * v45 + v34 + 4280) & 1) == 0 )
        goto LABEL_64;
      v41 = (unsigned __int8 *)(4544 * v45 + v34 + 4317);
      v87 = v41;
      if ( a8 < 0 )
        goto LABEL_64;
      v46 = 0;
      do
      {
        if ( *v41 == a8 )
          break;
        ++v41;
        ++v46;
      }
      while ( v46 < v40 );
      v87 = v41;
      v47 = v41 + 1;
      v96 = v41 + 1;
      while ( 1 )
      {
LABEL_66:
        v102 = BugCheckParameter2;
        v48 = *v35;
        if ( *v35 )
        {
          while ( 1 )
          {
            v49 = (unsigned int)(v48 - 1);
            v95 = v49;
            v50 = v37[2 * v49];
            v51 = v37[2 * v49 + 1];
            v49 *= 2LL;
            v52 = *(_QWORD *)&v35[2 * v49 + 4];
            v53 = *(_QWORD *)&v35[2 * v49 + 6];
            v99 = v52;
            v100 = v53 + v52;
            if ( v101 >= v53 + v52 )
              break;
            if ( (v42 < 0 || (_DWORD)v50 == v42) && (!v41 || (_DWORD)v51 == *v41) )
            {
              if ( (unsigned int)MiCollapseRunTopDown(&v99, v51) )
              {
                v54 = 4544 * v50;
                v115 = 4544 * v50;
                while ( 1 )
                {
                  if ( !*(_QWORD *)(v54 + *(_QWORD *)(v15 + 16) + 4176) && (_DWORD)InitializationPhase )
                  {
LABEL_100:
                    v42 = v84;
                    break;
                  }
                  v55 = v100;
                  v56 = v104;
                  v90 = 0;
                  v57 = v105;
                  if ( v105 && v104 > v100 - v99 )
                    v56 = v100 - v99;
                  v58 = v100 - v56;
                  v59 = 48 * (v100 - v56) - 0x58000000000LL;
                  if ( !v105 )
                  {
                    v61 = MiPfnsWorthTrying(a1, 48 * ((int)v100 - (int)v56), v104, v36, (__int64)&v90);
                    if ( v61 )
                      goto LABEL_95;
                    if ( v90 == 1 )
                      MiEmptyKernelStackCache();
                  }
                  v61 = MiClaimPhysicalRun(a1, v55 - v56, v56, v102, (__int64)&v113, v82, -1, v110, a6, 0LL);
                  if ( v110 )
                  {
                    v64 = *(_DWORD *)(v110 + 40) >> 12;
                    if ( v64 == v91 )
                      goto LABEL_118;
                    v104 = (unsigned int)(v91 - v64);
                  }
                  else if ( !v61 )
                  {
LABEL_118:
                    MiDereferencePageRunsEx(v86, 1LL);
                    MiReleasePteCopyList(&v113);
                    if ( v92 )
                    {
                      v77 = a6;
                    }
                    else
                    {
                      v75 = (v58 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                      v76 = (a5 + v58) & 0xFFFFFFFFFFFFFE00uLL;
                      if ( v75 < v76 )
                        MiUpdateLargePageBitMap(a1, v75, v76 - v75, 1, 1);
                      v77 = a6;
                      MiConvertContiguousPages(v59, a5, a6);
                    }
                    if ( (v82 & 0x40000000) == 0 )
                    {
                      v78 = v59 + 48 * a5;
                      do
                      {
                        MiSetPfnOwnedAndActive(v59, 0, -8, v77, ((v82 & 0x100000) != 0) + 1);
                        v59 += 48LL;
                      }
                      while ( v59 != v78 );
                    }
                    *v112 = v58;
                    return 0LL;
                  }
                  if ( *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v59 + 40) >> 39) & 0x3FFLL)) == a1 )
                  {
                    if ( (unsigned int)MiIsPageOnBadList(48 * (v55 - v56) - 0x58000000000LL, v60, v62, v63) )
                    {
                      v66 = MiLockPage(v65);
                      if ( (unsigned int)MiIsPageOnBadList(48 * (v55 - v56) - 0x58000000000LL, v67, v66, v68) )
                      {
                        if ( v94 )
                        {
                          MiUnlockPage(v69, v70);
                          v41 = v87;
                          v47 = v96;
                          v71 = 0;
                          v83 = 0;
                          goto LABEL_106;
                        }
                      }
                      else
                      {
                        v88 = 1;
                      }
                      MiUnlockPage(v69, v70);
                    }
                    else
                    {
                      v88 = 1;
                    }
                  }
LABEL_95:
                  if ( v61 >= v55 - v99 || !v57 && v55 - v99 - v61 < v56 )
                    v102 = v55 - v61 - 1;
                  v100 = v55 - v61;
                  v72 = MiCollapseRunTopDown(&v99, v60);
                  v15 = a1;
                  v54 = v115;
                  v36 = v82;
                  if ( !v72 )
                    goto LABEL_100;
                }
              }
              v41 = v87;
              v35 = v86;
            }
            v48 = v95;
            if ( !v95 )
              break;
            v37 = v93;
          }
          v47 = v96;
        }
        v71 = v83;
LABEL_106:
        if ( !v41 )
          goto LABEL_111;
        v15 = a1;
        ++v41;
        v42 = v84;
        v35 = v86;
        v37 = v93;
        v87 = v41;
        if ( v41 >= v47 )
          break;
        v36 = v82;
      }
      if ( v39 != -1 )
      {
        v73 = (unsigned int *)(v97 + 4);
        v97 = (__int64)v73;
        if ( v73 != v111 )
        {
          v39 = *v73;
          v34 = v98;
          v36 = v82;
          continue;
        }
      }
      break;
    }
LABEL_111:
    if ( v71 && v88 == 1 )
    {
      if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v116[1] = 16LL;
        v74 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v117[1] = a5 << 12;
        v117[0] = v74;
        v116[0] = v117;
        EtwTraceKernelEvent((unsigned int)v116, 1, 537919488, 625, 4200962);
      }
      v15 = a1;
      if ( byte_140C4EE1C )
        MiQueueWorkingSetRequest(a1, 32LL);
      v36 = v82;
      v35 = v86;
      v37 = v93;
      v34 = v98;
      v83 = 0;
      continue;
    }
    break;
  }
  v27 = -1073741801;
  MiDereferencePageRunsEx(v86, 1LL);
  v15 = a1;
LABEL_128:
  v20 = v82;
  v22 = a5;
LABEL_129:
  MiReleasePteCopyList(&v113);
  if ( (v20 & 0x20000000) == 0 )
  {
    MiReturnCommit(v15, v22);
    if ( (ULONG_PTR *)v15 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( v22 + CachedResidentAvailable <= 0x100 )
        {
          do
          {
            if ( v22 >= 0x80000 )
              break;
            v81 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    v22 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v21 = (_DWORD)CachedResidentAvailable == v81;
            LODWORD(CachedResidentAvailable) = v81;
            if ( v21 )
              return v27;
          }
          while ( v81 != -1 && v22 + v81 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v22 += (int)CachedResidentAvailable - 192;
        }
      }
    }
    if ( v22 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 7168), v22);
  }
  return v27;
}
