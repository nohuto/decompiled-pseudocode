/*
 * XREFs of ?HwndLookupAllocTableData@@YGPAXPAU_RTL_GENERIC_TABLE@@K@Z @ 0xAC000
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

PVOID __stdcall HwndLookupAllocTableData(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  return PALLOCMEM2(ByteSize, 1282242372, 1);
}
