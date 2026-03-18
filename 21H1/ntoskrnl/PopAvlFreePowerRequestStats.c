/*
 * XREFs of PopAvlFreePowerRequestStats @ 0x1406EDBC0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PopAvlFreePowerRequestStats(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x54515750u);
}
