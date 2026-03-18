/*
 * XREFs of IoGetRequestorProcess @ 0x1402D7C00
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x1402D61D0 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140330124 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140330474 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForWriteAccess @ 0x140349C60 (FsRtlCheckLockForWriteAccess.c)
 *     IoGetRequestorProcessId @ 0x1403CC440 (IoGetRequestorProcessId.c)
 *     FsRtlProcessFileLock @ 0x1404EAB60 (FsRtlProcessFileLock.c)
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
