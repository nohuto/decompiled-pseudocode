/*
 * XREFs of FsRtlAddLargeMcbEntry @ 0x1402F04B0
 * Callers:
 *     FsRtlAddMcbEntry @ 0x1404E9760 (FsRtlAddMcbEntry.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1402F0A40 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(SectorCount) = FsRtlAddBaseMcbEntryEx(&Mcb->BaseMcb, Vbn, Lbn, SectorCount) >= 0;
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return SectorCount;
}
