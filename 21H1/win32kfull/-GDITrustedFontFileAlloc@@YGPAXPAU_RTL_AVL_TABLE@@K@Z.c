/*
 * XREFs of ?GDITrustedFontFileAlloc@@YGPAXPAU_RTL_AVL_TABLE@@K@Z @ 0x1EB710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall GDITrustedFontFileAlloc(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x66667447u);
}
