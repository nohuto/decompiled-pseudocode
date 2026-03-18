/*
 * XREFs of RtlDeleteRange_0 @ 0x1C002F20D
 * Callers:
 *     AcpiPortarbBacktrackAllocation @ 0x1C00B12A0 (AcpiPortarbBacktrackAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B67A0 (IrqArbBacktrackAllocation.c)
 *     ArbBacktrackAllocation @ 0x1C00B76C0 (ArbBacktrackAllocation.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDeleteRange_0(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  return RtlDeleteRange(RangeList, Start, End, Owner);
}
