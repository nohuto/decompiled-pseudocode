/*
 * XREFs of RegisterTelemetryProvider @ 0x1C0060510
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C0041768 (FxLibraryCommonCommission.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C008E604 (InitializeTelemetryAssertsKMByName.c)
 *     TraceLoggingSetInformation_2K @ 0x1C00BC500 (TraceLoggingSetInformation_2K.c)
 */

NTSTATUS __fastcall RegisterTelemetryProvider(const char *a1)
{
  _GUID v1; // xmm0
  NTSTATUS result; // eax
  _EVENT_INFO_CLASS v3; // edx
  const _tlgProvider_t *v4; // rcx
  _GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  InitializeTelemetryAssertsKMByName(a1);
  v1 = (_GUID)*((_OWORD *)Tlgg_TelemetryProviderProv.ProviderMetadataPtr - 1);
  *(_OWORD *)&Tlgg_TelemetryProviderProv.EnableCallback = 0LL;
  ProviderId = v1;
  result = EtwRegister(
             &ProviderId,
             tlgEnableCallback,
             &Tlgg_TelemetryProviderProv,
             &Tlgg_TelemetryProviderProv.RegHandle);
  if ( !result )
    return TraceLoggingSetInformation_2K(
             v4,
             v3,
             (void *)Tlgg_TelemetryProviderProv.ProviderMetadataPtr,
             *Tlgg_TelemetryProviderProv.ProviderMetadataPtr);
  return result;
}
