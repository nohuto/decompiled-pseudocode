/*
 * XREFs of RtlpLogHeapFailure @ 0x14058D990
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140238750 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     RtlpHpVsContextAllocateInternal @ 0x14024D020 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFree @ 0x14024E150 (RtlpHpVsContextFree.c)
 *     ExAllocateHeapPool @ 0x14024FF10 (ExAllocateHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402AC6EC (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x1402AC8EC (RtlpHpSegFree.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x1402B0FDC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402B3490 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVsContextFreeInternal @ 0x14035E130 (RtlpHpVsContextFreeInternal.c)
 *     RtlFreeHeap @ 0x14035EDC0 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x14035EE24 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x14035EEB0 (RtlAllocateHeap.c)
 *     RtlpHpLargeFree @ 0x14035F014 (RtlpHpLargeFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x14035FD60 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpHpFixedVsFree @ 0x14037D8D0 (RtlpHpFixedVsFree.c)
 *     RtlSizeHeap @ 0x140580B10 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x140583090 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405839F0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140583DE0 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x140584504 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x140584644 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x140584E98 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1405850F4 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x140585660 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x14058590C (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x140585C50 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x140585D18 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x140585DA8 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x140585FB8 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x14058D9E4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x14058E430 (RtlpHeapListCompare.c)
 *     RtlZeroHeap @ 0x1409112C0 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x140911794 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x14058DD50 (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140C117A0 != a2 )
  {
    qword_140C117B8 = a5;
    qword_140C117C0 = a6;
    dword_140C11798 = a1;
    qword_140C117A0 = a2;
    qword_140C117A8 = a3;
    qword_140C117B0 = a4;
    RtlpHpHeapHandleError();
  }
}
