/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x140274170
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x140761018 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140953ABC (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x14095419C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140954A24 (ExpCovResetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
