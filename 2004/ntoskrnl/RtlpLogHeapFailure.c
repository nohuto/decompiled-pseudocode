/*
 * XREFs of RtlpLogHeapFailure @ 0x14058E080
 * Callers:
 *     RtlpHpFreeHeap @ 0x1402536BC (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x1402538BC (RtlpHpSegFree.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x140257FAC (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14025A460 (RtlpHpVaMgrCtxQuery.c)
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1402898C0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsContextFree @ 0x14028A9F0 (RtlpHpVsContextFree.c)
 *     ExAllocateHeapPool @ 0x14028C7B0 (ExAllocateHeapPool.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1402CB580 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLargeFree @ 0x1402DA540 (RtlpHpLargeFree.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x1402DB28C (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlFreeHeap @ 0x1402DB370 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1402DB3D4 (RtlpFreeHeapInternal.c)
 *     RtlAllocateHeap @ 0x1402DB460 (RtlAllocateHeap.c)
 *     RtlpHpVsContextFreeInternal @ 0x1402DBB00 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpFixedVsFree @ 0x14037E390 (RtlpHpFixedVsFree.c)
 *     RtlSizeHeap @ 0x140581290 (RtlSizeHeap.c)
 *     RtlpAllocateHeap @ 0x1405837C0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140584120 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140584510 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x140584C34 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x140584D74 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405855C8 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x140585824 (RtlpFreeHeap.c)
 *     RtlpInitializeHeapSegment @ 0x140585D90 (RtlpInitializeHeapSegment.c)
 *     RtlpInsertFreeBlock @ 0x14058603C (RtlpInsertFreeBlock.c)
 *     RtlpInsertUCRBlock @ 0x140586380 (RtlpInsertUCRBlock.c)
 *     RtlpProbeUserBufferSafe @ 0x140586448 (RtlpProbeUserBufferSafe.c)
 *     RtlpRemoveUCRBlock @ 0x1405864D8 (RtlpRemoveUCRBlock.c)
 *     RtlpSizeHeapInternal @ 0x1405866E8 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x14058E0D4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapListCompare @ 0x14058EB20 (RtlpHeapListCompare.c)
 *     RtlZeroHeap @ 0x140912640 (RtlZeroHeap.c)
 *     RtlpDestroyHeapSegment @ 0x140912B14 (RtlpDestroyHeapSegment.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x14058E440 (RtlpHpHeapHandleError.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140C117B0 != a2 )
  {
    qword_140C117C8 = a5;
    qword_140C117D0 = a6;
    dword_140C117A8 = a1;
    qword_140C117B0 = a2;
    qword_140C117B8 = a3;
    qword_140C117C0 = a4;
    RtlpHpHeapHandleError();
  }
}
