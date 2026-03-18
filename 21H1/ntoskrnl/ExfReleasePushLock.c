/*
 * XREFs of ExfReleasePushLock @ 0x14035A550
 * Callers:
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14075ED28 (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x140917320 (PdcTaskClientRequest.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1409523F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140952ACC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140953354 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x140A66D84 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x14035A630 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive(a1);
}
