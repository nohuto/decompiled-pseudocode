/*
 * XREFs of ExpAllocateTablePagedPool @ 0x140616B40
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x140616ACC (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140695888 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x14094CD48 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140695B48 (ExpAllocateTablePagedPoolNoZero.c)
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
