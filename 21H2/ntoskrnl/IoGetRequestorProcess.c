/*
 * XREFs of IoGetRequestorProcess @ 0x140363F10
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14021CFE4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14021D334 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForWriteAccess @ 0x14023B390 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlCheckLockForReadAccess @ 0x140363E80 (FsRtlCheckLockForReadAccess.c)
 *     IoGetRequestorProcessId @ 0x1403CFB40 (IoGetRequestorProcessId.c)
 *     IopDoesCompletionNeedsApc @ 0x1403F0EDC (IopDoesCompletionNeedsApc.c)
 *     FsRtlProcessFileLock @ 0x1404EFF10 (FsRtlProcessFileLock.c)
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
