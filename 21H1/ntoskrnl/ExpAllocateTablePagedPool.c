/*
 * XREFs of ExpAllocateTablePagedPool @ 0x1406E2798
 * Callers:
 *     ExpAllocateHandleTableEntrySlow @ 0x140671724 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateMidLevelTable @ 0x1406E2724 (ExpAllocateMidLevelTable.c)
 *     ExpSetHandleExtraInfo @ 0x140948248 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1406719E4 (ExpAllocateTablePagedPoolNoZero.c)
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
