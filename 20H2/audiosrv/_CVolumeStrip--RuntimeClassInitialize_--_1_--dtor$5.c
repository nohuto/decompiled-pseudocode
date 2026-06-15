/*
 * XREFs of _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$5 @ 0x18007C37A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVolumeStrip::RuntimeClassInitialize_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 88);
}
