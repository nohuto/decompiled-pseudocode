/*
 * XREFs of ExfAcquirePushLockShared @ 0x1402F2EA0
 * Callers:
 *     ExpCovQueryInformation @ 0x1409577DC (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402F2EC0 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
