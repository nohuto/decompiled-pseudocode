/*
 * XREFs of _CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode_::_1_::dtor$1 @ 0x180075C12
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 64);
}
