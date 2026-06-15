/*
 * XREFs of _ProcessSpatialAudioFormatElement_::_1_::dtor$2 @ 0x180137B79
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessSpatialAudioFormatElement_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
