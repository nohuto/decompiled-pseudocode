/*
 * XREFs of WdtpAllocateTimer @ 0x1406F4D30
 * Callers:
 *     PnpWatchdogTimerAllocate @ 0x1406F4CA0 (PnpWatchdogTimerAllocate.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     ExAllocateTimer @ 0x14033CA60 (ExAllocateTimer.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

char *WdtpAllocateTimer()
{
  char *PoolWithTag; // rax
  char *v1; // rbx
  __int64 Timer; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x54645750u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag + 1, 0, 0x7FuLL);
    *v1 = 119;
    Timer = ExAllocateTimer((__int64)WdtpTimerCallback, (__int64)v1, 0);
    *((_QWORD *)v1 + 7) = Timer;
    if ( Timer )
    {
      KeInitializeEvent((PRKEVENT)(v1 + 104), NotificationEvent, 0);
    }
    else
    {
      ExFreePoolWithTag(v1, 0x54645750u);
      return 0LL;
    }
  }
  return v1;
}
