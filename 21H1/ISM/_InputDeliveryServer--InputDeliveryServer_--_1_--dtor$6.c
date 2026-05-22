/*
 * XREFs of _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$6 @ 0x1800510A9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputDeliveryServer::InputDeliveryServer_::_1_::dtor_6(
        __int64 a1,
        BamoImpl::BamoMPCConstantManagerClientProxyImpl **a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    a2[14],
    (struct Microsoft::BamoImpl::BamoProxyImpl *)a2);
}
