/*
 * XREFs of ExfAcquirePushLockShared @ 0x140241E20
 * Callers:
 *     ExpCovQueryInformation @ 0x140959F5C (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140241E40 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
