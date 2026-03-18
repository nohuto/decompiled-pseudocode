/*
 * XREFs of ExpAllocateTablePagedPool @ 0x1406F4B0C
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1406F4A98 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x1406F56D4 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x14094F3A8 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406F5994 (ExpAllocateTablePagedPoolNoZero.c)
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
