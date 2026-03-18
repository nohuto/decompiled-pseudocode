/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x1403A5DAC
 * Callers:
 *     ExCreateCallback @ 0x1406DD3F0 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x140775E30 (ExpDeleteCallback.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
