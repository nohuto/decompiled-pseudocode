/*
 * XREFs of ?GDITrustedFontFileFree@@YGXPAU_RTL_AVL_TABLE@@PAX@Z @ 0x1EB752
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall GDITrustedFontFileFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x66667447u);
}
