/*
 * XREFs of PfSnAllocateEnablePrefetcherTimer @ 0x140997DB0
 * Callers:
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407C19A8 (PfSnQueueEnablePrefetcherTimer.c)
 *     PfSnBeginBootPhase @ 0x140997CC4 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F9130 (KeInitializeTimerEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

struct _KDPC *__fastcall PfSnAllocateEnablePrefetcherTimer(ULONG a1)
{
  struct _KTIMER *PoolWithTag; // rax
  struct _KDPC *v3; // rbx

  PoolWithTag = (struct _KTIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x77506343u);
  v3 = (struct _KDPC *)PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeTimerEx(PoolWithTag, NotificationTimer);
    KeInitializeDpc(v3 + 1, (PKDEFERRED_ROUTINE)PfSnEnablePrefetcherTimerRoutine, v3);
    v3[2].TargetInfoAsUlong = a1;
  }
  return v3;
}
