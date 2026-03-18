/*
 * XREFs of CcSetFileSizes @ 0x140322880
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x14022D450 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
