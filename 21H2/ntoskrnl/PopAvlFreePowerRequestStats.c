/*
 * XREFs of PopAvlFreePowerRequestStats @ 0x140622910
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PopAvlFreePowerRequestStats(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x54515750u);
}
