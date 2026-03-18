/*
 * XREFs of ExfAcquirePushLockExclusive @ 0x140241BF0
 * Callers:
 *     ExCovReadjustUnloadedModuleEntry @ 0x14076F628 (ExCovReadjustUnloadedModuleEntry.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x14095987C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140959F5C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x14095A7E4 (ExpCovResetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall ExfAcquirePushLockExclusive(__int64 a1)
{
  return ExfAcquirePushLockExclusiveEx(a1, 0LL, a1);
}
