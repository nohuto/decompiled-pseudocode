/*
 * XREFs of RtlInvertRangeList_0 @ 0x1C0031AA5
 * Callers:
 *     ArbInitializeRangeList @ 0x1C00B79C0 (ArbInitializeRangeList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlInvertRangeList_0(PRTL_RANGE_LIST InvertedRangeList, PRTL_RANGE_LIST RangeList)
{
  return RtlInvertRangeList(InvertedRangeList, RangeList);
}
