/*
 * XREFs of FsRtlLookupLastLargeMcbEntry @ 0x1404EF300
 * Callers:
 *     FsRtlLookupLastMcbEntry @ 0x1404EF410 (FsRtlLookupLastMcbEntry.c)
 * Callees:
 *     FsRtlLookupLastBaseMcbEntry @ 0x140224D80 (FsRtlLookupLastBaseMcbEntry.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntry(PLARGE_MCB Mcb, PLONGLONG Vbn, PLONGLONG Lbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  LOBYTE(Lbn) = FsRtlLookupLastBaseMcbEntry(&Mcb->BaseMcb, Vbn, Lbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return (unsigned __int8)Lbn;
}
