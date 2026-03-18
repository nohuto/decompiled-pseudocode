/*
 * XREFs of ExfReleasePushLock @ 0x140359E10
 * Callers:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     DifExfReleasePushLockWrapper @ 0x140609FA0 (DifExfReleasePushLockWrapper.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1406EB634 (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x1409C56F0 (PdcTaskClientRequest.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A02E2C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140A0350C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140A03DA4 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x140B240EC (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x140359EF0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive(a1);
}
