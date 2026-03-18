/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1405FBD10
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140228884 (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x1402BFC70 (CcWriteBehindInternal.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405FBF10 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject, 0LL);
}
