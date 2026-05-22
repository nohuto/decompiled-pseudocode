/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRemoteHotKeyProcessor@@UIMessageProxyListener@@@WRL@Microsoft@@UEAA@XZ @ 0x1800AE2F0
 * Callers:
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$0 @ 0x18004EA13 (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$0.c)
 *     _KeyboardOverriderDispatcher::KeyboardOverriderDispatcher_::_1_::dtor$0 @ 0x1800503E6 (_KeyboardOverriderDispatcher--KeyboardOverriderDispatcher_--_1_--dtor$0.c)
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$0 @ 0x18019ED88 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRemoteHotKeyProcessor,IMessageProxyListener>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = -1073741823;
}
