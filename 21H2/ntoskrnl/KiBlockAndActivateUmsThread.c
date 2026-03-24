/*
 * XREFs of KiBlockAndActivateUmsThread @ 0x140525CC8
 * Callers:
 *     KiSwapToUmsThread @ 0x1408BD920 (KiSwapToUmsThread.c)
 * Callees:
 *     KeRemoveQueue @ 0x140202DD0 (KeRemoveQueue.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall KiBlockAndActivateUmsThread(__int64 a1, struct _KQUEUE *a2, __int64 a3, struct _KEVENT *a4)
{
  KeSetEvent(a4 + 2, 1, 1u);
  KiLeaveGuardedRegionUnsafe(a1);
  LOBYTE(a1) = KeGetCurrentPrcb()->NextThread != 0LL;
  KeRemoveQueue(a2, 0, 0LL);
  return a1;
}
