/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x14065DDF0
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x14065DDA4 (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406E1138 (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020096C (PspHardDereferenceSiloWorker.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     PspUnlockJob @ 0x140612970 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406129B4 (PspLockJobExclusive.c)
 *     PspSendReliableJobNotification @ 0x1406DB80C (PspSendReliableJobNotification.c)
 */

void __fastcall PspEvaluateAndNotifyEmptyJob(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  volatile LONG Lock; // eax

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive((__int64)Event, (__int64)CurrentThread);
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
  PspUnlockJob((__int64)Event, (__int64)CurrentThread);
}
