/*
 * XREFs of _CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor$2 @ 0x18011D0CD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a2 + 120));
}
