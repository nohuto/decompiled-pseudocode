/*
 * XREFs of SmStoreExistsForProcess @ 0x1402CCAB8
 * Callers:
 *     MmOutSwapWorkingSet @ 0x14030DD64 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140527238 (MiReleaseOutSwappedProcessCommit.c)
 *     PfpPrivSourceEnum @ 0x1406980C8 (PfpPrivSourceEnum.c)
 *     VmpPauseResumeNotify @ 0x14092C0F4 (VmpPauseResumeNotify.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1402CCAF0 (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 SmStoreExistsForProcess()
{
  return SmpKeyedStoreEntryGet((ULONG_PTR)&qword_140D24188) != 0;
}
