/*
 * XREFs of ExpAllocateMidLevelTable @ 0x1406E2724
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x140671724 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x1405D636C (ExpFreeTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x1406719B0 (ExpAllocateLowLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x1406E2798 (ExpAllocateTablePagedPool.c)
 */

_QWORD *__fastcall ExpAllocateMidLevelTable(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *TablePagedPool; // rdi
  _QWORD *LowLevelTable; // rax

  TablePagedPool = (_QWORD *)ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 4096LL);
  if ( TablePagedPool )
  {
    LowLevelTable = ExpAllocateLowLevelTable(a1, a3);
    *a2 = LowLevelTable;
    if ( LowLevelTable )
    {
      *TablePagedPool = LowLevelTable;
      return TablePagedPool;
    }
    ExpFreeTablePagedPool(*(_QWORD *)(a1 + 16), TablePagedPool, 0x1000uLL);
  }
  return 0LL;
}
