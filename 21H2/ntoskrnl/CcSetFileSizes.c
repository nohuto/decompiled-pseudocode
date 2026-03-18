/*
 * XREFs of CcSetFileSizes @ 0x14025BDB0
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
