/*
 * XREFs of ExpAllocateMidLevelTable @ 0x14062B444
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x14062B0A8 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x1406044E0 (ExpFreeTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x14062B334 (ExpAllocateLowLevelTable.c)
 *     ExpAllocateTablePagedPool @ 0x14062B408 (ExpAllocateTablePagedPool.c)
 */

_QWORD *__fastcall ExpAllocateMidLevelTable(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *TablePagedPool; // rdi
  _QWORD *LowLevelTable; // rax

  TablePagedPool = ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 0x1000uLL);
  if ( TablePagedPool )
  {
    LowLevelTable = ExpAllocateLowLevelTable(a1, a3);
    *a2 = LowLevelTable;
    if ( LowLevelTable )
    {
      *TablePagedPool = LowLevelTable;
      return TablePagedPool;
    }
    ExpFreeTablePagedPool(*(struct _KPROCESS **)(a1 + 16), TablePagedPool, 4096LL);
  }
  return 0LL;
}
