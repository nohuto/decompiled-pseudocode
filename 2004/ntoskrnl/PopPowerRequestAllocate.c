/*
 * XREFs of PopPowerRequestAllocate @ 0x140710A50
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopPowerRequestAllocate(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x6C564150u);
}
