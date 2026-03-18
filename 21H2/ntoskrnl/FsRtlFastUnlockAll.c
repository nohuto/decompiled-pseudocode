/*
 * XREFs of FsRtlFastUnlockAll @ 0x14021D3E0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlPrivateFastUnlockAll @ 0x14021D404 (FsRtlPrivateFastUnlockAll.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockAll(PFILE_LOCK FileLock, PFILE_OBJECT FileObject, PEPROCESS ProcessId, PVOID Context)
{
  return FsRtlPrivateFastUnlockAll((_DWORD)FileLock, (_DWORD)FileObject, (_DWORD)ProcessId, 0, 0, (__int64)Context);
}
