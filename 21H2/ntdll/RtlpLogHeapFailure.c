/*
 * XREFs of RtlpLogHeapFailure @ 0x18010E17C
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180001BC0 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180001E7C (RtlpProbeUserBufferSafe.c)
 *     RtlSetUserValueHeap @ 0x180001F60 (RtlSetUserValueHeap.c)
 *     RtlpHpLargeFree @ 0x180003280 (RtlpHpLargeFree.c)
 *     RtlpHpHeapCheckCommitLimit @ 0x180003748 (RtlpHpHeapCheckCommitLimit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1800037E8 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180003888 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180003FA4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpCheckAllocationSizeLimit @ 0x180007650 (RtlpHpCheckAllocationSizeLimit.c)
 *     RtlpDestroyHeapSegment @ 0x1800098EC (RtlpDestroyHeapSegment.c)
 *     RtlpHeapRemoveListEntry @ 0x18000A774 (RtlpHeapRemoveListEntry.c)
 *     RtlpInitializeHeapSegment @ 0x18000BB54 (RtlpInitializeHeapSegment.c)
 *     RtlpFindAndCommitPages @ 0x18000E618 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x18000E914 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x18000EA8C (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x18000EC28 (RtlpRemoveUCRBlock.c)
 *     RtlpHpHeapValidateProtection @ 0x18000EE64 (RtlpHpHeapValidateProtection.c)
 *     RtlpCreateSplitBlock @ 0x18001DD64 (RtlpCreateSplitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x18001E2D8 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18001E940 (RtlpInsertFreeBlock.c)
 *     RtlpHeapFindListLookupEntry @ 0x18001EC28 (RtlpHeapFindListLookupEntry.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001EEB4 (RtlpCoalesceFreeBlocks.c)
 *     RtlpGrowBlockInPlace @ 0x18001F630 (RtlpGrowBlockInPlace.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpHpSegMgrCommit @ 0x180022E90 (RtlpHpSegMgrCommit.c)
 *     RtlReAllocateHeap @ 0x180023640 (RtlReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x180023990 (RtlpHpReAllocateHeap.c)
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180024FE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegFree @ 0x1800279F0 (RtlpHpSegFree.c)
 *     RtlpHpVsContextFree @ 0x180028500 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180028CD0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpHeapListCompare @ 0x18006EB28 (RtlpHeapListCompare.c)
 *     RtlpHpVsContextGrowInPlace @ 0x180071F18 (RtlpHpVsContextGrowInPlace.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2E30 (RtlSetUserFlagsHeap.c)
 *     RtlpCoalesceHeap @ 0x1800F365C (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800F64C0 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800FAD70 (RtlpValidateHeapSegment.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107E64 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpVsContextFreeInternal @ 0x18010FC08 (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpHeapHandleError @ 0x1801084C0 (RtlpHpHeapHandleError.c)
 */

__int64 __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_180169800 != a2 )
  {
    qword_180169818 = a5;
    qword_180169820 = a6;
    dword_1801697F8 = a1;
    qword_180169800 = a2;
    qword_180169808 = a3;
    qword_180169810 = a4;
    return RtlpHpHeapHandleError(a1, a2, a3);
  }
  return result;
}
