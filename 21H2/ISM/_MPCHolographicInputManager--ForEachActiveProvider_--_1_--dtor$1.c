/*
 * XREFs of _MPCHolographicInputManager::ForEachActiveProvider_::_1_::dtor$1 @ 0x180075C9A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MPCHolographicInputManager::ForEachActiveProvider_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 64));
}
