/*
 * XREFs of _ForegroundManager::OnActivationObjectNotification_::_1_::dtor$7 @ 0x180050210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ForegroundManager::OnActivationObjectNotification_::_1_::dtor_7(
        __int64 a1,
        BamoImpl::BamoMPCConstantManagerClientProxyImpl **a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    a2[34],
    (struct Microsoft::BamoImpl::BamoProxyImpl *)a2);
}
