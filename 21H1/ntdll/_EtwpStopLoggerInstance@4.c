/*
 * XREFs of _EtwpStopLoggerInstance@4 @ 0x4B2EDB7A
 * Callers:
 *     _EtwpStopUmLogger@16 @ 0x4B2ED853 (_EtwpStopUmLogger@16.c)
 *     _EtwpLogger@4 @ 0x4B2F2270 (_EtwpLogger@4.c)
 * Callees:
 *     _RtlWakeAllConditionVariable@4 @ 0x4B2EA460 (_RtlWakeAllConditionVariable@4.c)
 *     _EtwpDisableTraceProviders@4 @ 0x4B2EDBE4 (_EtwpDisableTraceProviders@4.c)
 *     _EtwpSendSessionNotification@12 @ 0x4B2F0314 (_EtwpSendSessionNotification@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

int __thiscall EtwpStopLoggerInstance(int this)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(this + 216), 0, 1) )
    return 4201;
  EtwpDisableTraceProviders(*(_DWORD *)(this + 20));
  if ( *(_DWORD *)(this + 380) )
  {
    NtClose(*(HANDLE *)(this + 380));
    *(_DWORD *)(this + 380) = 0;
  }
  _InterlockedExchange((volatile __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(this + 20)), 3);
  RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(this + 68));
  EtwpSendSessionNotification(*(_DWORD *)(this + 32));
  return 0;
}
