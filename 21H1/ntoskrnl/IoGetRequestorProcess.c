/*
 * XREFs of IoGetRequestorProcess @ 0x1402E4950
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x1402E2F20 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402F3524 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1402F3874 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForWriteAccess @ 0x14030BDA0 (FsRtlCheckLockForWriteAccess.c)
 *     IoGetRequestorProcessId @ 0x1403CB680 (IoGetRequestorProcessId.c)
 *     FsRtlProcessFileLock @ 0x1404EA530 (FsRtlProcessFileLock.c)
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
