/*
 * XREFs of NtOpenPartition @ 0x1407D1B30
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14064AA70 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
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
