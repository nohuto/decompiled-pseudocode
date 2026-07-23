/*
 * XREFs of FsRtlRemoveLargeMcbEntry @ 0x1404EF560
 * Callers:
 *     FsRtlRemoveMcbEntry @ 0x1404EF5E0 (FsRtlRemoveMcbEntry.c)
 * Callees:
 *     FsRtlRemoveBaseMcbEntry @ 0x140219CF0 (FsRtlRemoveBaseMcbEntry.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 */

void __stdcall FsRtlRemoveLargeMcbEntry(PLARGE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  unsigned int v3; // edi
  unsigned int v4; // esi

  v3 = SectorCount;
  v4 = Vbn;
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlRemoveBaseMcbEntry(&Mcb->BaseMcb, v4, v3);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
