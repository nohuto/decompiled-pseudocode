/*
 * XREFs of ZwOpenKey_0 @ 0x1C0031B35
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C009FC74 (ArbBuildAssignmentOrdering.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00B7440 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B7654 (ArbAddMmConfigRangeAsBootReserved.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwOpenKey_0(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return ZwOpenKey(KeyHandle, DesiredAccess, ObjectAttributes);
}
