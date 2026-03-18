/*
 * XREFs of SmStoreExistsForProcess @ 0x140253B60
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1403394F4 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052AC08 (MiReleaseOutSwappedProcessCommit.c)
 *     PfpPrivSourceEnum @ 0x1406593DC (PfpPrivSourceEnum.c)
 *     VmpPauseResumeNotify @ 0x140931F24 (VmpPauseResumeNotify.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x140253B98 (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 SmStoreExistsForProcess()
{
  return SmpKeyedStoreEntryGet((ULONG_PTR)&qword_140D24188) != 0;
}
