/*
 * XREFs of FsRtlResetLargeMcb @ 0x140541510
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

void __stdcall FsRtlResetLargeMcb(PLARGE_MCB Mcb, BOOLEAN SelfSynchronized)
{
  struct _FAST_MUTEX *GuardedMutex; // rcx

  if ( SelfSynchronized )
  {
    Mcb->BaseMcb.PairCount = 0;
  }
  else
  {
    ExAcquireFastMutex(Mcb->GuardedMutex);
    GuardedMutex = Mcb->GuardedMutex;
    Mcb->BaseMcb.PairCount = 0;
    KeReleaseGuardedMutex(GuardedMutex);
  }
}
