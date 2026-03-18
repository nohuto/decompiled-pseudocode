/*
 * XREFs of _TraceLoggingRegisterEx_EtwRegister_EtwSetInformation@12 @ 0x27A6CA
 * Callers:
 *     ??0InteractiveControlManager@@AAE@XZ @ 0xD6520 (--0InteractiveControlManager@@AAE@XZ.c)
 *     _EnableUserkTraceLogging@0 @ 0xE7544 (_EnableUserkTraceLogging@0.c)
 *     ??0InkProcessor@@AAE@XZ @ 0xE8C70 (--0InkProcessor@@AAE@XZ.c)
 *     _InitializeTelemetryAssertsKMByName@4 @ 0xEA95C (_InitializeTelemetryAssertsKMByName@4.c)
 *     _TlgRegisterAggregateProviderEx@16 @ 0x27A62E (_TlgRegisterAggregateProviderEx@16.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(char *CallbackContext, int a2, int a3)
{
  unsigned int *v4; // esi
  REGHANDLE *v5; // esi
  NTSTATUS v6; // edi
  GUID ProviderId; // [esp+Ch] [ebp-14h] BYREF

  v4 = (unsigned int *)(*((_DWORD *)CallbackContext + 1) - 16);
  ProviderId.Data1 = *v4++;
  *(_DWORD *)&ProviderId.Data2 = *v4++;
  *(_DWORD *)ProviderId.Data4 = *v4;
  *(_DWORD *)&ProviderId.Data4[4] = v4[1];
  v5 = (REGHANDLE *)(CallbackContext + 24);
  *((_DWORD *)CallbackContext + 9) = a3;
  *((_DWORD *)CallbackContext + 8) = a2;
  v6 = EtwRegister(&ProviderId, _tlgEnableCallback, CallbackContext, (PREGHANDLE)CallbackContext + 3);
  if ( !v6 )
    EtwSetInformation(
      *v5,
      EventProviderSetTraits,
      *((PVOID *)CallbackContext + 1),
      **((unsigned __int16 **)CallbackContext + 1));
  return v6;
}
