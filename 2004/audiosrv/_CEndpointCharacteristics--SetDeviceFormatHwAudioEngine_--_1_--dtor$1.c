/*
 * XREFs of _CEndpointCharacteristics::SetDeviceFormatHwAudioEngine_::_1_::dtor$1 @ 0x18011FE88
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::SetDeviceFormatHwAudioEngine_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 32);
}
