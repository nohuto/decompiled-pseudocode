/*
 * XREFs of FsRtlResetLargeMcb @ 0x1404EA250
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
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
