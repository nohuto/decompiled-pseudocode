/*
 * XREFs of ?GDINetworkedFontFileNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C02888C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall GDINetworkedFontFileNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x66666E47u);
}
