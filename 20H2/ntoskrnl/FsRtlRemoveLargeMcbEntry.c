/*
 * XREFs of FsRtlRemoveLargeMcbEntry @ 0x1404EDA40
 * Callers:
 *     FsRtlRemoveMcbEntry @ 0x1404EDAC0 (FsRtlRemoveMcbEntry.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     FsRtlRemoveBaseMcbEntry @ 0x140301FF0 (FsRtlRemoveBaseMcbEntry.c)
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
