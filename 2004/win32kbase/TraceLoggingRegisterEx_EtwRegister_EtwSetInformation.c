/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C027A744
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0035278 (-CitpInitialize@@YAJPEBG@Z.c)
 *     CoreMsgInitialize @ 0x1C0047E8C (CoreMsgInitialize.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C005AAB4 (InitializeTelemetryAssertsKMByName.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C027A650 (TlgRegisterAggregateProviderEx.c)
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
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
