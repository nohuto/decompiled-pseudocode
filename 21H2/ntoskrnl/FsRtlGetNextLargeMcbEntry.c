/*
 * XREFs of FsRtlGetNextLargeMcbEntry @ 0x1404EF160
 * Callers:
 *     FsRtlGetNextMcbEntry @ 0x1404EF1D0 (FsRtlGetNextMcbEntry.c)
 * Callees:
 *     FsRtlGetNextBaseMcbEntry @ 0x14021EF80 (FsRtlGetNextBaseMcbEntry.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 */

BOOLEAN __stdcall FsRtlGetNextLargeMcbEntry(
        PLARGE_MCB Mcb,
        ULONG RunIndex,
        PLONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlGetNextBaseMcbEntry(&Mcb->BaseMcb, RunIndex, Vbn, Lbn, SectorCount);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}
