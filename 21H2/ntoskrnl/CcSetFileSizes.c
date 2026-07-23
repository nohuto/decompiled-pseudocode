/*
 * XREFs of CcSetFileSizes @ 0x1402518A0
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x1402D2970 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
