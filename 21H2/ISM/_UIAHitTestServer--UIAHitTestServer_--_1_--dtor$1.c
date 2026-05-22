/*
 * XREFs of _UIAHitTestServer::UIAHitTestServer_::_1_::dtor$1 @ 0x18004FA1A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UIAHitTestServer::UIAHitTestServer_::_1_::dtor_1(
        __int64 a1,
        BamoImpl::BamoMPCConstantManagerClientProxyImpl **a2)
{
  BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
    a2[6],
    (struct Microsoft::BamoImpl::BamoProxyImpl *)a2);
}
