/*
 * XREFs of PiDcFreeGenericTableEntry @ 0x14089F210
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PiDcFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x47706E50u);
}
