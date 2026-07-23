/*
 * XREFs of PopAvlFreePowerRequestStats @ 0x1406E4090
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PopAvlFreePowerRequestStats(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x54515750u);
}
