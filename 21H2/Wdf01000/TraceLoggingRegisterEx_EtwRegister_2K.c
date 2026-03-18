/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_2K @ 0x1C00BDAE0
 * Callers:
 *     RegisterTelemetryProvider @ 0x1C002F140 (RegisterTelemetryProvider.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     TraceLoggingSetInformation_2K @ 0x1C00BDB78 (TraceLoggingSetInformation_2K.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_2K(
        const _tlgProvider_t *hProvider,
        void (__fastcall *pEnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *),
        void *pCallbackContext)
{
  _EVENT_INFO_CLASS v3; // edx
  const _tlgProvider_t *v4; // rcx
  unsigned int v5; // ebx
  _GUID providerId; // [rsp+20h] [rbp-28h] BYREF

  providerId = (_GUID)*((_OWORD *)Tlgg_TelemetryProviderProv.ProviderMetadataPtr - 1);
  if ( Tlgg_TelemetryProviderProv.RegHandle )
    __fastfail(5u);
  *(_OWORD *)&Tlgg_TelemetryProviderProv.EnableCallback = 0LL;
  v5 = EtwRegister(
         &providerId,
         (PETWENABLECALLBACK)tlgEnableCallback,
         &Tlgg_TelemetryProviderProv,
         &Tlgg_TelemetryProviderProv.RegHandle);
  if ( !v5 )
    TraceLoggingSetInformation_2K(
      v4,
      v3,
      (void *)Tlgg_TelemetryProviderProv.ProviderMetadataPtr,
      *Tlgg_TelemetryProviderProv.ProviderMetadataPtr);
  return v5;
}
