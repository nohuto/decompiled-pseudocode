/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x140707A40
 * Callers:
 *     CcWriteBehindInternal @ 0x14022DA70 (CcWriteBehindInternal.c)
 *     CcZeroEndOfLastPage @ 0x1403570FC (CcZeroEndOfLastPage.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x140707C40 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject, 0LL);
}
