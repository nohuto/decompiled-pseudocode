/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C037C6C8
 * Callers:
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x1C00C75A0 (--0InteractiveControlManager@@AEAA@XZ.c)
 *     EnableUserkTraceLogging @ 0x1C0122DE0 (EnableUserkTraceLogging.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C0126D38 (InitializeTelemetryAssertsKMByName.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C0127AA4 (--0InkProcessor@@AEAA@XZ.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C037C5E4 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        ULONGLONG *CallbackContext,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  GUID v4; // xmm0
  unsigned int v5; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[6] = (ULONGLONG)a3;
  CallbackContext[5] = (ULONGLONG)a2;
  ProviderId = v4;
  v5 = EtwRegister(&ProviderId, tlgEnableCallback, CallbackContext, CallbackContext + 4);
  if ( !v5 )
    EtwSetInformation(
      CallbackContext[4],
      EventProviderSetTraits,
      (PVOID)CallbackContext[1],
      *(unsigned __int16 *)CallbackContext[1]);
  return v5;
}
