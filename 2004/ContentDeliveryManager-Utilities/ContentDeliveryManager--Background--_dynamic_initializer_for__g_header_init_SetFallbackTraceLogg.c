/*
 * XREFs of ContentDeliveryManager::Background::_dynamic_initializer_for__g_header_init_SetFallbackTraceLoggingProvider__ @ 0x180003CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800055F4 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1800CDE41 (memset_0.c)
 */

void (*ContentDeliveryManager::Background::_dynamic_initializer_for__g_header_init_SetFallbackTraceLoggingProvider__())(bool, const struct wil::FailureInfo *)
{
  void (*result)(bool, const struct wil::FailureInfo *); // rax
  const struct wil::FailureInfo *v1; // rdx
  _BYTE v2[152]; // [rsp+20h] [rbp-98h] BYREF

  result = wil::details::g_pfnTelemetryCallback;
  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FallbackTelemetryCallback )
  {
    memset_0(v2, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v2, v1);
  }
  wil::details::g_pfnTelemetryCallback = (void (*)(bool, const struct wil::FailureInfo *))ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FallbackTelemetryCallback;
  g_header_init_SetFallbackTraceLoggingProvider = 1;
  return result;
}
