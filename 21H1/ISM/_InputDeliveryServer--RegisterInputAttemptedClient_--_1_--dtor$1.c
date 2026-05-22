/*
 * XREFs of _InputDeliveryServer::RegisterInputAttemptedClient_::_1_::dtor$1 @ 0x18004DE51
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDeliveryServer::RegisterInputAttemptedClient_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<BamoDataSourceStub>::~ComPtr<BamoDataSourceStub>(*(_QWORD *)(a2 + 64));
}
