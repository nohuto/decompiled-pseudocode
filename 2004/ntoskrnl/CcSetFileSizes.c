/*
 * XREFs of CcSetFileSizes @ 0x140360490
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x1402C0280 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
