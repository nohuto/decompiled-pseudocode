/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x14001B67C
 * Callers:
 *     _dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x140001250 (_dynamic_initializer_for__g_AudioEngineUtilTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__ @ 0x1400012C0 (_dynamic_initializer_for__g_CrossProcessTelemetryProviderRegistration__.c)
 *     _dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__ @ 0x1400012E0 (_dynamic_initializer_for__g_SpatialCrossProcessProviderRegistration__.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
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
