/*
 * XREFs of IoGetRequestorProcess @ 0x1402FFE60
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1402F8214 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F9DC8 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForWriteAccess @ 0x1402FFAC0 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlCheckLockForReadAccess @ 0x1402FFCC0 (FsRtlCheckLockForReadAccess.c)
 *     IoGetRequestorProcessId @ 0x1403CF060 (IoGetRequestorProcessId.c)
 *     IopDoesCompletionNeedsApc @ 0x1403F0310 (IopDoesCompletionNeedsApc.c)
 *     FsRtlProcessFileLock @ 0x1404EE3F0 (FsRtlProcessFileLock.c)
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
