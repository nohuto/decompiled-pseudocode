/*
 * XREFs of ZwOpenPartition @ 0x1403F47F0
 * Callers:
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140893370 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PartitionHandle);
}
