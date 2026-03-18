/*
 * XREFs of PfSnAllocateEnablePrefetcherTimer @ 0x140A54598
 * Callers:
 *     PfSnQueueEnablePrefetcherTimer @ 0x14086448C (PfSnQueueEnablePrefetcherTimer.c)
 *     PfSnBeginBootPhase @ 0x140A544B0 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

struct _KDPC *__fastcall PfSnAllocateEnablePrefetcherTimer(ULONG a1)
{
  struct _KTIMER *Pool2; // rax
  struct _KDPC *v3; // rbx

  Pool2 = (struct _KTIMER *)ExAllocatePool2(64LL, 136LL, 2001756995LL);
  v3 = (struct _KDPC *)Pool2;
  if ( Pool2 )
  {
    KeInitializeTimerEx(Pool2, NotificationTimer);
    KeInitializeDpc(v3 + 1, (PKDEFERRED_ROUTINE)PfSnEnablePrefetcherTimerRoutine, v3);
    v3[2].TargetInfoAsUlong = a1;
  }
  return v3;
}
