/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000A518
 * Callers:
 *     _ApplicationSpecificEndpointInfo::GetRelatedProcesses_::_1_::dtor$0 @ 0x18003B17E (_ApplicationSpecificEndpointInfo--GetRelatedProcesses_--_1_--dtor$0.c)
 *     _AudioStateMonitorManager::RecalculateVolume_::_1_::dtor$0 @ 0x18003B190 (_AudioStateMonitorManager--RecalculateVolume_--_1_--dtor$0.c)
 *     _TsSessionIdScreenReaderStateChanged_::_1_::dtor$0 @ 0x18003B2BD (_TsSessionIdScreenReaderStateChanged_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::dtor$0 @ 0x18003B305 (_ApplicationSpecificEndpointInfo--AddRelatedProcess_--_1_--dtor$0.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$0 @ 0x18003BA68 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$0.c)
 *     _CApplicationManager::Register_::_1_::dtor$0 @ 0x18003C10B (_CApplicationManager--Register_--_1_--dtor$0.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$1 @ 0x18003C12F (_CApplicationManager--RpcGetProcess_--_1_--dtor$1.c)
 *     _TsSessionLaunchBackgroundTask_::_1_::dtor$0 @ 0x18003C29C (_TsSessionLaunchBackgroundTask_--_1_--dtor$0.c)
 *     _TsSessionIdAddAppManagerClient_::_1_::dtor$0 @ 0x18003C2AE (_TsSessionIdAddAppManagerClient_--_1_--dtor$0.c)
 *     _TsSessionIdTerminate_::_1_::dtor$0 @ 0x18003C2C0 (_TsSessionIdTerminate_--_1_--dtor$0.c)
 *     _AudioStateMonitorManager::RegisterAudioStateMonitor_::_1_::dtor$0 @ 0x18003C2D2 (_AudioStateMonitorManager--RegisterAudioStateMonitor_--_1_--dtor$0.c)
 *     _TsSessionIdDisplayNotificationCallback_::_1_::dtor$0 @ 0x18003C2E4 (_TsSessionIdDisplayNotificationCallback_--_1_--dtor$0.c)
 *     _TsSessionIdConnect_::_1_::dtor$0 @ 0x18003C2F6 (_TsSessionIdConnect_--_1_--dtor$0.c)
 *     _CAppStateChangedWorkItem::Invoke_::_1_::dtor$0 @ 0x18003C33E (_CAppStateChangedWorkItem--Invoke_--_1_--dtor$0.c)
 *     _CApplicationManager::RevertEndpointVolumeOverride_::_1_::dtor$0 @ 0x18003C350 (_CApplicationManager--RevertEndpointVolumeOverride_--_1_--dtor$0.c)
 *     _CApplicationManager::RevertEndpointVolumeOverride_::_1_::dtor$1 @ 0x18003C362 (_CApplicationManager--RevertEndpointVolumeOverride_--_1_--dtor$1.c)
 *     _DoLaunchBackgroundTask_::_1_::dtor$0 @ 0x18003C5DA (_DoLaunchBackgroundTask_--_1_--dtor$0.c)
 *     _TsSessionSendAppManagerNotification_::_1_::dtor$0 @ 0x18003C719 (_TsSessionSendAppManagerNotification_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
