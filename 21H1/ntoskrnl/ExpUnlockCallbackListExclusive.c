/*
 * XREFs of ExpUnlockCallbackListExclusive @ 0x1403A327C
 * Callers:
 *     ExCreateCallback @ 0x1406E71C0 (ExCreateCallback.c)
 *     ExpDeleteCallback @ 0x140765440 (ExpDeleteCallback.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ExpUnlockCallbackListExclusive(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  ExReleasePushLockEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
  return KiLeaveGuardedRegionUnsafe(a1, v2, v3, v4);
}
