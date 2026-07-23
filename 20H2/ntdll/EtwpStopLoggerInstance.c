/*
 * XREFs of EtwpStopLoggerInstance @ 0x1800585C0
 * Callers:
 *     EtwpLogger @ 0x180055030 (EtwpLogger.c)
 *     EtwpStopUmLogger @ 0x180057F08 (EtwpStopUmLogger.c)
 * Callees:
 *     EtwpDisableTraceProviders @ 0x180045034 (EtwpDisableTraceProviders.c)
 *     RtlWakeAllConditionVariable @ 0x180055420 (RtlWakeAllConditionVariable.c)
 *     EtwpSendSessionNotification @ 0x180055EA4 (EtwpSendSessionNotification.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  void *v2; // rcx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 328), 0, 1) )
    return 4201LL;
  EtwpDisableTraceProviders(*(_DWORD *)(a1 + 20));
  v2 = *(void **)(a1 + 560);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 560) = 0LL;
  }
  _InterlockedExchange64((volatile __int64 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(a1 + 20)), 3LL);
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
  EtwpSendSessionNotification(a1, 2, *(_DWORD *)(a1 + 40));
  return 0LL;
}
