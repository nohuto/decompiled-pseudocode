/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1406FE2E0
 * Callers:
 *     CcZeroEndOfLastPage @ 0x14028866C (CcZeroEndOfLastPage.c)
 *     CcWriteBehindInternal @ 0x140288760 (CcWriteBehindInternal.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x1406FE4F0 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject, 0, 0LL);
}
