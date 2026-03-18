/*
 * XREFs of ?GDINetworkedFontFileNodeAlloc@@YGPAXPAU_RTL_AVL_TABLE@@K@Z @ 0x1E87B3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall GDINetworkedFontFileNodeAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x66666E47u);
}
