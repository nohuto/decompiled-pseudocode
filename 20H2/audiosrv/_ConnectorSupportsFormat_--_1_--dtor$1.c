/*
 * XREFs of _ConnectorSupportsFormat_::_1_::dtor$1 @ 0x1800D5BED
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ConnectorSupportsFormat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 88));
}
