/*
 * XREFs of IoGetRequestorProcess @ 0x1403591C0
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14029FA64 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14029FDB4 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForWriteAccess @ 0x1402BCCE0 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlCheckLockForReadAccess @ 0x140359130 (FsRtlCheckLockForReadAccess.c)
 *     IoGetRequestorProcessId @ 0x1403CF9D0 (IoGetRequestorProcessId.c)
 *     IopDoesCompletionNeedsApc @ 0x1403F0FAC (IopDoesCompletionNeedsApc.c)
 *     FsRtlProcessFileLock @ 0x1404EFF90 (FsRtlProcessFileLock.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoGetRequestorProcess(PIRP Irp)
{
  PETHREAD Thread; // rdx
  CCHAR ApcEnvironment; // al

  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
    return (PEPROCESS)(Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL);
  if ( !Thread )
    return 0LL;
  ApcEnvironment = Irp->ApcEnvironment;
  if ( !ApcEnvironment )
    return Thread->Process;
  if ( ApcEnvironment == 1 )
    return Thread->ApcState.Process;
  else
    return 0LL;
}
