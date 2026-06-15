/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000FD8C
 * Callers:
 *     _ApplicationSpecificEndpointInfo::GetRelatedProcesses_::_1_::dtor$0 @ 0x180040AAA (_ApplicationSpecificEndpointInfo--GetRelatedProcesses_--_1_--dtor$0.c)
 *     _AudioStateMonitorManager::RecalculateVolume_::_1_::dtor$0 @ 0x180040ABC (_AudioStateMonitorManager--RecalculateVolume_--_1_--dtor$0.c)
 *     _TsSessionIdScreenReaderStateChanged_::_1_::dtor$0 @ 0x180040BFB (_TsSessionIdScreenReaderStateChanged_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::AddRelatedProcess_::_1_::dtor$0 @ 0x180040C43 (_ApplicationSpecificEndpointInfo--AddRelatedProcess_--_1_--dtor$0.c)
 *     _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$0 @ 0x1800413A6 (_CStreamClassPolicyGains--UpdateStreamClassGainStage_--_1_--dtor$0.c)
 *     _CApplicationManager::Register_::_1_::dtor$0 @ 0x180041A49 (_CApplicationManager--Register_--_1_--dtor$0.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$1 @ 0x180041A6D (_CApplicationManager--RpcGetProcess_--_1_--dtor$1.c)
 *     _TsSessionLaunchBackgroundTask_::_1_::dtor$0 @ 0x180041BDA (_TsSessionLaunchBackgroundTask_--_1_--dtor$0.c)
 *     _TsSessionIdAddAppManagerClient_::_1_::dtor$0 @ 0x180041BEC (_TsSessionIdAddAppManagerClient_--_1_--dtor$0.c)
 *     _TsSessionIdTerminate_::_1_::dtor$0 @ 0x180041BFE (_TsSessionIdTerminate_--_1_--dtor$0.c)
 *     _AudioStateMonitorManager::RegisterAudioStateMonitor_::_1_::dtor$0 @ 0x180041C10 (_AudioStateMonitorManager--RegisterAudioStateMonitor_--_1_--dtor$0.c)
 *     _TsSessionIdDisplayNotificationCallback_::_1_::dtor$0 @ 0x180041C22 (_TsSessionIdDisplayNotificationCallback_--_1_--dtor$0.c)
 *     _TsSessionIdConnect_::_1_::dtor$0 @ 0x180041C34 (_TsSessionIdConnect_--_1_--dtor$0.c)
 *     _CAppStateChangedWorkItem::Invoke_::_1_::dtor$0 @ 0x180041C7C (_CAppStateChangedWorkItem--Invoke_--_1_--dtor$0.c)
 *     _CApplicationManager::RevertEndpointVolumeOverride_::_1_::dtor$0 @ 0x180041C8E (_CApplicationManager--RevertEndpointVolumeOverride_--_1_--dtor$0.c)
 *     _CApplicationManager::RevertEndpointVolumeOverride_::_1_::dtor$1 @ 0x180041CA0 (_CApplicationManager--RevertEndpointVolumeOverride_--_1_--dtor$1.c)
 *     _DoLaunchBackgroundTask_::_1_::dtor$0 @ 0x180041F18 (_DoLaunchBackgroundTask_--_1_--dtor$0.c)
 *     _TsSessionSendAppManagerNotification_::_1_::dtor$0 @ 0x180042057 (_TsSessionSendAppManagerNotification_--_1_--dtor$0.c)
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
