/*
 * XREFs of ExfAcquirePushLockShared @ 0x1402743A0
 * Callers:
 *     ExpCovQueryInformation @ 0x14095419C (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402743C0 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
