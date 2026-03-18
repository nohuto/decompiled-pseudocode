/*
 * XREFs of PopPowerRequestFree @ 0x1407108A0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PopPowerRequestFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x6C564150u);
}
