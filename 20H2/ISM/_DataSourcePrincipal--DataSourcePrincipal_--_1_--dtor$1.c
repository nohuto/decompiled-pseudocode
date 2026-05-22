/*
 * XREFs of _DataSourcePrincipal::DataSourcePrincipal_::_1_::dtor$1 @ 0x180141050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DataSourcePrincipal::DataSourcePrincipal_::_1_::dtor_1(
        __int64 a1,
        BamoImpl::BamoMPCConstantManagerClientProxyImpl **a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    a2[6],
    (struct Microsoft::BamoImpl::BamoProxyImpl *)a2);
}
