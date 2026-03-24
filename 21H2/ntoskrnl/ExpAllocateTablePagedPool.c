/*
 * XREFs of ExpAllocateTablePagedPool @ 0x14062B408
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x14062B0A8 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x14062B444 (ExpAllocateMidLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x14094CB78 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x14062B368 (ExpAllocateTablePagedPoolNoZero.c)
 */

PVOID __fastcall ExpAllocateTablePagedPool(__int64 a1, SIZE_T a2)
{
  PVOID TablePagedPoolNoZero; // rax
  PVOID v4; // rbx

  TablePagedPoolNoZero = ExpAllocateTablePagedPoolNoZero(a1, a2);
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset(TablePagedPoolNoZero, 0, a2);
  return v4;
}
