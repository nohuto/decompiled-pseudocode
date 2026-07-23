/*
 * XREFs of _NtOpenPartition@12 @ 0x4B2F3BE0
 * Callers:
 *     _LdrpInitializeProcessHeap@12 @ 0x4B332D8F (_LdrpInitializeProcessHeap@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return Wow64SystemServiceCall();
}
