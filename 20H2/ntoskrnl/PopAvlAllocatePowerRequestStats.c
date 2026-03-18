/*
 * XREFs of PopAvlAllocatePowerRequestStats @ 0x1406E3E90
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopAvlAllocatePowerRequestStats(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x54515750u);
}
