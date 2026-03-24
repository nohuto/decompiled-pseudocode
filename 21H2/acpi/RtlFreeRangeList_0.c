/*
 * XREFs of RtlFreeRangeList_0 @ 0x1C0031CCF
 * Callers:
 *     ArbBootAllocation @ 0x1C00954B0 (ArbBootAllocation.c)
 *     ArbTestAllocation @ 0x1C00959B0 (ArbTestAllocation.c)
 *     ArbRollbackAllocation @ 0x1C00A3710 (ArbRollbackAllocation.c)
 *     ArbCommitAllocation @ 0x1C00B7BF0 (ArbCommitAllocation.c)
 *     ArbDeleteArbiterInstance @ 0x1C00B7C24 (ArbDeleteArbiterInstance.c)
 *     ArbInitializeRangeList @ 0x1C00B7CE0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1C00B8080 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00B8460 (ArbRetestAllocation.c)
 *     ArbStartArbiter @ 0x1C00B88A0 (ArbStartArbiter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlFreeRangeList_0(PRTL_RANGE_LIST RangeList)
{
  RtlFreeRangeList(RangeList);
}
