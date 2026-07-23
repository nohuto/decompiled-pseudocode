/*
 * XREFs of ExpAllocateMidLevelTable @ 0x140616ACC
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x140695888 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPool @ 0x140616B40 (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x140695B14 (ExpAllocateLowLevelTable.c)
 *     ExpFreeTablePagedPool @ 0x1406F3C10 (ExpFreeTablePagedPool.c)
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
