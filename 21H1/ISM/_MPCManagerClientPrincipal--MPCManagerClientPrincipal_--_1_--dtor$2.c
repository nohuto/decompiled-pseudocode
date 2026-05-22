/*
 * XREFs of _MPCManagerClientPrincipal::MPCManagerClientPrincipal_::_1_::dtor$2 @ 0x18010C9DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCManagerClientPrincipal::MPCManagerClientPrincipal_::_1_::dtor_2(
        __int64 a1,
        BamoImpl::BamoMPCConstantManagerClientProxyImpl **a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    a2[6],
    (struct Microsoft::BamoImpl::BamoProxyImpl *)a2);
}
