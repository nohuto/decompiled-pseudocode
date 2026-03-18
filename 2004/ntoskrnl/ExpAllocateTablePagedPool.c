/*
 * XREFs of ExpAllocateTablePagedPool @ 0x1405D052C
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1405D04B8 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1405D0C04 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1409495E8 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1405D0EC4 (ExpAllocateTablePagedPoolNoZero.c)
 */

void *__fastcall ExpAllocateTablePagedPool(__int64 a1, size_t a2)
{
  void *TablePagedPoolNoZero; // rax
  void *v4; // rbx

  TablePagedPoolNoZero = (void *)ExpAllocateTablePagedPoolNoZero();
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset(TablePagedPoolNoZero, 0, a2);
  return v4;
}
