/*
 * XREFs of NtCreatePartition @ 0x14090F5C0
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x140263688 (PsDereferencePartition.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     PsReferencePartitionByHandle @ 0x140660764 (PsReferencePartitionByHandle.c)
 *     PspAllocatePartition @ 0x1407C7FE8 (PspAllocatePartition.c)
 */

__int64 __fastcall NtCreatePartition(ULONG_PTR a1, HANDLE *a2, ACCESS_MASK a3, int a4)
{
  char PreviousMode; // di
  __int64 v9; // rcx
  int Partition; // ebx
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14[3]; // [rsp+58h] [rbp-20h] BYREF

  v14[0] = 0LL;
  Handle = 0LL;
  v13 = 0LL;
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
    if ( !a1 || (Partition = PsReferencePartitionByHandle(a1, 2, PreviousMode, 0x70437350u, &v13), Partition >= 0) )
    {
      Partition = PspAllocatePartition(a4, a3, PreviousMode, v13, 0, v14, (__int64)&Handle);
      if ( Partition >= 0 )
      {
        PsDereferencePartition(v14[0]);
        *a2 = Handle;
      }
    }
  }
  else
  {
    Partition = -1073741727;
  }
  if ( v13 )
    PsDereferencePartition(v13);
  return (unsigned int)Partition;
}
