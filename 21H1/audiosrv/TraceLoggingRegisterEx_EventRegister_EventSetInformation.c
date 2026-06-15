/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800B4FE0
 * Callers:
 *     _dynamic_initializer_for__g_SarmTelemetryProviderRegistration__ @ 0x180001A90 (_dynamic_initializer_for__g_SarmTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_EndpointCharacteristicsTelemetryProviderRegistration__ @ 0x180001AD0 (_dynamic_initializer_for__g_EndpointCharacteristicsTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__ @ 0x180001B60 (_dynamic_initializer_for__g_SpatialAudioTraceLoggingProviderRegistration__.c)
 *     _dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x180001B80 (_dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__ @ 0x180001C70 (_dynamic_initializer_for__g_AudioLicenseTraceLoggingProviderRegistration__.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18013DA68 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
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
