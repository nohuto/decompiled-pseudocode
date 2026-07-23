/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x1403A67BC
 * Callers:
 *     ExCreateCallback @ 0x14061C450 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x140779FA0 (ExpDeleteCallback.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 */

char __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
