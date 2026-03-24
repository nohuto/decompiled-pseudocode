/*
 * XREFs of FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1404EF140
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     FsRtlLookupLastBaseMcbEntryAndIndex @ 0x1402C2E40 (FsRtlLookupLastBaseMcbEntryAndIndex.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 */

BOOLEAN __stdcall FsRtlLookupLastLargeMcbEntryAndIndex(
        PLARGE_MCB OpaqueMcb,
        PLONGLONG LargeVbn,
        PLONGLONG LargeLbn,
        PULONG Index)
{
  ExAcquireFastMutex(OpaqueMcb->GuardedMutex);
  LOBYTE(Index) = FsRtlLookupLastBaseMcbEntryAndIndex(&OpaqueMcb->BaseMcb, LargeVbn, LargeLbn, Index);
  KeReleaseGuardedMutex(OpaqueMcb->GuardedMutex);
  return (unsigned __int8)Index;
}
