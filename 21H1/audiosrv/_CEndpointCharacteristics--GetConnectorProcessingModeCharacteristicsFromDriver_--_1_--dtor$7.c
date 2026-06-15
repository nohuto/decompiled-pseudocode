/*
 * XREFs of _CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor$7 @ 0x18011D109
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 96));
}
