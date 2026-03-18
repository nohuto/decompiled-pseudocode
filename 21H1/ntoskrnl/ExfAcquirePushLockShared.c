/*
 * XREFs of ExfAcquirePushLockShared @ 0x14035A040
 * Callers:
 *     ExpCovQueryInformation @ 0x140952ACC (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
