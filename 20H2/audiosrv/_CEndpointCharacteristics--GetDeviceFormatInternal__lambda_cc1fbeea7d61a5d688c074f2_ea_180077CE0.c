/*
 * XREFs of _CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b____::_1_::dtor$4 @ 0x180077CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b____::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 176);
}
