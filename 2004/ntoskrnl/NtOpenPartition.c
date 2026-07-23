/*
 * XREFs of NtOpenPartition @ 0x1407BEE80
 * Callers:
 *     <none>
 * Callees:
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     ObOpenObjectByName @ 0x1406945D0 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v5; // rcx
  NTSTATUS result; // eax
  HANDLE Handle[4]; // [rsp+48h] [rbp-20h] BYREF

  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PartitionHandle < 0x7FFFFFFF0000LL )
      v5 = (__int64)PartitionHandle;
    *(_QWORD *)v5 = *(_QWORD *)v5;
  }
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             (__int64)PsPartitionType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             (__int64)Handle);
  if ( result >= 0 )
    *PartitionHandle = Handle[0];
  return result;
}
