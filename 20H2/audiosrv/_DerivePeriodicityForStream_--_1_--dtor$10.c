/*
 * XREFs of _DerivePeriodicityForStream_::_1_::dtor$10 @ 0x180077610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DerivePeriodicityForStream_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 304);
}
