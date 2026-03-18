/*
 * XREFs of FsRtlLookupLastLargeMcbEntry @ 0x140541250
 * Callers:
 *     FsRtlLookupLastMcbEntry @ 0x140541360 (FsRtlLookupLastMcbEntry.c)
 * Callees:
 *     FsRtlLookupLastBaseMcbEntry @ 0x140233220 (FsRtlLookupLastBaseMcbEntry.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntry(PLARGE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlLookupLastBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}
