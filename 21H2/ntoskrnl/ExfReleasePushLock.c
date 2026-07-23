/*
 * XREFs of ExfReleasePushLock @ 0x1402FC190
 * Callers:
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140773800 (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x14091BB00 (PdcTaskClientRequest.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1409572CC (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1409579AC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140958234 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x140A6BE74 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1402FC270 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive(a1);
}
