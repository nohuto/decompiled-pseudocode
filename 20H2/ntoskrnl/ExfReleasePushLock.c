/*
 * XREFs of ExfReleasePushLock @ 0x140242A10
 * Callers:
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14076F628 (ExCovReadjustUnloadedModuleEntry.c)
 *     PdcTaskClientRequest @ 0x14091E1C0 (PdcTaskClientRequest.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x14095987C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140959F5C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x14095A7E4 (ExpCovResetInformation.c)
 *     ExpWorkerInitialization @ 0x140A6DA34 (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x140242AF0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive();
}
