/*
 * XREFs of MmManagePartitionCreateLargePages @ 0x1408DBA34
 * Callers:
 *     NtManagePartition @ 0x14067CAC0 (NtManagePartition.c)
 * Callees:
 *     MiGetLargestPageIndex @ 0x1402486D0 (MiGetLargestPageIndex.c)
 *     MiRebuildLargePage @ 0x140552918 (MiRebuildLargePage.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MmManagePartitionCreateLargePages(__int64 *a1, __int64 a2, KPROCESSOR_MODE a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned int LargestPageIndex; // eax
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 *v11; // rax
  unsigned __int64 v12; // r9

  v5 = 0;
  if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
  {
    if ( !*(_DWORD *)a2 && *(_DWORD *)(a2 + 4) < (unsigned int)(unsigned __int16)KeNumberNodes )
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( (v6 & 0xFFF) == 0 )
      {
        v7 = v6 >> 12;
        LargestPageIndex = MiGetLargestPageIndex();
        v10 = LargestPageIndex;
        if ( LargestPageIndex < 3 )
        {
          v11 = &MiLargePageSizes[LargestPageIndex];
          do
          {
            if ( *v11 == v7 )
              break;
            v10 = (unsigned int)(v10 + 1);
            ++v11;
          }
          while ( (unsigned int)v10 < 3 );
        }
        if ( (_DWORD)v10 == 3 || !(_DWORD)v10 )
          return (unsigned int)-1073741637;
        v12 = *(_QWORD *)(a2 + 16);
        if ( v12 && v12 < 0xFFFFFFFFFFFFFFFFuLL / v7 )
        {
          *(_QWORD *)(a2 + 24) = MiRebuildLargePage(*a1, v9, v10, (_DWORD *)(v7 * v12)) / v7;
          return v5;
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  else
  {
    return (unsigned int)-1073741727;
  }
}
