/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C00C40EC
 * Callers:
 *     InitializeTelemetryAssertsKMByName @ 0x1C008DD04 (InitializeTelemetryAssertsKMByName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        _tlgProvider_t *hProvider,
        void (__fastcall *a2)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *),
        void *pEnableCallback)
{
  _GUID v4; // xmm0
  unsigned int v5; // edi
  _GUID providerId; // [rsp+20h] [rbp-28h] BYREF

  v4 = (_GUID)*((_OWORD *)hProvider->ProviderMetadataPtr - 1);
  hProvider->EnableCallback = 0LL;
  hProvider->CallbackContext = 0LL;
  providerId = v4;
  v5 = EtwRegister(&providerId, (PETWENABLECALLBACK)tlgEnableCallback, hProvider, &hProvider->RegHandle);
  if ( !v5 )
    EtwSetInformation(
      hProvider->RegHandle,
      EventProviderSetTraits,
      (PVOID)hProvider->ProviderMetadataPtr,
      *hProvider->ProviderMetadataPtr);
  return v5;
}
