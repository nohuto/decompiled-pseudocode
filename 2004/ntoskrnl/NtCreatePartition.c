/*
 * XREFs of NtCreatePartition @ 0x1409099A0
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     PsReferencePartitionByHandle @ 0x14061CDA4 (PsReferencePartitionByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     PspAllocatePartition @ 0x1407B9758 (PspAllocatePartition.c)
 */

NTSTATUS __cdecl NtCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  int v5; // r14d
  char PreviousMode; // di
  __int64 v10; // rcx
  NTSTATUS Partition; // ebx
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15[3]; // [rsp+58h] [rbp-20h] BYREF

  v5 = (int)ObjectAttributes;
  v15[0] = 0LL;
  Handle = 0LL;
  v14 = 0LL;
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
      || (Partition = PsReferencePartitionByHandle((ULONG_PTR)ParentPartitionHandle, 2, PreviousMode, 0x70437350u, &v14),
          Partition >= 0) )
    {
      Partition = PspAllocatePartition(v5, DesiredAccess, PreviousMode, v14, 0, v15, (__int64)&Handle);
      if ( Partition >= 0 )
      {
        PsDereferencePartition(v15[0]);
        *PartitionHandle = Handle;
      }
    }
  }
  else
  {
    Partition = -1073741727;
  }
  if ( v14 )
    PsDereferencePartition(v14);
  return Partition;
}
