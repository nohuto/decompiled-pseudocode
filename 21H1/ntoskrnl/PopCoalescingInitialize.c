/*
 * XREFs of PopCoalescingInitialize @ 0x140A4704C
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140787CBC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PoRegisterCoalescingCallback @ 0x140787FE0 (PoRegisterCoalescingCallback.c)
 */

__int64 PopCoalescingInitialize()
{
  __int64 result; // rax

  PopCoalescingState &= 0xF0u;
  PopCoalescingCallbackWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopCoalescingCallbackWorker;
  PopCoalescingCallbackWorkItem.Parameter = 0LL;
  PopCoalescingCallbackWorkItem.List.Flink = 0LL;
  result = PoRegisterCoalescingCallback(
             (unsigned __int64)xHalTimerWatchdogStop,
             0,
             (struct _EX_RUNDOWN_REF **)&PopCoalescingRegistration,
             0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&PopCoalescingTimer.Header.Lock = 8LL;
    PopCoalescingTimer.Header.WaitListHead.Blink = &PopCoalescingTimer.Header.WaitListHead;
    PopCoalescingTimer.Header.WaitListHead.Flink = &PopCoalescingTimer.Header.WaitListHead;
    qword_140C24498 = (__int64)PopCoalesingTimerDpcCallback;
    PopCoalescingTimer.DueTime.QuadPart = 0LL;
    PopCoalescingTimer.Period = 0;
    PopCoalescingTimer.Processor = 0;
    PopCoalescingTimerDpc = 275;
    qword_140C244A0 = 0LL;
    qword_140C244B8 = 0LL;
    qword_140C24490 = 0LL;
    return PopUpdateDiskIdleTimeoutSetting();
  }
  return result;
}
