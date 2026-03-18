/*
 * XREFs of RtlCompareMemoryUlong @ 0x140405BC0
 * Callers:
 *     MiEvictPageTableLock @ 0x1402CC400 (MiEvictPageTableLock.c)
 *     MiDeleteSystemPageTable @ 0x140314340 (MiDeleteSystemPageTable.c)
 *     MiHashIsCommon @ 0x140369A7C (MiHashIsCommon.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x1403B8D58 (MiFreedUnusedPfnPagesWorker.c)
 *     MiDoGangAssignment @ 0x14055E6A0 (MiDoGangAssignment.c)
 *     RtlpAllocateHeap @ 0x140587120 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140587A80 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140587E70 (RtlpCreateSplitBlock.c)
 *     RtlScrubMemory @ 0x14058EB58 (RtlScrubMemory.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     IopTrackLink @ 0x14069FC10 (IopTrackLink.c)
 *     MiSwitchToPfns @ 0x140A43FB8 (MiSwitchToPfns.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemoryUlong(PVOID Source, SIZE_T Length, ULONG Pattern)
{
  bool v4; // zf
  SIZE_T v5; // rdx
  SIZE_T v6; // rcx

  v5 = Length >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *(_DWORD *)Source == Pattern;
      Source = (char *)Source + 4;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
