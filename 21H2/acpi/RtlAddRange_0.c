/*
 * XREFs of RtlAddRange_0 @ 0x1C002F1B3
 * Callers:
 *     ArbAddAllocation @ 0x1C00B7210 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00B7260 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B7474 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeRangeList @ 0x1C00B7970 (ArbInitializeRangeList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlAddRange_0(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Start,
        ULONGLONG End,
        UCHAR Attributes,
        ULONG Flags,
        PVOID UserData,
        PVOID Owner)
{
  return RtlAddRange(RangeList, Start, End, Attributes, Flags, UserData, Owner);
}
