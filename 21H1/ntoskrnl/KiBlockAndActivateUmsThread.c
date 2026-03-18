/*
 * XREFs of KiBlockAndActivateUmsThread @ 0x1405201C8
 * Callers:
 *     KiSwapToUmsThread @ 0x1408B90E0 (KiSwapToUmsThread.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeRemoveQueue @ 0x14030A540 (KeRemoveQueue.c)
 */

char __fastcall KiBlockAndActivateUmsThread(__int64 a1, struct _KQUEUE *a2, __int64 a3, struct _KEVENT *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  KeSetEvent(a4 + 2, 1, 1u);
  KiLeaveGuardedRegionUnsafe(a1, v6, v7, v8);
  LOBYTE(a1) = KeGetCurrentPrcb()->NextThread != 0LL;
  KeRemoveQueue(a2, 0, 0LL);
  return a1;
}
