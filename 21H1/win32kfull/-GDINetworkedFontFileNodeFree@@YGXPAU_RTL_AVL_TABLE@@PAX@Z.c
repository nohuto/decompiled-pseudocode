/*
 * XREFs of ?GDINetworkedFontFileNodeFree@@YGXPAU_RTL_AVL_TABLE@@PAX@Z @ 0x1E87FD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall GDINetworkedFontFileNodeFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x66666E47u);
}
