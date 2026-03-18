/*
 * XREFs of PiPnpRtlOperationFreeGenericTableEntry @ 0x1406D7500
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlOperationFreeGenericTableEntry(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x41706E50u);
}
