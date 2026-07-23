/*
 * XREFs of KiBlockAndActivateUmsThread @ 0x140525F08
 * Callers:
 *     KiSwapToUmsThread @ 0x1408BDA80 (KiSwapToUmsThread.c)
 * Callees:
 *     KeRemoveQueue @ 0x1402A7710 (KeRemoveQueue.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall KiBlockAndActivateUmsThread(__int64 a1, struct _KQUEUE *a2, __int64 a3, struct _KEVENT *a4)
{
  KeSetEvent(a4 + 2, 1, 1u);
  KiLeaveGuardedRegionUnsafe(a1);
  LOBYTE(a1) = KeGetCurrentPrcb()->NextThread != 0LL;
  KeRemoveQueue(a2, 0, 0LL);
  return a1;
}
