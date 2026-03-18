/*
 * XREFs of FsRtlRemoveLargeMcbEntry @ 0x140541470
 * Callers:
 *     FsRtlRemoveMcbEntry @ 0x1405414F0 (FsRtlRemoveMcbEntry.c)
 * Callees:
 *     FsRtlRemoveBaseMcbEntry @ 0x14022BDA0 (FsRtlRemoveBaseMcbEntry.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
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
