/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x140219BA0
 * Callers:
 *     FsRtlTruncateMcb @ 0x1404EF840 (FsRtlTruncateMcb.c)
 * Callees:
 *     FsRtlTruncateBaseMcb @ 0x140219BE0 (FsRtlTruncateBaseMcb.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
