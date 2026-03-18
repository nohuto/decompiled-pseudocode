/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x140630D50
 * Callers:
 *     CcWriteBehindInternal @ 0x14022CE40 (CcWriteBehindInternal.c)
 *     CcZeroEndOfLastPage @ 0x1402818D4 (CcZeroEndOfLastPage.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x140630F50 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject, 0LL);
}
