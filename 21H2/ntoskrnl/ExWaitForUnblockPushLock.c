/*
 * XREFs of ExWaitForUnblockPushLock @ 0x14063C490
 * Callers:
 *     <none>
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x140369540 (ExTimedWaitForUnblockPushLock.c)
 */

__int64 __fastcall ExWaitForUnblockPushLock(__int64 a1, char *a2)
{
  return ExTimedWaitForUnblockPushLock(a1, a2, 0LL);
}
