/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x1402F2C70
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x140773640 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1409570FC (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x1409577DC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140958064 (ExpCovResetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
