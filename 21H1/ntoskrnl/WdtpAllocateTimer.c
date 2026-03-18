/*
 * XREFs of WdtpAllocateTimer @ 0x14070B0A0
 * Callers:
 *     PnpWatchdogTimerAllocate @ 0x14070B010 (PnpWatchdogTimerAllocate.c)
 * Callees:
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     ExAllocateTimer @ 0x14035BCA0 (ExAllocateTimer.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
