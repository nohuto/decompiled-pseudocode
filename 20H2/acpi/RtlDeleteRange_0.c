/*
 * XREFs of RtlDeleteRange_0 @ 0x1C0031AED
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1C00B1D30 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B6C20 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1C00B78A0 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
