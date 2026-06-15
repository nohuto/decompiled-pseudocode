/*
 * XREFs of _CEndpointCharacteristics::SetDeviceFormatSwAudioEngine_::_1_::dtor$1 @ 0x180077EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::SetDeviceFormatSwAudioEngine_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(a2 + 72);
}
