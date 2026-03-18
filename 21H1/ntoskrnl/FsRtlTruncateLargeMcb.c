/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x1402F0520
 * Callers:
 *     FsRtlTruncateMcb @ 0x1404E9E60 (FsRtlTruncateMcb.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     FsRtlTruncateBaseMcb @ 0x1402F0560 (FsRtlTruncateBaseMcb.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
