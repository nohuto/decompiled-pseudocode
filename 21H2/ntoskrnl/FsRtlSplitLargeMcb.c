/*
 * XREFs of FsRtlSplitLargeMcb @ 0x1405416C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     FsRtlSplitBaseMcb @ 0x140541550 (FsRtlSplitBaseMcb.c)
 */

BOOLEAN __stdcall FsRtlSplitLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Amount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Amount) = FsRtlSplitBaseMcb(&Mcb->BaseMcb, Vbn, Amount);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return Amount;
}
