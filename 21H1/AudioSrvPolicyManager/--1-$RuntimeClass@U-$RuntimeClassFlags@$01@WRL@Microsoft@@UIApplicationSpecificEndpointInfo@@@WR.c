/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationSpecificEndpointInfo@@@WRL@Microsoft@@UEAA@XZ @ 0x18000FA28
 * Callers:
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$6 @ 0x18004149A (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$6.c)
 *     _AudioStateMonitorManager::AudioStateMonitorManager_::_1_::dtor$0 @ 0x180041A0B (_AudioStateMonitorManager--AudioStateMonitorManager_--_1_--dtor$0.c)
 *     _TSSession::Create_::_1_::dtor$6 @ 0x180041E70 (_TSSession--Create_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationSpecificEndpointInfo>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationSpecificEndpointInfo>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
