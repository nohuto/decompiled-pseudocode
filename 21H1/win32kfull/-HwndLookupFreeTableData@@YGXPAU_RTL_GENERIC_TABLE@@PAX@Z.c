/*
 * XREFs of ?HwndLookupFreeTableData@@YGXPAU_RTL_GENERIC_TABLE@@PAX@Z @ 0xACF0E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall HwndLookupFreeTableData(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  Win32FreePool(Buffer);
}
