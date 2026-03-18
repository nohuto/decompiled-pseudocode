/*
 * XREFs of ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007A7F8
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0078774 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0078F60 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A4DC (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007A59C (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C007A610 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C007AD60 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007CD10 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C007D5B0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C2028 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C2170 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00C22C8 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 * Callees:
 *     ?FreeWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAU_LOOKASIDE_LIST_EX@@PEAXPEAPEAXPEAI@Z @ 0x1C000249C (-FreeWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAU_LOOKASIDE_LIST_EX@@PEAXPEAPEAXPEAI@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(VIDMM_RECYCLE_HEAP_MGR *this, struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY *v5; // rsi
  VIDMM_RECYCLE_HEAP_MGR *v6; // rcx
  __int64 v7; // r8

  Next = a2[6].Next;
  if ( Next )
  {
    ExFreePoolWithTag(Next, 0);
    a2[6].Next = 0LL;
  }
  --*((_QWORD *)&a2[5].Next->Next + 1);
  a2[14].Next = 0LL;
  v5 = a2[5].Next;
  *((_BYTE *)&a2[14].Next + 8) = 1;
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)&v5[8].Next + 1);
  if ( v6 )
  {
    v7 = *((_QWORD *)v6 + 3) + 144LL * *((_QWORD *)v6 + 4);
    *(_DWORD *)v7 = 1;
    *(_QWORD *)(v7 + 8) = a2;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v7 + 16), 0LL);
    ++*(_QWORD *)(*((_QWORD *)&v5[8].Next + 1) + 32LL);
    v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)&v5[8].Next + 1);
    if ( *((_QWORD *)v6 + 4) == *((_QWORD *)v6 + 6) )
    {
      *((_QWORD *)v6 + 4) = 0LL;
      *(_BYTE *)(*((_QWORD *)&v5[8].Next + 1) + 40LL) = 1;
    }
  }
  VIDMM_RECYCLE_HEAP_MGR::FreeWithStore(
    v6,
    *((struct _LOOKASIDE_LIST_EX **)this + 165),
    a2,
    (void **)this + 206,
    (unsigned int *)this + 403);
}
