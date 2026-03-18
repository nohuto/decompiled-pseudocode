/*
 * XREFs of FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1404E9FD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     FsRtlLookupLastBaseMcbEntryAndIndex @ 0x140351040 (FsRtlLookupLastBaseMcbEntryAndIndex.c)
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
