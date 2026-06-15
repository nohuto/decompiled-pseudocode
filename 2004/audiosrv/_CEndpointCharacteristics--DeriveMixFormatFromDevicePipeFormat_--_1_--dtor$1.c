/*
 * XREFs of _CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat_::_1_::dtor$1 @ 0x18007C8A3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 168));
}
