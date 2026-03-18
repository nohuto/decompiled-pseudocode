/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x140680270
 * Callers:
 *     CcWriteBehindInternal @ 0x140295920 (CcWriteBehindInternal.c)
 *     CcZeroEndOfLastPage @ 0x14029F7A8 (CcZeroEndOfLastPage.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x140680470 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject, 0LL);
}
