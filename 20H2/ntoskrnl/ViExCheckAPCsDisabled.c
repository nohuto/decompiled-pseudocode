/*
 * XREFs of ViExCheckAPCsDisabled @ 0x1409E7DD4
 * Callers:
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x1409E7890 (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x1409E79A0 (VerifierExReleaseFastMutexUnsafe.c)
 *     VerifierExReleaseFastMutexUnsafeNoReboot @ 0x1409E7A00 (VerifierExReleaseFastMutexUnsafeNoReboot.c)
 *     VerifierExfAcquirePushLockExclusive @ 0x1409E7AC0 (VerifierExfAcquirePushLockExclusive.c)
 *     VerifierExfAcquirePushLockShared @ 0x1409E7B00 (VerifierExfAcquirePushLockShared.c)
 *     VerifierExfReleasePushLock @ 0x1409E7B40 (VerifierExfReleasePushLock.c)
 *     VerifierExfReleasePushLockShared @ 0x1409E7B80 (VerifierExfReleasePushLockShared.c)
 *     VerifierExfTryAcquirePushLockShared @ 0x1409E7BC0 (VerifierExfTryAcquirePushLockShared.c)
 *     VerifierExfTryToWakePushLock @ 0x1409E7C00 (VerifierExfTryToWakePushLock.c)
 *     ViExReleaseFastMutexCommon @ 0x1409E7E40 (ViExReleaseFastMutexCommon.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViExCheckAPCsDisabled(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1
    && (KeGetCurrentThread()->MiscFlags & 0x400) == 0
    && !KeGetCurrentThread()->WaitBlock[3].SpareLong )
  {
    VerifierBugCheckIfAppropriate(
      0xC4u,
      (unsigned int)BugCheckParameter1,
      CurrentIrql,
      KeGetCurrentThread()->CombinedApcDisable,
      a2);
  }
  return CurrentIrql;
}
