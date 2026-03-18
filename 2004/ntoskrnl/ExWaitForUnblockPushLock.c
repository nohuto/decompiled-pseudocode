/*
 * XREFs of ExWaitForUnblockPushLock @ 0x1405AEAD0
 * Callers:
 *     <none>
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x140325660 (ExTimedWaitForUnblockPushLock.c)
 */

__int64 __fastcall ExWaitForUnblockPushLock(__int64 a1, char *a2)
{
  return ExTimedWaitForUnblockPushLock(a1, a2, 0LL);
}
