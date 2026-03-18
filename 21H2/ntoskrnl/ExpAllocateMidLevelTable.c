/*
 * XREFs of ExpAllocateMidLevelTable @ 0x1406A62C8
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x1406A6C04 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPool @ 0x1406A633C (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x1406A6ECC (ExpAllocateLowLevelTable.c)
 *     ExpFreeTablePagedPool @ 0x1406AC298 (ExpFreeTablePagedPool.c)
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
