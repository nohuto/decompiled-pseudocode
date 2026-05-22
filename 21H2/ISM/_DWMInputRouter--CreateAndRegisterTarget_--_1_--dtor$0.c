/*
 * XREFs of _DWMInputRouter::CreateAndRegisterTarget_::_1_::dtor$0 @ 0x180138526
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DWMInputRouter::CreateAndRegisterTarget_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(*(_QWORD **)(a2 + 56));
}
