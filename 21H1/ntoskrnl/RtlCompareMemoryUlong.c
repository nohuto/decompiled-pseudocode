/*
 * XREFs of RtlCompareMemoryUlong @ 0x1403FE660
 * Callers:
 *     MiDeleteSystemPageTable @ 0x1402F2740 (MiDeleteSystemPageTable.c)
 *     MiEvictPageTableLock @ 0x1402F2ABC (MiEvictPageTableLock.c)
 *     MiHashIsCommon @ 0x1403670DC (MiHashIsCommon.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x1403B5488 (MiFreedUnusedPfnPagesWorker.c)
 *     MiDoGangAssignment @ 0x14055A680 (MiDoGangAssignment.c)
 *     RtlpAllocateHeap @ 0x140583090 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405839F0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140583DE0 (RtlpCreateSplitBlock.c)
 *     RtlScrubMemory @ 0x14058AA38 (RtlScrubMemory.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     IopTrackLink @ 0x1406B5190 (IopTrackLink.c)
 *     MiSwitchToPfns @ 0x140A44AE0 (MiSwitchToPfns.c)
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
