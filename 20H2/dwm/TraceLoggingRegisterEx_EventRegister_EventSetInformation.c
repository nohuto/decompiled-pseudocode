/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x140009904
 * Callers:
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x14000945C (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14000A088 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140003190 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EventRegister_EventSetInformation(ULONGLONG *CallbackContext)
{
  GUID v2; // xmm0
  signed int v3; // eax
  unsigned int v4; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[5] = 0LL;
  CallbackContext[6] = 0LL;
  ProviderId = v2;
  v3 = EventRegister(&ProviderId, tlgEnableCallback, CallbackContext, CallbackContext + 4);
  v4 = v3;
  if ( v3 )
  {
    if ( v3 > 0 )
      return (unsigned __int16)v3 | 0x80070000;
  }
  else
  {
    EventSetInformation(CallbackContext[4], 2LL, CallbackContext[1], *(unsigned __int16 *)CallbackContext[1]);
  }
  return v4;
}
