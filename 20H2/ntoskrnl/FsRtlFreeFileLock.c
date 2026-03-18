/*
 * XREFs of FsRtlFreeFileLock @ 0x14032FBE0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x14020A4F0 (ExFreeToPagedLookasideList.c)
 *     FsRtlUninitializeFileLock @ 0x14032FC10 (FsRtlUninitializeFileLock.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlFileLockLookasideList, FileLock);
}
