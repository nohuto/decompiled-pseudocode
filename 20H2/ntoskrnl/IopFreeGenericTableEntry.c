/*
 * XREFs of IopFreeGenericTableEntry @ 0x140894070
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeGenericTableEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x65546F49u);
}
