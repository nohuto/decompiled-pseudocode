/*
 * XREFs of _PenDeviceManager::PenDeviceManager_::_1_::dtor$5 @ 0x18012EDB5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PenDeviceManager::PenDeviceManager_::_1_::dtor_5(
        __int64 a1,
        BamoImpl::BamoMPCConstantManagerClientProxyImpl **a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    a2[8],
    (struct Microsoft::BamoImpl::BamoProxyImpl *)a2);
}
