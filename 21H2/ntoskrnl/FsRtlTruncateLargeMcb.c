/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x14029D060
 * Callers:
 *     FsRtlTruncateMcb @ 0x1404EF600 (FsRtlTruncateMcb.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     FsRtlTruncateBaseMcb @ 0x14029D0A0 (FsRtlTruncateBaseMcb.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
