/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x14022BC70
 * Callers:
 *     FsRtlTruncateMcb @ 0x140541740 (FsRtlTruncateMcb.c)
 * Callees:
 *     FsRtlTruncateBaseMcb @ 0x14022BCB0 (FsRtlTruncateBaseMcb.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
