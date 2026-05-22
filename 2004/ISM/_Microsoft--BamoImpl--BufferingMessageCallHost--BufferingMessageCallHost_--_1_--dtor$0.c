/*
 * XREFs of _Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost_::_1_::dtor$0 @ 0x18003F1E5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::BufferingMessageCallHost_::_1_::dtor_0(
        __int64 a1,
        BamoImpl::BamoMPCConstantManagerClientProxyImpl **a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    a2[6],
    (struct Microsoft::BamoImpl::BamoProxyImpl *)a2);
}
