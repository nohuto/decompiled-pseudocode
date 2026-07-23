/*
 * XREFs of _ZwAlertThreadByThreadId@4 @ 0x4B2F3080
 * Callers:
 *     _RtlpTpTimerQueueRundown@4 @ 0x4B2A8BFD (_RtlpTpTimerQueueRundown@4.c)
 *     _RtlpWaitOnAddressWakeEntireList@4 @ 0x4B2AC022 (_RtlpWaitOnAddressWakeEntireList@4.c)
 *     _RtlpRunOnceWakeAll@4 @ 0x4B2B11E4 (_RtlpRunOnceWakeAll@4.c)
 *     @RtlpWakeByAddress@12 @ 0x4B2DF2F6 (@RtlpWakeByAddress@12.c)
 *     _RtlpWaitOnCriticalSection@8 @ 0x4B2DF4A0 (_RtlpWaitOnCriticalSection@8.c)
 *     _RtlpWakeSRWLock@12 @ 0x4B2E3BAB (_RtlpWakeSRWLock@12.c)
 *     _RtlWakeAllConditionVariable@4 @ 0x4B2EA460 (_RtlWakeAllConditionVariable@4.c)
 *     _RtlpWakeConditionVariable@12 @ 0x4B2F1BC1 (_RtlpWakeConditionVariable@12.c)
 *     _TppIteWakeWaiters@4 @ 0x4B384822 (_TppIteWakeWaiters@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwAlertThreadByThreadId(HANDLE ThreadId)
{
  return Wow64SystemServiceCall();
}
