/*
 * XREFs of MmManagePartitionMoveMemory @ 0x1408DBC40
 * Callers:
 *     NtManagePartition @ 0x14067CAC0 (NtManagePartition.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408DAAD8 (MiAllocatePartitionPhysicalPages.c)
 */

__int64 __fastcall MmManagePartitionMoveMemory(ULONG_PTR **a1, ULONG_PTR **a2, __int64 a3, KPROCESSOR_MODE a4)
{
  ULONG_PTR *v4; // rbp
  unsigned __int64 v6; // rdx
  ULONG_PTR *v7; // r14
  unsigned int v9; // ebx
  int v10; // edi
  bool v11; // zf

  v4 = *a2;
  v6 = *(_QWORD *)a3;
  v7 = *a1;
  if ( !*(_QWORD *)a3 )
    return 0LL;
  v9 = *(_DWORD *)(a3 + 8);
  if ( v9 == -1 )
  {
    v9 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL);
  }
  else if ( v9 >= (unsigned __int16)KeNumberNodes )
  {
    return 3221225485LL;
  }
  v10 = *(_DWORD *)(a3 + 12);
  if ( (v10 & 0xFFFFFC00) != 0 )
    return 3221225485LL;
  if ( (v10 & 0x200) != 0 )
    return 3221225659LL;
  if ( (v10 & 0x12) != 0 )
  {
    v11 = (*(_DWORD *)(a3 + 12) & 0x1E0) == 0;
  }
  else
  {
    if ( (v10 & 0x60) == 0 )
    {
      if ( (v10 & 0x180) != 0 && ((KeFeatureBits & 0x2000000000LL) == 0 || (v6 & 0x3FFFF) != 0) )
        return 3221225485LL;
      goto LABEL_19;
    }
    v11 = (*(_DWORD *)(a3 + 12) & 0x180) == 0;
  }
  if ( !v11 || (v6 & 0x1FF) != 0 )
    return 3221225485LL;
LABEL_19:
  if ( (v10 & 8) == 0 )
    return MiAllocatePartitionPhysicalPages(v4, (unsigned __int64)v7, *(_QWORD *)a3, v9, v10, 0);
  if ( v7 != &MiSystemPartition || v4 == &MiSystemPartition )
    return 3221225485LL;
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
    return 3221225569LL;
  return MiAllocatePartitionPhysicalPages(v4, (unsigned __int64)v7, *(_QWORD *)a3, v9, v10, 0);
}
