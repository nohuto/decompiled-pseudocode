/*
 * XREFs of RtlpLogHeapFailure @ 0x140591B24
 * Callers:
 *     ExAllocateHeapPool @ 0x140212080 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1402147E0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFree @ 0x140215910 (RtlpHpVsContextFree.c)
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x140237EEC (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x140237FF4 (RtlpHpSegFree.c)
 *     RtlpHpVsContextFreeInternal @ 0x14023B39C (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1402CDB5C (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402CEBC4 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1402D1660 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLargeFree @ 0x140308734 (RtlpHpLargeFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x140309480 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlFreeHeap @ 0x140309680 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1403096E4 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x140309770 (RtlAllocateHeap.c)
 *     RtlpHpFixedVsFree @ 0x1403800C0 (RtlpHpFixedVsFree.c)
 *     RtlSizeHeap @ 0x140584BF0 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x140587120 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140587A80 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140587E70 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x140588594 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405886D4 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x140588F28 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x140589184 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1405896F0 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x14058999C (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x140589CE0 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x140589DA8 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x140589E38 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x14058A048 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x140591B78 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x1405925C4 (RtlpHeapListCompare.c)
 *     RtlZeroHeap @ 0x140918180 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x140918654 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x140591EE4 (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140C117D0 != a2 )
  {
    qword_140C117E8 = a5;
    qword_140C117F0 = a6;
    dword_140C117C8 = a1;
    qword_140C117D0 = a2;
    qword_140C117D8 = a3;
    qword_140C117E0 = a4;
    RtlpHpHeapHandleError();
  }
}
