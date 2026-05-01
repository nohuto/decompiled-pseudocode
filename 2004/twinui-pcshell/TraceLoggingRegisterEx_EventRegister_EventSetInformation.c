/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180085A68
 * Callers:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     DllMain @ 0x180092348 (DllMain.c)
 *     TlgRegisterAggregateProviderEx @ 0x18013ED04 (TlgRegisterAggregateProviderEx.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18047AE00 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EventRegister_EventSetInformation(
        ULONGLONG *CallbackContext,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  GUID v4; // xmm0
  signed int v5; // eax
  unsigned int v6; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[6] = (ULONGLONG)a3;
  CallbackContext[5] = (ULONGLONG)a2;
  ProviderId = v4;
  v5 = EventRegister(&ProviderId, tlgEnableCallback, CallbackContext, CallbackContext + 4);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      return (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    EventSetInformation(CallbackContext[4], 2LL, CallbackContext[1], *(unsigned __int16 *)CallbackContext[1]);
  }
  return v6;
}
