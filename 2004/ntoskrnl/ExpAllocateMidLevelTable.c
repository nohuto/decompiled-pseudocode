/*
 * XREFs of ExpAllocateMidLevelTable @ 0x1405D04B8
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x1405D0C04 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPool @ 0x1405D052C (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x1405D0E90 (ExpAllocateLowLevelTable.c)
 *     ExpFreeTablePagedPool @ 0x14065CAFC (ExpFreeTablePagedPool.c)
 */

__int64 *__fastcall ExpAllocateMidLevelTable(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *TablePagedPool; // rdi
  __int64 LowLevelTable; // rax

  TablePagedPool = (__int64 *)ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 4096LL);
  if ( TablePagedPool )
  {
    LowLevelTable = ExpAllocateLowLevelTable(a1, a3);
    *a2 = LowLevelTable;
    if ( LowLevelTable )
    {
      *TablePagedPool = LowLevelTable;
      return TablePagedPool;
    }
    ExpFreeTablePagedPool(*(_QWORD *)(a1 + 16), TablePagedPool, 4096LL);
  }
  return 0LL;
}
