/*
 * XREFs of MiFindContiguousPages @ 0x14034B980
 * Callers:
 *     MiAllocateContiguousMemory @ 0x14025FFCC (MiAllocateContiguousMemory.c)
 *     MiWaitForInPageComplete @ 0x1402D0710 (MiWaitForInPageComplete.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x140336EE4 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocateSlabEntry @ 0x1403923F8 (MiAllocateSlabEntry.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052DE30 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocateSkipPagesForMdl @ 0x140532400 (MiAllocateSkipPagesForMdl.c)
 *     MiRebuildLargePage @ 0x140550C08 (MiRebuildLargePage.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 *     MiAllocateDriverPage @ 0x1406ED7B8 (MiAllocateDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x1408C8BB0 (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x1408DC924 (MiFindLargePageMemory.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DCC10 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x14022DC70 (MiSufficientAvailablePages.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiCreatePteCopyList @ 0x1402910E8 (MiCreatePteCopyList.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiSetPfnOwnedAndActive @ 0x1402CA460 (MiSetPfnOwnedAndActive.c)
 *     MiReferencePageRuns @ 0x140300EC0 (MiReferencePageRuns.c)
 *     MiUnlockPage @ 0x14030EF8C (MiUnlockPage.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     MiDereferencePageRunsEx @ 0x1403221F0 (MiDereferencePageRunsEx.c)
 *     MiReleasePteCopyList @ 0x1403292F4 (MiReleasePteCopyList.c)
 *     MiConvertContiguousPages @ 0x140334AA4 (MiConvertContiguousPages.c)
 *     MiAcquireNonPagedResources @ 0x140336B70 (MiAcquireNonPagedResources.c)
 *     MiUpdateLargePageBitMap @ 0x14034A334 (MiUpdateLargePageBitMap.c)
 *     MiClaimPhysicalRun @ 0x14034ACCC (MiClaimPhysicalRun.c)
 *     MiCollapseRunTopDown @ 0x14034C33C (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x14034C3D0 (MiPfnsWorthTrying.c)
 *     MiIsPageOnBadList @ 0x14034D80C (MiIsPageOnBadList.c)
 *     MiFindLargeNodePage @ 0x140394A60 (MiFindLargeNodePage.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5294 (MiQueueWorkingSetRequest.c)
 *     MiEmptyKernelStackCache @ 0x1403CF934 (MiEmptyKernelStackCache.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiLockPage @ 0x14054DE34 (MiLockPage.c)
 */

__int64 __fastcall MiFindContiguousPages(
        __int64 a1,
        unsigned __int64 a2,
        ULONG_PTR a3,
        unsigned __int64 a4,
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
  unsigned __int64 v15; // r15
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
  unsigned __int64 v38; // rcx
  unsigned int v39; // edi
  unsigned int v40; // ebx
  unsigned __int8 *v41; // r8
  int v42; // r14d
  ULONG_PTR v43; // rcx
  _QWORD *v44; // rax
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
  unsigned __int64 *v59; // rbx
  __int64 v60; // rdx
  unsigned __int64 v61; // rsi
  int v62; // ecx
  __int64 v63; // rcx
  __int64 v64; // rcx
  unsigned __int8 v65; // r8
  BOOL v66; // eax
  int v67; // eax
  unsigned int *v68; // r10
  __int64 v69; // rcx
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // r8
  unsigned int v72; // r15d
  unsigned __int64 *v73; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v76; // eax
  int v77; // [rsp+50h] [rbp-B0h]
  BOOL v78; // [rsp+54h] [rbp-ACh]
  int v79; // [rsp+58h] [rbp-A8h]
  __int64 v81; // [rsp+78h] [rbp-88h]
  unsigned __int8 *v82; // [rsp+80h] [rbp-80h]
  int v83; // [rsp+88h] [rbp-78h]
  int v84; // [rsp+8Ch] [rbp-74h] BYREF
  int v85; // [rsp+90h] [rbp-70h] BYREF
  int v86; // [rsp+94h] [rbp-6Ch]
  int v87; // [rsp+98h] [rbp-68h]
  unsigned int *v88; // [rsp+A0h] [rbp-60h]
  int v89; // [rsp+A8h] [rbp-58h]
  int v90; // [rsp+ACh] [rbp-54h]
  unsigned __int8 *v91; // [rsp+B0h] [rbp-50h]
  __int64 v92; // [rsp+B8h] [rbp-48h]
  __int64 v93; // [rsp+C0h] [rbp-40h]
  __int64 v94; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v95; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v96; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v97; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v98; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v99; // [rsp+F0h] [rbp-10h]
  bool v100; // [rsp+F8h] [rbp-8h]
  int v101; // [rsp+F9h] [rbp-7h]
  __int16 v102; // [rsp+FDh] [rbp-3h]
  char v103; // [rsp+FFh] [rbp-1h]
  ULONG_PTR BugCheckParameter2; // [rsp+100h] [rbp+0h]
  __int64 v105; // [rsp+108h] [rbp+8h]
  unsigned int *v106; // [rsp+110h] [rbp+10h]
  __int64 *v107; // [rsp+118h] [rbp+18h]
  __int128 v108; // [rsp+120h] [rbp+20h] BYREF
  __int64 v109; // [rsp+130h] [rbp+30h]
  __int64 v110; // [rsp+138h] [rbp+38h]
  _QWORD v111[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v112[2]; // [rsp+150h] [rbp+50h] BYREF

  v12 = a5;
  v14 = a6;
  v15 = a1;
  v107 = a11;
  v16 = 0LL;
  BugCheckParameter2 = a3;
  v94 = 0LL;
  v95 = 0LL;
  v101 = 0;
  v102 = 0;
  v105 = a10;
  v108 = 0LL;
  v109 = 0LL;
  v103 = 0;
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
  v77 = v19;
  if ( (v19 & 0x20000000) == 0 )
  {
    if ( (int)MiAcquireNonPagedResources(v15, a5, 0LL, 2u) < 0 )
      return 3221225626LL;
    v19 = v77;
    v14 = a6;
    v12 = a5;
  }
  if ( a10 )
    v86 = v12 + (*(_DWORD *)(a10 + 40) >> 12);
  else
    v86 = 0;
  if ( (v19 & 0x40) != 0 )
  {
    v20 = v19 | 0x8000;
    v21 = a2 == 0x100000;
    v22 = a5;
    if ( !v21 )
      v20 = v19;
    v23 = (KeFeatureBits & 0x2000000000LL) == 0;
    v84 = v23;
    v24 = v23;
    do
    {
      v25 = v24;
      if ( a5 == MiLargePageSizes[v24] )
        break;
      ++v24;
      v84 = v25 + 1;
      v23 = v25 + 1;
    }
    while ( (unsigned int)(v25 + 1) < 3 );
    LargeNodePage = MiFindLargeNodePage(v15, a7, (unsigned int)&v84, v23, v20, 0, v14);
    if ( LargeNodePage )
    {
      v28 = (LargeNodePage + 0x58000000000LL) / 48;
      *v107 = v28;
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
    v19 = v77;
  }
  v89 = v19 & 0x10000000;
  if ( (v19 & 0x10000000) == 0 )
  {
    MiCreatePteCopyList(a5, 0x40uLL, (__int64)&v108);
    if ( !DWORD1(v108) )
    {
      v27 = -1073741670;
      goto LABEL_128;
    }
    v19 = v77;
  }
  v78 = 0;
  if ( (v19 & 0xB000008) == 0x8000000 && (_DWORD)InitializationPhase )
    v78 = CurrentIrql != 2;
  v32 = a7 | 0x80000000;
  if ( a7 < (unsigned __int16)KeNumberNodes )
    v32 = a7;
  v79 = v32;
  v33 = (unsigned int *)MiReferencePageRuns(v15, 1u, a3, (_DWORD *)a4);
  v34 = *(_QWORD *)(v15 + 16);
  v35 = (int *)v33;
  v81 = (__int64)v33;
  v96 = a2;
  v36 = v77;
  v37 = &v33[4 * *v33 + 4];
  v106 = 0LL;
  v99 = a5;
  v38 = 0LL;
  if ( ((a4 - 1) & a4) == 0 )
    v38 = a4;
  v88 = v37;
  v92 = 0LL;
  v98 = v38;
  v87 = v77 & 0x2000;
  v100 = v87 != 0;
  v83 = 0;
  v93 = v34;
  while ( 2 )
  {
    v39 = -1;
    while ( 2 )
    {
      v40 = MmNumberOfChannels;
      v41 = 0LL;
      v82 = 0LL;
      if ( (unsigned int)MmNumberOfChannels <= 1 )
      {
        v42 = v79;
LABEL_64:
        v47 = &v41[v40];
        v91 = v47;
        goto LABEL_66;
      }
      v42 = v79;
      if ( v79 >= 0 )
      {
        v45 = (unsigned int)v79;
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
          v35 = (int *)v81;
          v39 = *((_DWORD *)v44 + 2);
          v92 = qword_140C4DD18 + 4LL * v39 * (unsigned __int16)KeNumberNodes;
          v37 = v88;
          v106 = (unsigned int *)(v92 + 4LL * (unsigned __int16)KeNumberNodes);
          v34 = v93;
        }
        v45 = v39;
      }
      if ( (*(_DWORD *)(4544 * v45 + v34 + 4280) & 1) == 0 )
        goto LABEL_64;
      v41 = (unsigned __int8 *)(4544 * v45 + v34 + 4317);
      v82 = v41;
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
      v82 = v41;
      v47 = v41 + 1;
      v91 = v41 + 1;
      while ( 1 )
      {
LABEL_66:
        v97 = BugCheckParameter2;
        v48 = *v35;
        if ( *v35 )
        {
          while ( 1 )
          {
            v49 = (unsigned int)(v48 - 1);
            v90 = v49;
            v50 = v37[2 * v49];
            v51 = v37[2 * v49 + 1];
            v49 *= 2LL;
            v52 = *(_QWORD *)&v35[2 * v49 + 4];
            v53 = *(_QWORD *)&v35[2 * v49 + 6];
            v94 = v52;
            v95 = v53 + v52;
            if ( v96 >= v53 + v52 )
              break;
            if ( (v42 < 0 || (_DWORD)v50 == v42) && (!v41 || (_DWORD)v51 == *v41) )
            {
              if ( (unsigned int)MiCollapseRunTopDown(&v94, v51) )
              {
                v54 = 4544 * v50;
                v110 = 4544 * v50;
                while ( 1 )
                {
                  if ( !*(_QWORD *)(v54 + *(_QWORD *)(v15 + 16) + 4176) && (_DWORD)InitializationPhase )
                  {
LABEL_100:
                    v42 = v79;
                    break;
                  }
                  v55 = v95;
                  v56 = v99;
                  v85 = 0;
                  v57 = v100;
                  if ( v100 && v99 > v95 - v94 )
                    v56 = v95 - v94;
                  v58 = v95 - v56;
                  v59 = (unsigned __int64 *)(48 * (v95 - v56) - 0x58000000000LL);
                  if ( !v100 )
                  {
                    v61 = MiPfnsWorthTrying(a1, 48 * ((int)v95 - (int)v56), v99, v36, (__int64)&v85);
                    if ( v61 )
                      goto LABEL_95;
                    if ( v85 == 1 )
                      MiEmptyKernelStackCache();
                  }
                  v61 = MiClaimPhysicalRun(a1, v55 - v56, v56, v97, (__int64)&v108, v77, -1, v105, a6, 0LL);
                  if ( v105 )
                  {
                    v62 = *(_DWORD *)(v105 + 40) >> 12;
                    if ( v62 == v86 )
                      goto LABEL_118;
                    v99 = (unsigned int)(v86 - v62);
                  }
                  else if ( !v61 )
                  {
LABEL_118:
                    MiDereferencePageRunsEx(v81, 1);
                    MiReleasePteCopyList((__int64)&v108);
                    if ( v87 )
                    {
                      v72 = a6;
                    }
                    else
                    {
                      v70 = (v58 + 511) & 0xFFFFFFFFFFFFFE00uLL;
                      v71 = (a5 + v58) & 0xFFFFFFFFFFFFFE00uLL;
                      if ( v70 < v71 )
                        MiUpdateLargePageBitMap(a1, v70, v71 - v70, 1, 1);
                      v72 = a6;
                      MiConvertContiguousPages(v59, a5, a6);
                    }
                    if ( (v77 & 0x40000000) == 0 )
                    {
                      v73 = &v59[6 * a5];
                      do
                      {
                        MiSetPfnOwnedAndActive((__int64)v59, 0, -8LL, v72, ((v77 & 0x100000) != 0) + 1);
                        v59 += 6;
                      }
                      while ( v59 != v73 );
                    }
                    *v107 = v58;
                    return 0LL;
                  }
                  if ( *(_QWORD *)(qword_140C4E4C8 + 8 * ((v59[5] >> 39) & 0x3FF)) == a1 )
                  {
                    if ( (unsigned int)MiIsPageOnBadList(48 * (v55 - v56) - 0x58000000000LL) )
                    {
                      MiLockPage(v63);
                      if ( (unsigned int)MiIsPageOnBadList(48 * (v55 - v56) - 0x58000000000LL) )
                      {
                        if ( v89 )
                        {
                          MiUnlockPage(v64, v65);
                          v41 = v82;
                          v47 = v91;
                          v66 = 0;
                          v78 = 0;
                          goto LABEL_106;
                        }
                      }
                      else
                      {
                        v83 = 1;
                      }
                      MiUnlockPage(v64, v65);
                    }
                    else
                    {
                      v83 = 1;
                    }
                  }
LABEL_95:
                  if ( v61 >= v55 - v94 || !v57 && v55 - v94 - v61 < v56 )
                    v97 = v55 - v61 - 1;
                  v95 = v55 - v61;
                  v67 = MiCollapseRunTopDown(&v94, v60);
                  v15 = a1;
                  v54 = v110;
                  v36 = v77;
                  if ( !v67 )
                    goto LABEL_100;
                }
              }
              v41 = v82;
              v35 = (int *)v81;
            }
            v48 = v90;
            if ( !v90 )
              break;
            v37 = v88;
          }
          v47 = v91;
        }
        v66 = v78;
LABEL_106:
        if ( !v41 )
          goto LABEL_111;
        v15 = a1;
        ++v41;
        v42 = v79;
        v35 = (int *)v81;
        v37 = v88;
        v82 = v41;
        if ( v41 >= v47 )
          break;
        v36 = v77;
      }
      if ( v39 != -1 )
      {
        v68 = (unsigned int *)(v92 + 4);
        v92 = (__int64)v68;
        if ( v68 != v106 )
        {
          v39 = *v68;
          v34 = v93;
          v36 = v77;
          continue;
        }
      }
      break;
    }
LABEL_111:
    if ( v66 && v83 == 1 )
    {
      if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v111[1] = 16LL;
        v69 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v112[1] = a5 << 12;
        v112[0] = v69;
        v111[0] = v112;
        EtwTraceKernelEvent((__int64)v111, 1u, 0x20100000u, 0x271u, 0x401A02u);
      }
      v15 = a1;
      if ( byte_140C4ED5C )
        MiQueueWorkingSetRequest(a1, 32LL);
      v36 = v77;
      v35 = (int *)v81;
      v37 = v88;
      v34 = v93;
      v78 = 0;
      continue;
    }
    break;
  }
  v27 = -1073741801;
  MiDereferencePageRunsEx(v81, 1);
  v15 = a1;
LABEL_128:
  v20 = v77;
  v22 = a5;
LABEL_129:
  MiReleasePteCopyList((__int64)&v108);
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
            v76 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    v22 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v21 = (_DWORD)CachedResidentAvailable == v76;
            LODWORD(CachedResidentAvailable) = v76;
            if ( v21 )
              return v27;
          }
          while ( v76 != -1 && v22 + v76 <= 0x100 );
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
