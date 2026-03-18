/*
 * XREFs of ExfReleasePushLock @ 0x1402748B0
 * Callers:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140761018 (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x140918590 (PdcTaskClientRequest.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140953ABC (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14095419C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140954A24 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x140A66764 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x140274990 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive();
}
