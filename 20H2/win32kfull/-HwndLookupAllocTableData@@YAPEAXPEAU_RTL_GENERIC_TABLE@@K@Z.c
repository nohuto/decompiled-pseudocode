/*
 * XREFs of ?HwndLookupAllocTableData@@YAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C011BB20
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 */

PVOID __fastcall HwndLookupAllocTableData(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  return PALLOCMEM2(ByteSize, 1282242372LL, 1);
}
