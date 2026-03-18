/*
 * XREFs of ZwClose_0 @ 0x1C002F1D7
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C009E3D8 (ArbBuildAssignmentOrdering.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00B7260 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B7474 (ArbAddMmConfigRangeAsBootReserved.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwClose_0(HANDLE Handle)
{
  return ZwClose(Handle);
}
