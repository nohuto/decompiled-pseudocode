/*
 * XREFs of FsRtlNumberOfRunsInLargeMcb @ 0x1404EA150
 * Callers:
 *     FsRtlNumberOfRunsInMcb @ 0x1404EA190 (FsRtlNumberOfRunsInMcb.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInLargeMcb(PLARGE_MCB Mcb)
{
  ULONG PairCount; // ebx

  ExAcquireFastMutex(Mcb->GuardedMutex);
  PairCount = Mcb->BaseMcb.PairCount;
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return PairCount;
}
