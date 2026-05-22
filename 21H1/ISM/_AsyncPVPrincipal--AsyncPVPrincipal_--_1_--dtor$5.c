/*
 * XREFs of _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$5 @ 0x18011A809
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor_5(
        __int64 a1,
        BamoImpl::BamoMPCConstantManagerClientProxyImpl **a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    a2[10],
    (struct Microsoft::BamoImpl::BamoProxyImpl *)a2);
}
