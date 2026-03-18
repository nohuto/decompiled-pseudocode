/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x1403A39DC
 * Callers:
 *     ExCreateCallback @ 0x14070B0F0 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x140766E00 (ExpDeleteCallback.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1);
}
