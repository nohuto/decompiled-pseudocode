/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x140219B30
 * Callers:
 *     FsRtlAddMcbEntry @ 0x1404EF140 (FsRtlAddMcbEntry.c)
 * Callees:
 *     FsRtlAddBaseMcbEntryEx @ 0x14021A0C0 (FsRtlAddBaseMcbEntryEx.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntryEx(&Mcb->BaseMcb, Vbn, Lbn, SectorCount) >= 0;
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return SectorCount;
}
