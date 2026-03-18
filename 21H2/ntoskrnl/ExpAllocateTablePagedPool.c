/*
 * XREFs of ExpAllocateTablePagedPool @ 0x1406A633C
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1406A62C8 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406A6C04 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1409F9244 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406A6F00 (ExpAllocateTablePagedPoolNoZero.c)
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
