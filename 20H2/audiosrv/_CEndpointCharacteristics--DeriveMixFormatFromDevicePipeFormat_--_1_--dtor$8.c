/*
 * XREFs of _CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat_::_1_::dtor$8 @ 0x18007BE07
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 144));
}
