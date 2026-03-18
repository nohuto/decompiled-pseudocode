/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x140359E10
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x14075ED28 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1409523F0 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140952ACC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140953354 (ExpCovResetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
