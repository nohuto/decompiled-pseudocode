/*
 * XREFs of PfSnAllocateEnablePrefetcherTimer @ 0x14099DDF0
 * Callers:
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407D01A8 (PfSnQueueEnablePrefetcherTimer.c)
 *     PfSnBeginBootPhase @ 0x14099DD04 (PfSnBeginBootPhase.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x1402D6620 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
