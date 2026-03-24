/*
 * XREFs of ExfReleasePushLock @ 0x1402F1440
 * Callers:
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140773640 (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x14091B9A0 (PdcTaskClientRequest.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1409570FC (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1409577DC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140958064 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x140A6AE74 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1402F1520 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive(a1);
}
