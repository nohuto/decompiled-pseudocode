/*
 * XREFs of _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$3 @ 0x1800768F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 96);
}
