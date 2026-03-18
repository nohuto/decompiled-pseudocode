/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x14062F0C4
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x14062F078 (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406D7168 (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020096C (PspHardDereferenceSiloWorker.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     PspUnlockJob @ 0x140665CB0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140665CF4 (PspLockJobExclusive.c)
 *     PspSendReliableJobNotification @ 0x1406A085C (PspSendReliableJobNotification.c)
 */

__int64 __fastcall PspEvaluateAndNotifyEmptyJob(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  volatile LONG Lock; // eax

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive(Event, CurrentThread);
  Lock = Event[51].Header.Lock;
  if ( a2 )
    Event[51].Header.LockNV = --Lock;
  if ( !Lock )
  {
    if ( _interlockedbittestandreset(&Event[55].Header.Lock, 7u) )
      KeSetEvent(Event, 0, 0);
    if ( !_interlockedbittestandset(&Event[55].Header.Lock, 0x15u) )
    {
      if ( a3 && *(_QWORD *)&Event[19].Header.Lock && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 0x10) != 0 )
        PspSendReliableJobNotification(Event);
      if ( ((__int64)Event[10].Header.WaitListHead.Blink & 0x400000) != 0
        && !_interlockedbittestandset(&Event[55].Header.Lock, 0x1Du)
        && (Event[55].Header.LockNV & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker((__int64)Event);
      }
    }
  }
  return PspUnlockJob(Event, CurrentThread);
}
