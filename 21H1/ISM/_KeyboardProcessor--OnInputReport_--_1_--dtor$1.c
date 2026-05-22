/*
 * XREFs of _KeyboardProcessor::OnInputReport_::_1_::dtor$1 @ 0x180135A8E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KeyboardProcessor::OnInputReport_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 136));
}
