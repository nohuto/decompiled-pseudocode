/*
 * XREFs of PopInitializeSystemIdleDetection @ 0x140A6F2F4
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     KeSetCoalescableTimer @ 0x140236170 (KeSetCoalescableTimer.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopPulseSystemIdleEvent @ 0x14077A170 (PopPulseSystemIdleEvent.c)
 */

void PopInitializeSystemIdleDetection()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  PopPulseSystemIdleEvent(1u);
  PopIdleScanDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopCheckForIdleness;
  *(_QWORD *)&PopIdleScanTimer.Header.Lock = 8LL;
  PopIdleScanTimer.Header.WaitListHead.Blink = &PopIdleScanTimer.Header.WaitListHead;
  PopIdleScanTimer.Header.WaitListHead.Flink = &PopIdleScanTimer.Header.WaitListHead;
  PopIdleScanDpc.TargetInfoAsUlong = 275;
  PopIdleScanDpc.DeferredContext = 0LL;
  PopIdleScanDpc.DpcData = 0LL;
  PopIdleScanDpc.ProcessorHistory = 0LL;
  PopIdleScanTimer.DueTime.QuadPart = 0LL;
  PopIdleScanTimer.Period = 0;
  PopIdleScanTimer.Processor = 0;
  if ( PopIdleScanInterval )
    KeSetCoalescableTimer(
      &PopIdleScanTimer,
      (LARGE_INTEGER)(-10000000LL * (unsigned int)PopIdleScanInterval),
      1000 * PopIdleScanInterval,
      0x3E8u,
      &PopIdleScanDpc);
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
}
