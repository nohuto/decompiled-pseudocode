/*
 * XREFs of _CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor$10 @ 0x18011D121
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver_::_1_::dtor_10(
        __int64 a1,
        __int64 a2)
{
  return ATL::CAutoPtr<CConnectorProcessingModeCharacteristics>::~CAutoPtr<CConnectorProcessingModeCharacteristics>(
           (CConnectorProcessingModeCharacteristics **)(a2 + 224),
           a2);
}
