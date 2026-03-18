/*
 * XREFs of MiFindContiguousPages @ 0x140225A90
 * Callers:
 *     MiWaitForInPageComplete @ 0x14025D620 (MiWaitForInPageComplete.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403121A4 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x14033602C (MiAllocateContiguousMemory.c)
 *     MiAllocateSlabEntry @ 0x14038FF38 (MiAllocateSlabEntry.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052A460 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocateSkipPagesForMdl @ 0x14052EA30 (MiAllocateSkipPagesForMdl.c)
 *     MiRebuildLargePage @ 0x14054D238 (MiRebuildLargePage.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 *     MiAllocateDriverPage @ 0x1406A9548 (MiAllocateDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x1408C2D70 (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x1408D6AE4 (MiFindLargePageMemory.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D6DD0 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiClaimPhysicalRun @ 0x140224DD8 (MiClaimPhysicalRun.c)
 *     MiCollapseRunTopDown @ 0x14022644C (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x1402264E0 (MiPfnsWorthTrying.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiSufficientAvailablePages @ 0x1402488D0 (MiSufficientAvailablePages.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     MiSetPfnOwnedAndActive @ 0x14025F5D0 (MiSetPfnOwnedAndActive.c)
 *     MiCreatePteCopyList @ 0x1402B7128 (MiCreatePteCopyList.c)
 *     MiAcquireNonPagedResources @ 0x1402E25C4 (MiAcquireNonPagedResources.c)
 *     MiConvertContiguousPages @ 0x14031600C (MiConvertContiguousPages.c)
 *     MiUpdateLargePageBitMap @ 0x1403178D8 (MiUpdateLargePageBitMap.c)
 *     MiIsPageOnBadList @ 0x140319D2C (MiIsPageOnBadList.c)
 *     MiReferencePageRuns @ 0x14032BE40 (MiReferencePageRuns.c)
 *     MiUnlockPage @ 0x14033C33C (MiUnlockPage.c)
 *     MiDereferencePageRunsEx @ 0x1403516F8 (MiDereferencePageRunsEx.c)
 *     MiReleasePteCopyList @ 0x140358E98 (MiReleasePteCopyList.c)
 *     MiFindLargeNodePage @ 0x1403925A0 (MiFindLargeNodePage.c)
 *     MiQueueWorkingSetRequest @ 0x1403A2ED4 (MiQueueWorkingSetRequest.c)
 *     MiEmptyKernelStackCache @ 0x1403CCCA4 (MiEmptyKernelStackCache.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiLockPage @ 0x14054A464 (MiLockPage.c)
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
  unsigned __int8 v65; // al
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // rcx
  unsigned __int8 v69; // r8
  BOOL v70; // eax
  int v71; // eax
  unsigned int *v72; // r10
  __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // r8
  unsigned int v76; // r15d
  unsigned __int64 v77; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v80; // eax
  int v81; // [rsp+50h] [rbp-B0h]
  BOOL v82; // [rsp+54h] [rbp-ACh]
  int v83; // [rsp+58h] [rbp-A8h]
  int *v85; // [rsp+78h] [rbp-88h]
  unsigned __int8 *v86; // [rsp+80h] [rbp-80h]
  int v87; // [rsp+88h] [rbp-78h]
  int v88; // [rsp+8Ch] [rbp-74h] BYREF
  int v89; // [rsp+90h] [rbp-70h] BYREF
  int v90; // [rsp+94h] [rbp-6Ch]
  int v91; // [rsp+98h] [rbp-68h]
  unsigned int *v92; // [rsp+A0h] [rbp-60h]
  int v93; // [rsp+A8h] [rbp-58h]
  int v94; // [rsp+ACh] [rbp-54h]
  unsigned __int8 *v95; // [rsp+B0h] [rbp-50h]
  __int64 v96; // [rsp+B8h] [rbp-48h]
  __int64 v97; // [rsp+C0h] [rbp-40h]
  __int64 v98; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v99; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v100; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v101; // [rsp+E0h] [rbp-20h]
  __int64 v102; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v103; // [rsp+F0h] [rbp-10h]
  bool v104; // [rsp+F8h] [rbp-8h]
  int v105; // [rsp+F9h] [rbp-7h]
  __int16 v106; // [rsp+FDh] [rbp-3h]
  char v107; // [rsp+FFh] [rbp-1h]
  ULONG_PTR BugCheckParameter2; // [rsp+100h] [rbp+0h]
  __int64 v109; // [rsp+108h] [rbp+8h]
  unsigned int *v110; // [rsp+110h] [rbp+10h]
  __int64 *v111; // [rsp+118h] [rbp+18h]
  __int128 v112; // [rsp+120h] [rbp+20h] BYREF
  __int64 v113; // [rsp+130h] [rbp+30h]
  __int64 v114; // [rsp+138h] [rbp+38h]
  _QWORD v115[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v116[2]; // [rsp+150h] [rbp+50h] BYREF

  v12 = a5;
  v14 = a6;
  v15 = a1;
  v111 = a11;
  v16 = 0LL;
  BugCheckParameter2 = a3;
  v98 = 0LL;
  v99 = 0LL;
  v105 = 0;
  v106 = 0;
  v109 = a10;
  v112 = 0LL;
  v113 = 0LL;
  v107 = 0;
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
  v81 = v19;
  if ( (v19 & 0x20000000) == 0 )
  {
    if ( (int)MiAcquireNonPagedResources(v15, a5, 0LL, 2LL) < 0 )
      return 3221225626LL;
    v19 = v81;
    v14 = a6;
    v12 = a5;
  }
  if ( a10 )
    v90 = v12 + (*(_DWORD *)(a10 + 40) >> 12);
  else
    v90 = 0;
  if ( (v19 & 0x40) != 0 )
  {
    v20 = v19 | 0x8000;
    v21 = a2 == 0x100000;
    v22 = a5;
    if ( !v21 )
      v20 = v19;
    v23 = (KeFeatureBits & 0x2000000000LL) == 0;
    v88 = v23;
    v24 = v23;
    do
    {
      v25 = v24;
      if ( a5 == MiLargePageSizes[v24] )
        break;
      ++v24;
      v88 = v25 + 1;
      v23 = v25 + 1;
    }
    while ( (unsigned int)(v25 + 1) < 3 );
    LargeNodePage = MiFindLargeNodePage(v15, a7, (unsigned int)&v88, v23, v20, 0, v14);
    if ( LargeNodePage )
    {
      v28 = (LargeNodePage + 0x58000000000LL) / 48;
      *v111 = v28;
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
    v19 = v81;
  }
  v93 = v19 & 0x10000000;
  if ( (v19 & 0x10000000) == 0 )
  {
    MiCreatePteCopyList(a5, 64LL, &v112);
    if ( !DWORD1(v112) )
    {
      v27 = -1073741670;
      goto LABEL_128;
    }
    v19 = v81;
  }
  v82 = 0;
  if ( (v19 & 0xB000008) == 0x8000000 && (_DWORD)InitializationPhase )
    v82 = CurrentIrql != 2;
  v32 = a7 | 0x80000000;
  if ( a7 < (unsigned __int16)KeNumberNodes )
    v32 = a7;
  v83 = v32;
  v33 = (unsigned int *)MiReferencePageRuns(v15, 1LL);
  v34 = *(_QWORD *)(v15 + 16);
  v35 = (int *)v33;
  v85 = (int *)v33;
  v100 = a2;
  v36 = v81;
  v37 = &v33[4 * *v33 + 4];
  v110 = 0LL;
  v103 = a5;
  v38 = 0LL;
  if ( ((a4 - 1) & a4) == 0 )
    v38 = a4;
  v92 = v37;
  v96 = 0LL;
  v102 = v38;
  v91 = v81 & 0x2000;
  v104 = v91 != 0;
  v87 = 0;
  v97 = v34;
  while ( 2 )
  {
    v39 = -1;
    while ( 2 )
    {
      v40 = MmNumberOfChannels;
      v41 = 0LL;
      v86 = 0LL;
      if ( (unsigned int)MmNumberOfChannels <= 1 )
      {
        v42 = v83;
LABEL_64:
        v47 = &v41[v40];
        v95 = v47;
        goto LABEL_66;
      }
      v42 = v83;
      if ( v83 >= 0 )
      {
        v45 = (unsigned int)v83;
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
          v35 = v85;
          v39 = *(_DWORD *)(v44 + 8);
          v96 = qword_140C4DC98 + 4LL * v39 * (unsigned __int16)KeNumberNodes;
          v37 = v92;
          v110 = (unsigned int *)(v96 + 4LL * (unsigned __int16)KeNumberNodes);
          v34 = v97;
        }
        v45 = v39;
      }
      if ( (*(_DWORD *)(4544 * v45 + v34 + 4280) & 1) == 0 )
        goto LABEL_64;
      v41 = (unsigned __int8 *)(4544 * v45 + v34 + 4317);
      v86 = v41;
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
      v86 = v41;
      v47 = v41 + 1;
      v95 = v41 + 1;
      while ( 1 )
      {
LABEL_66:
        v101 = BugCheckParameter2;
        v48 = *v35;
        if ( *v35 )
        {
          while ( 1 )
          {
            v49 = (unsigned int)(v48 - 1);
            v94 = v49;
            v50 = v37[2 * v49];
            v51 = v37[2 * v49 + 1];
            v49 *= 2LL;
            v52 = *(_QWORD *)&v35[2 * v49 + 4];
            v53 = *(_QWORD *)&v35[2 * v49 + 6];
            v98 = v52;
            v99 = v53 + v52;
            if ( v100 >= v53 + v52 )
              break;
            if ( (v42 < 0 || (_DWORD)v50 == v42) && (!v41 || (_DWORD)v51 == *v41) )
            {
              if ( (unsigned int)MiCollapseRunTopDown(&v98, v51) )
              {
                v54 = 4544 * v50;
                v114 = 4544 * v50;
                while ( 1 )
                {
                  if ( !*(_QWORD *)(v54 + *(_QWORD *)(v15 + 16) + 4176) && (_DWORD)InitializationPhase )
                  {
LABEL_100:
                    v42 = v83;
                    break;
                  }
                  v55 = v99;
                  v56 = v103;
                  v89 = 0;
                  v57 = v104;
                  if ( v104 && v103 > v99 - v98 )
                    v56 = v99 - v98;
                  v58 = v99 - v56;
                  v59 = 48 * (v99 - v56) - 0x58000000000LL;
                  if ( !v104 )
                  {
                    v61 = MiPfnsWorthTrying(a1, 48 * ((int)v99 - (int)v56), v103, v36, (__int64)&v89);
                    if ( v61 )
                      goto LABEL_95;
                    if ( v89 == 1 )
                      MiEmptyKernelStackCache();
                  }
                  v61 = MiClaimPhysicalRun(a1, v55 - v56, v56, v101, (__int64)&v112, v81, -1, v109, a6, 0LL);
                  if ( v109 )
                  {
                    v64 = *(_DWORD *)(v109 + 40) >> 12;
                    if ( v64 == v90 )
                      goto LABEL_118;
                    v103 = (unsigned int)(v90 - v64);
                  }
                  else if ( !v61 )
                  {
LABEL_118:
                    MiDereferencePageRunsEx(v85, 1LL);
                    MiReleasePteCopyList(&v112);
                    if ( v91 )
                    {
                      v76 = a6;
                    }
                    else
                    {
                      v74 = (v58 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                      v75 = (a5 + v58) & 0xFFFFFFFFFFFFFE00uLL;
                      if ( v74 < v75 )
                        MiUpdateLargePageBitMap(a1, v74, v75 - v74, 1, 1);
                      v76 = a6;
                      MiConvertContiguousPages(v59, a5, a6);
                    }
                    if ( (v81 & 0x40000000) == 0 )
                    {
                      v77 = v59 + 48 * a5;
                      do
                      {
                        MiSetPfnOwnedAndActive(v59, 0, -8, v76, ((v81 & 0x100000) != 0) + 1);
                        v59 += 48LL;
                      }
                      while ( v59 != v77 );
                    }
                    *v111 = v58;
                    return 0LL;
                  }
                  if ( *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v59 + 40) >> 39) & 0x3FFLL)) == a1 )
                  {
                    if ( (unsigned int)MiIsPageOnBadList(48 * (v55 - v56) - 0x58000000000LL, v60, v62, v63) )
                    {
                      v65 = MiLockPage();
                      if ( (unsigned int)MiIsPageOnBadList(48 * (v55 - v56) - 0x58000000000LL, v66, v65, v67) )
                      {
                        if ( v93 )
                        {
                          MiUnlockPage(v68, v69);
                          v41 = v86;
                          v47 = v95;
                          v70 = 0;
                          v82 = 0;
                          goto LABEL_106;
                        }
                      }
                      else
                      {
                        v87 = 1;
                      }
                      MiUnlockPage(v68, v69);
                    }
                    else
                    {
                      v87 = 1;
                    }
                  }
LABEL_95:
                  if ( v61 >= v55 - v98 || !v57 && v55 - v98 - v61 < v56 )
                    v101 = v55 - v61 - 1;
                  v99 = v55 - v61;
                  v71 = MiCollapseRunTopDown(&v98, v60);
                  v15 = a1;
                  v54 = v114;
                  v36 = v81;
                  if ( !v71 )
                    goto LABEL_100;
                }
              }
              v41 = v86;
              v35 = v85;
            }
            v48 = v94;
            if ( !v94 )
              break;
            v37 = v92;
          }
          v47 = v95;
        }
        v70 = v82;
LABEL_106:
        if ( !v41 )
          goto LABEL_111;
        v15 = a1;
        ++v41;
        v42 = v83;
        v35 = v85;
        v37 = v92;
        v86 = v41;
        if ( v41 >= v47 )
          break;
        v36 = v81;
      }
      if ( v39 != -1 )
      {
        v72 = (unsigned int *)(v96 + 4);
        v96 = (__int64)v72;
        if ( v72 != v110 )
        {
          v39 = *v72;
          v34 = v97;
          v36 = v81;
          continue;
        }
      }
      break;
    }
LABEL_111:
    if ( v70 && v87 == 1 )
    {
      if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v115[1] = 16LL;
        v73 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v116[1] = a5 << 12;
        v116[0] = v73;
        v115[0] = v116;
        EtwTraceKernelEvent((unsigned int)v115, 1, 537919488, 625, 4200962);
      }
      v15 = a1;
      if ( byte_140C4ECDC )
        MiQueueWorkingSetRequest(a1, 32LL);
      v36 = v81;
      v35 = v85;
      v37 = v92;
      v34 = v97;
      v82 = 0;
      continue;
    }
    break;
  }
  v27 = -1073741801;
  MiDereferencePageRunsEx(v85, 1LL);
  v15 = a1;
LABEL_128:
  v20 = v81;
  v22 = a5;
LABEL_129:
  MiReleasePteCopyList(&v112);
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
            v80 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    v22 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v21 = (_DWORD)CachedResidentAvailable == v80;
            LODWORD(CachedResidentAvailable) = v80;
            if ( v21 )
              return v27;
          }
          while ( v80 != -1 && v22 + v80 <= 0x100 );
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
