/*
 * XREFs of IoGetRequestorProcess @ 0x14021DC00
 * Callers:
 *     FsRtlProcessFileLock @ 0x14021D0B0 (FsRtlProcessFileLock.c)
 *     FsRtlCheckLockForWriteAccess @ 0x14021D1E0 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14021D404 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlCheckLockForReadAccess @ 0x14021DA60 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14021F280 (FsRtlPrivateCheckWaitingLocks.c)
 *     IopDoesCompletionNeedsApc @ 0x140417964 (IopDoesCompletionNeedsApc.c)
 *     IopIoRingCompleteIrp @ 0x140559FA8 (IopIoRingCompleteIrp.c)
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
