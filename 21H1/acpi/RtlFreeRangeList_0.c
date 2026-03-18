/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C0031A6F
 * Callers:
 *     ArbBootAllocation @ 0x1C00951A0 (ArbBootAllocation.c)
 *     ArbTestAllocation @ 0x1C00956A0 (ArbTestAllocation.c)
 *     ArbRollbackAllocation @ 0x1C00A33F0 (ArbRollbackAllocation.c)
 *     ArbCommitAllocation @ 0x1C00B78D0 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C00B7904 (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C00B79C0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C00B7D60 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00B8140 (ArbRetestAllocation.c)
 *     ArbStartArbiter @ 0x1C00B8580 (ArbStartArbiter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
