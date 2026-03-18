/*
 * XREFs of CcSetFileSizes @ 0x140331070
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x1402955E0 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
