/*
 * XREFs of PiDcFreeGenericTableEntry @ 0x1408A6060
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDcFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x47706E50u);
}
