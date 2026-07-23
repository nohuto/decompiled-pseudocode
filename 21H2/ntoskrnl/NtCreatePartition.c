/*
 * XREFs of NtCreatePartition @ 0x14090CED0
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     PsReferencePartitionByHandle @ 0x14067CE44 (PsReferencePartitionByHandle.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     PspAllocatePartition @ 0x1407CC424 (PspAllocatePartition.c)
 */

NTSTATUS __cdecl NtCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  char PreviousMode; // di
  __int64 v10; // rcx
  __int64 v11; // r8
  NTSTATUS Partition; // ebx
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16[3]; // [rsp+58h] [rbp-20h] BYREF

  v16[0] = 0LL;
  Handle = 0LL;
  v15 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PartitionHandle < 0x7FFFFFFF0000LL )
      v10 = (__int64)PartitionHandle;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    if ( !ParentPartitionHandle
      || (LOBYTE(v11) = PreviousMode,
          Partition = PsReferencePartitionByHandle((ULONG_PTR)ParentPartitionHandle, 2LL, v11, 0x70437350u, &v15),
          Partition >= 0) )
    {
      Partition = PspAllocatePartition(
                    (__int64)ObjectAttributes,
                    DesiredAccess,
                    PreviousMode,
                    v15,
                    0,
                    v16,
                    (__int64)&Handle);
      if ( Partition >= 0 )
      {
        PsDereferencePartition(v16[0]);
        *PartitionHandle = Handle;
      }
    }
  }
  else
  {
    Partition = -1073741727;
  }
  if ( v15 )
    PsDereferencePartition(v15);
  return Partition;
}
