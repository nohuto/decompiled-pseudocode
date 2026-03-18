/*
 * XREFs of RtlCompareMemoryUlong @ 0x1403FF8F0
 * Callers:
 *     MiDeleteSystemPageTable @ 0x14032E4E0 (MiDeleteSystemPageTable.c)
 *     MiEvictPageTableLock @ 0x14032E85C (MiEvictPageTableLock.c)
 *     MiHashIsCommon @ 0x140367A9C (MiHashIsCommon.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x1403B62B8 (MiFreedUnusedPfnPagesWorker.c)
 *     MiDoGangAssignment @ 0x14055ACD0 (MiDoGangAssignment.c)
 *     RtlpAllocateHeap @ 0x1405837C0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140584120 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140584510 (RtlpCreateSplitBlock.c)
 *     RtlScrubMemory @ 0x14058B128 (RtlScrubMemory.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     IopTrackLink @ 0x1406D3810 (IopTrackLink.c)
 *     MiSwitchToPfns @ 0x140A3DD18 (MiSwitchToPfns.c)
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
