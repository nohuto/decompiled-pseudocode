/*
 * XREFs of CcSetFileSizes @ 0x1402D3570
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x14022E120 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
