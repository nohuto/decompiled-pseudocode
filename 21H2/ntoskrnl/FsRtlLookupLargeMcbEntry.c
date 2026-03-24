/*
 * XREFs of FsRtlLookupLargeMcbEntry @ 0x1404EF010
 * Callers:
 *     FsRtlLookupMcbEntry @ 0x1404EF230 (FsRtlLookupMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     FsRtlLookupBaseMcbEntry @ 0x140291520 (FsRtlLookupBaseMcbEntry.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 */

BOOLEAN __stdcall FsRtlLookupLargeMcbEntry(
        PLARGE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCountFromLbn) = FsRtlLookupBaseMcbEntry(
                                 &Mcb->BaseMcb,
                                 Vbn,
                                 Lbn,
                                 SectorCountFromLbn,
                                 StartingLbn,
                                 SectorCountFromStartingLbn,
                                 Index);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)SectorCountFromLbn;
}
