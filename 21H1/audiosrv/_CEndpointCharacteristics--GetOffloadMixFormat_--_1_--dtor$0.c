/*
 * XREFs of _CEndpointCharacteristics::GetOffloadMixFormat_::_1_::dtor$0 @ 0x18011D50F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetOffloadMixFormat_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
