/*
 * XREFs of _Win32kInterop::ProcessInputMessage_::_1_::dtor$3 @ 0x1800B1CBE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Win32kInterop::ProcessInputMessage_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 128));
}
