/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x1403A666C
 * Callers:
 *     ExCreateCallback @ 0x1406BD240 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x140779DE0 (ExpDeleteCallback.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 */

char __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
