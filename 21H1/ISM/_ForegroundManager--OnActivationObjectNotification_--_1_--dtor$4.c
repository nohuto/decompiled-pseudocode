/*
 * XREFs of _ForegroundManager::OnActivationObjectNotification_::_1_::dtor$4 @ 0x1800501F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ForegroundManager::OnActivationObjectNotification_::_1_::dtor_4(
        __int64 a1,
        BamoImpl::BamoMPCConstantManagerClientProxyImpl **a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    a2[33],
    (struct Microsoft::BamoImpl::BamoProxyImpl *)a2);
}
