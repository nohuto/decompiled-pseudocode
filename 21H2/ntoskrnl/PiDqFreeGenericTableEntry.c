/*
 * XREFs of PiDqFreeGenericTableEntry @ 0x140621590
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x58706E50u);
}
