/*
 * XREFs of MiFindContiguousPages @ 0x14030C430
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140216BFC (MiAllocateContiguousMemory.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x140294390 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     MiAllocateSlabEntry @ 0x1403929B8 (MiAllocateSlabEntry.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052FB70 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAllocateSkipPagesForMdl @ 0x140534140 (MiAllocateSkipPagesForMdl.c)
 *     MiRebuildLargePage @ 0x140552918 (MiRebuildLargePage.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 *     MiAllocateDriverPage @ 0x1406A8D58 (MiAllocateDriverPage.c)
 *     MmRemovePhysicalMemory @ 0x1408C64D0 (MmRemovePhysicalMemory.c)
 *     MiFindLargePageMemory @ 0x1408DA244 (MiFindLargePageMemory.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiUnlockPage @ 0x14022D6AC (MiUnlockPage.c)
 *     MiDereferencePageRunsEx @ 0x140241A18 (MiDereferencePageRunsEx.c)
 *     MiReleasePteCopyList @ 0x140249314 (MiReleasePteCopyList.c)
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 *     MiConvertContiguousPages @ 0x140294F14 (MiConvertContiguousPages.c)
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     MiSetPfnOwnedAndActive @ 0x1402E0490 (MiSetPfnOwnedAndActive.c)
 *     MiCreatePteCopyList @ 0x1402E5388 (MiCreatePteCopyList.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MiClaimPhysicalRun @ 0x14030B77C (MiClaimPhysicalRun.c)
 *     MiCollapseRunTopDown @ 0x14030CDEC (MiCollapseRunTopDown.c)
 *     MiPfnsWorthTrying @ 0x14030CE80 (MiPfnsWorthTrying.c)
 *     MiIsPageOnBadList @ 0x14030E2BC (MiIsPageOnBadList.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiFindLargeNodePage @ 0x140395020 (MiFindLargeNodePage.c)
 *     MiQueueWorkingSetRequest @ 0x1403A5CA4 (MiQueueWorkingSetRequest.c)
 *     MiEmptyKernelStackCache @ 0x1403D0414 (MiEmptyKernelStackCache.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiLockPage @ 0x14054FB44 (MiLockPage.c)
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
  unsigned __int64 v38; // rcx
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
  __int64 v74; // r8
  __int64 v75; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v78; // eax
  int v79; // [rsp+50h] [rbp-B0h]
  BOOL v80; // [rsp+54h] [rbp-ACh]
  int v81; // [rsp+58h] [rbp-A8h]
  __int64 v83; // [rsp+78h] [rbp-88h]
  unsigned __int8 *v84; // [rsp+80h] [rbp-80h]
  int v85; // [rsp+88h] [rbp-78h]
  int v86; // [rsp+8Ch] [rbp-74h] BYREF
  int v87; // [rsp+90h] [rbp-70h] BYREF
  int v88; // [rsp+94h] [rbp-6Ch]
  int v89; // [rsp+98h] [rbp-68h]
  unsigned int *v90; // [rsp+A0h] [rbp-60h]
  int v91; // [rsp+A8h] [rbp-58h]
  int v92; // [rsp+ACh] [rbp-54h]
  unsigned __int8 *v93; // [rsp+B0h] [rbp-50h]
  __int64 v94; // [rsp+B8h] [rbp-48h]
  __int64 v95; // [rsp+C0h] [rbp-40h]
  __int64 v96; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v97; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v98; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v99; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v100; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v101; // [rsp+F0h] [rbp-10h]
  bool v102; // [rsp+F8h] [rbp-8h]
  int v103; // [rsp+F9h] [rbp-7h]
  __int16 v104; // [rsp+FDh] [rbp-3h]
  char v105; // [rsp+FFh] [rbp-1h]
  ULONG_PTR BugCheckParameter2; // [rsp+100h] [rbp+0h]
  __int64 v107; // [rsp+108h] [rbp+8h]
  unsigned int *v108; // [rsp+110h] [rbp+10h]
  __int64 *v109; // [rsp+118h] [rbp+18h]
  __int128 v110; // [rsp+120h] [rbp+20h] BYREF
  __int64 v111; // [rsp+130h] [rbp+30h]
  __int64 v112; // [rsp+138h] [rbp+38h]
  _QWORD v113[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v114[2]; // [rsp+150h] [rbp+50h] BYREF

  v12 = a5;
  v14 = a6;
  v15 = a1;
  v109 = a11;
  v16 = 0LL;
  BugCheckParameter2 = a3;
  v96 = 0LL;
  v97 = 0LL;
  v103 = 0;
  v104 = 0;
  v107 = a10;
  v110 = 0LL;
  v111 = 0LL;
  v105 = 0;
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
  v79 = v19;
  if ( (v19 & 0x20000000) == 0 )
  {
    if ( (int)MiAcquireNonPagedResources((ULONG_PTR *)v15, a5, 0LL, 2u) < 0 )
      return 3221225626LL;
    v19 = v79;
    v14 = a6;
    v12 = a5;
  }
  if ( a10 )
    v88 = v12 + (*(_DWORD *)(a10 + 40) >> 12);
  else
    v88 = 0;
  if ( (v19 & 0x40) != 0 )
  {
    v20 = v19 | 0x8000;
    v21 = a2 == 0x100000;
    v22 = a5;
    if ( !v21 )
      v20 = v19;
    v23 = (KeFeatureBits & 0x2000000000LL) == 0;
    v86 = v23;
    v24 = v23;
    do
    {
      v25 = v24;
      if ( a5 == MiLargePageSizes[v24] )
        break;
      ++v24;
      v86 = v25 + 1;
      v23 = v25 + 1;
    }
    while ( (unsigned int)(v25 + 1) < 3 );
    LargeNodePage = MiFindLargeNodePage(v15, a7, (unsigned int)&v86, v23, v20, 0, v14);
    if ( LargeNodePage )
    {
      v28 = (LargeNodePage + 0x58000000000LL) / 48;
      *v109 = v28;
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
    v19 = v79;
  }
  v91 = v19 & 0x10000000;
  if ( (v19 & 0x10000000) == 0 )
  {
    MiCreatePteCopyList(a5, 0x40uLL, (__int64)&v110, a4);
    if ( !DWORD1(v110) )
    {
      v27 = -1073741670;
      goto LABEL_128;
    }
    v19 = v79;
  }
  v80 = 0;
  if ( (v19 & 0xB000008) == 0x8000000 && (_DWORD)InitializationPhase )
    v80 = CurrentIrql != 2;
  v32 = a7 | 0x80000000;
  if ( a7 < (unsigned __int16)KeNumberNodes )
    v32 = a7;
  v81 = v32;
  v33 = (unsigned int *)MiReferencePageRuns(v15, 1u, a3, (_DWORD *)a4);
  v34 = *(_QWORD *)(v15 + 16);
  v35 = (int *)v33;
  v83 = (__int64)v33;
  v98 = a2;
  v36 = v79;
  v37 = &v33[4 * *v33 + 4];
  v108 = 0LL;
  v101 = a5;
  v38 = 0LL;
  if ( ((a4 - 1) & a4) == 0 )
    v38 = a4;
  v90 = v37;
  v94 = 0LL;
  v100 = v38;
  v89 = v79 & 0x2000;
  v102 = v89 != 0;
  v85 = 0;
  v95 = v34;
  while ( 2 )
  {
    v39 = -1;
    while ( 2 )
    {
      v40 = MmNumberOfChannels;
      v41 = 0LL;
      v84 = 0LL;
      if ( (unsigned int)MmNumberOfChannels <= 1 )
      {
        v42 = v81;
LABEL_64:
        v47 = &v41[v40];
        v93 = v47;
        goto LABEL_66;
      }
      v42 = v81;
      if ( v81 >= 0 )
      {
        v45 = (unsigned int)v81;
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
          v35 = (int *)v83;
          v39 = *(_DWORD *)(v44 + 8);
          v94 = qword_140C4DED8 + 4LL * v39 * (unsigned __int16)KeNumberNodes;
          v37 = v90;
          v108 = (unsigned int *)(v94 + 4LL * (unsigned __int16)KeNumberNodes);
          v34 = v95;
        }
        v45 = v39;
      }
      if ( (*(_DWORD *)(4544 * v45 + v34 + 4280) & 1) == 0 )
        goto LABEL_64;
      v41 = (unsigned __int8 *)(4544 * v45 + v34 + 4317);
      v84 = v41;
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
      v84 = v41;
      v47 = v41 + 1;
      v93 = v41 + 1;
      while ( 1 )
      {
LABEL_66:
        v99 = BugCheckParameter2;
        v48 = *v35;
        if ( *v35 )
        {
          while ( 1 )
          {
            v49 = (unsigned int)(v48 - 1);
            v92 = v49;
            v50 = v37[2 * v49];
            v51 = v37[2 * v49 + 1];
            v49 *= 2LL;
            v52 = *(_QWORD *)&v35[2 * v49 + 4];
            v53 = *(_QWORD *)&v35[2 * v49 + 6];
            v96 = v52;
            v97 = v53 + v52;
            if ( v98 >= v53 + v52 )
              break;
            if ( (v42 < 0 || (_DWORD)v50 == v42) && (!v41 || (_DWORD)v51 == *v41) )
            {
              if ( (unsigned int)MiCollapseRunTopDown(&v96, v51) )
              {
                v54 = 4544 * v50;
                v112 = 4544 * v50;
                while ( 1 )
                {
                  if ( !*(_QWORD *)(v54 + *(_QWORD *)(v15 + 16) + 4176) && (_DWORD)InitializationPhase )
                  {
LABEL_100:
                    v42 = v81;
                    break;
                  }
                  v55 = v97;
                  v56 = v101;
                  v87 = 0;
                  v57 = v102;
                  if ( v102 && v101 > v97 - v96 )
                    v56 = v97 - v96;
                  v58 = v97 - v56;
                  v59 = (unsigned __int64 *)(48 * (v97 - v56) - 0x58000000000LL);
                  if ( !v102 )
                  {
                    v61 = MiPfnsWorthTrying(a1, 48 * ((int)v97 - (int)v56), v101, v36, (__int64)&v87);
                    if ( v61 )
                      goto LABEL_95;
                    if ( v87 == 1 )
                      MiEmptyKernelStackCache();
                  }
                  v61 = MiClaimPhysicalRun(a1, v55 - v56, v56, v99, (__int64)&v110, v79, -1, v107, a6, 0LL);
                  if ( v107 )
                  {
                    v62 = *(_DWORD *)(v107 + 40) >> 12;
                    if ( v62 == v88 )
                      goto LABEL_118;
                    v101 = (unsigned int)(v88 - v62);
                  }
                  else if ( !v61 )
                  {
LABEL_118:
                    MiDereferencePageRunsEx(v83, 1);
                    MiReleasePteCopyList((__int64)&v110);
                    if ( v89 )
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
                    if ( (v79 & 0x40000000) == 0 )
                    {
                      v73 = &v59[6 * a5];
                      do
                      {
                        MiSetPfnOwnedAndActive((__int64)v59, 0, -8LL, v72, ((v79 & 0x100000) != 0) + 1);
                        v59 += 6;
                      }
                      while ( v59 != v73 );
                    }
                    *v109 = v58;
                    return 0LL;
                  }
                  if ( *(_QWORD *)(qword_140C4E688 + 8 * ((v59[5] >> 39) & 0x3FF)) == a1 )
                  {
                    if ( (unsigned int)MiIsPageOnBadList(48 * (v55 - v56) - 0x58000000000LL) )
                    {
                      MiLockPage(v63);
                      if ( (unsigned int)MiIsPageOnBadList(48 * (v55 - v56) - 0x58000000000LL) )
                      {
                        if ( v91 )
                        {
                          MiUnlockPage(v64, v65);
                          v41 = v84;
                          v47 = v93;
                          v66 = 0;
                          v80 = 0;
                          goto LABEL_106;
                        }
                      }
                      else
                      {
                        v85 = 1;
                      }
                      MiUnlockPage(v64, v65);
                    }
                    else
                    {
                      v85 = 1;
                    }
                  }
LABEL_95:
                  if ( v61 >= v55 - v96 || !v57 && v55 - v96 - v61 < v56 )
                    v99 = v55 - v61 - 1;
                  v97 = v55 - v61;
                  v67 = MiCollapseRunTopDown(&v96, v60);
                  v15 = a1;
                  v54 = v112;
                  v36 = v79;
                  if ( !v67 )
                    goto LABEL_100;
                }
              }
              v41 = v84;
              v35 = (int *)v83;
            }
            v48 = v92;
            if ( !v92 )
              break;
            v37 = v90;
          }
          v47 = v93;
        }
        v66 = v80;
LABEL_106:
        if ( !v41 )
          goto LABEL_111;
        v15 = a1;
        ++v41;
        v42 = v81;
        v35 = (int *)v83;
        v37 = v90;
        v84 = v41;
        if ( v41 >= v47 )
          break;
        v36 = v79;
      }
      if ( v39 != -1 )
      {
        v68 = (unsigned int *)(v94 + 4);
        v94 = (__int64)v68;
        if ( v68 != v108 )
        {
          v39 = *v68;
          v34 = v95;
          v36 = v79;
          continue;
        }
      }
      break;
    }
LABEL_111:
    if ( v66 && v85 == 1 )
    {
      if ( (DWORD1(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v113[1] = 16LL;
        v69 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        v114[1] = a5 << 12;
        v114[0] = v69;
        v113[0] = v114;
        EtwTraceKernelEvent((int)v113, 1, 0x20100000u, 625, 4200962);
      }
      v15 = a1;
      if ( byte_140C4EF1C )
        MiQueueWorkingSetRequest(a1, 32LL);
      v36 = v79;
      v35 = (int *)v83;
      v37 = v90;
      v34 = v95;
      v80 = 0;
      continue;
    }
    break;
  }
  v27 = -1073741801;
  MiDereferencePageRunsEx(v83, 1);
  v15 = a1;
LABEL_128:
  v20 = v79;
  v22 = a5;
LABEL_129:
  MiReleasePteCopyList((__int64)&v110);
  if ( (v20 & 0x20000000) == 0 )
  {
    MiReturnCommit(v15, v22, v74, v75);
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
            v78 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    v22 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v21 = (_DWORD)CachedResidentAvailable == v78;
            LODWORD(CachedResidentAvailable) = v78;
            if ( v21 )
              return v27;
          }
          while ( v78 != -1 && v22 + v78 <= 0x100 );
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
