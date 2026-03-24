/*
 * XREFs of FsRtlNumberOfRunsInLargeMcb @ 0x1404EF2C0
 * Callers:
 *     FsRtlNumberOfRunsInMcb @ 0x1404EF300 (FsRtlNumberOfRunsInMcb.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInLargeMcb(PLARGE_MCB Mcb)
{
  ULONG PairCount; // ebx

  ExAcquireFastMutex(Mcb->GuardedMutex);
  PairCount = Mcb->BaseMcb.PairCount;
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return PairCount;
}
