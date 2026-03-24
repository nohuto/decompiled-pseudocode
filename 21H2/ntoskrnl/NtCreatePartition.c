/*
 * XREFs of NtCreatePartition @ 0x14090CD70
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x1402ABFDC (PsDereferencePartition.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 *     PsReferencePartitionByHandle @ 0x140692204 (PsReferencePartitionByHandle.c)
 *     PspAllocatePartition @ 0x1407CC2B4 (PspAllocatePartition.c)
 */

__int64 __fastcall NtCreatePartition(ULONG_PTR a1, HANDLE *a2, ACCESS_MASK a3, __int64 a4)
{
  char PreviousMode; // di
  __int64 v9; // rcx
  __int64 v10; // r8
  int Partition; // ebx
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15[3]; // [rsp+58h] [rbp-20h] BYREF

  v15[0] = 0LL;
  Handle = 0LL;
  v14 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    if ( !a1
      || (LOBYTE(v10) = PreviousMode,
          Partition = PsReferencePartitionByHandle(a1, 2LL, v10, 0x70437350u, &v14),
          Partition >= 0) )
    {
      Partition = PspAllocatePartition(a4, a3, PreviousMode, v14, 0, v15, (__int64)&Handle);
      if ( Partition >= 0 )
      {
        PsDereferencePartition(v15[0]);
        *a2 = Handle;
      }
    }
  }
  else
  {
    Partition = -1073741727;
  }
  if ( v14 )
    PsDereferencePartition(v14);
  return (unsigned int)Partition;
}
