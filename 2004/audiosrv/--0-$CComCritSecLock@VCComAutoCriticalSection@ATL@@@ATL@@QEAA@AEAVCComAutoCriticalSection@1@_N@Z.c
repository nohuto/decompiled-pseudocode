/*
 * XREFs of ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18000C690 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4.c)
 *     ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x1800568CC (-Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z.c)
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800675D4 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?GetPhoneTopology@AudioDeviceMgr@@UEAAJPEAPEAUIPhoneTopology@@@Z @ 0x180067660 (-GetPhoneTopology@AudioDeviceMgr@@UEAAJPEAPEAUIPhoneTopology@@@Z.c)
 *     ?WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ @ 0x18006972C (-WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ.c)
 *     ?AcquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800F3070 (-AcquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z @ 0x1800F3558 (-AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z.c)
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F38F8 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800F3EF4 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800F4200 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1800F4200.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F4A2C (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800F4C60 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEBGW4AUDIO_DIRECTION@@.c)
 *     ?ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z @ 0x1800F4F30 (-ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z @ 0x1800F531C (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z.c)
 *     ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F5464 (-ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800F5590 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x1800F5910 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F5BBC (-Shutdown@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x1800F5D74 (-UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDI.c)
 *     ?WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F5F2C (-WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800F6050 (-s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_W.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x18010F4E0 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     ?DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x18010F6D4 (-DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyType.c)
 *     ?DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18010F764 (-DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularRxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18010F7F4 (-DoSetCellularRxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularTxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18010F884 (-DoSetCellularTxMute@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18010F914 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x18010FAC0 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?GetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z @ 0x18010FC30 (-GetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z.c)
 *     ?GetCallStateSync@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z @ 0x18010FD20 (-GetCallStateSync@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z.c)
 *     ?GetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@PEAH@Z @ 0x18010FE40 (-GetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@PEAH@Z.c)
 *     ?GetMuteSync@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@PEAH@Z @ 0x18010FF30 (-GetMuteSync@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@PEAH@Z.c)
 *     ?GetRoutingPolicy@PhoneCallAudio@@UEAAJPEAW4_TelephonyRoutingPolicy@@@Z @ 0x180110020 (-GetRoutingPolicy@PhoneCallAudio@@UEAAJPEAW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x180110148 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?IsSessionStarted@PhoneCallAudio@@UEAAJPEAH@Z @ 0x1801101D0 (-IsSessionStarted@PhoneCallAudio@@UEAAJPEAH@Z.c)
 *     ?OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180110240 (-OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_.c)
 *     ?OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x1801102D0 (-OnEndpointDeviceAdded@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 *     ?OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x180110360 (-OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x1801103DC (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ @ 0x180110488 (-OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x1801104F0 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?ProviderChange@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x180110640 (-ProviderChange@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z.c)
 *     ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1801107F8 (-ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z @ 0x1801108B0 (-SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z.c)
 *     ?SetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@H@Z @ 0x1801109C0 (-SetMute@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@H@Z.c)
 *     ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180110AA0 (-SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?SetVolume@PhoneCallAudio@@UEAAJM@Z @ 0x180110B40 (-SetVolume@PhoneCallAudio@@UEAAJM@Z.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180110BD0 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180110D8C (-SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?InternalTimerCallback@RoutingTimer@@KAXPEAXE@Z @ 0x1801110D0 (-InternalTimerCallback@RoutingTimer@@KAXPEAXE@Z.c)
 *     ?IsTimerStarted@RoutingTimer@@UEAAHXZ @ 0x180111140 (-IsTimerStarted@RoutingTimer@@UEAAHXZ.c)
 *     ?StartTimer@RoutingTimer@@UEAAJXZ @ 0x1801111A0 (-StartTimer@RoutingTimer@@UEAAJXZ.c)
 *     ?StopTimer@RoutingTimer@@UEAAXXZ @ 0x180111260 (-StopTimer@RoutingTimer@@UEAAXXZ.c)
 *     ?AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z @ 0x18013DE10 (-AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x18013E1C0 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     ?IsPhoneTopologyValid@AudioDeviceMgr@@UEAAHXZ @ 0x18013E340 (-IsPhoneTopologyValid@AudioDeviceMgr@@UEAAHXZ.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x18013E6C8 (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 *     ?RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z @ 0x18013F320 (-RemoveDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@@Z.c)
 *     ?ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z @ 0x18013F3A0 (-ReplaceDevice@EndpointCollection@@UEAAJPEAUIEndpointDevice@@0@Z.c)
 *     ?AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z @ 0x18013F7D4 (-AddWorkItemToQueue@PhoneTopology@@AEAAJPEAVPhoneTopologyWorkItem@@@Z.c)
 *     ?DoSetCellularEnable@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18013F9C8 (-DoSetCellularEnable@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularRxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18013FC24 (-DoSetCellularRxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularTxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18013FDE8 (-DoSetCellularTxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetProviderChange@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x18013FF1C (-DoSetProviderChange@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z.c)
 *     ?GetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180140100 (-GetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularEnableSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180140290 (-GetCellularEnableSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180140340 (-GetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularRxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180140510 (-GetCellularRxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180140630 (-GetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularTxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180140800 (-GetCellularTxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z @ 0x18014096C (-GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z.c)
 *     ?IsCellularEnabled@PhoneTopology@@UEAAHXZ @ 0x180140AD0 (-IsCellularEnabled@PhoneTopology@@UEAAHXZ.c)
 *     ?SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180140F80 (-SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndp.c)
 *     ?SetCellularRxVolume@PhoneTopology@@UEAAJM@Z @ 0x180141570 (-SetCellularRxVolume@PhoneTopology@@UEAAJM@Z.c)
 *     ?WorkItemThreadProc@PhoneTopology@@AEAAXXZ @ 0x1801416EC (-WorkItemThreadProc@PhoneTopology@@AEAAXXZ.c)
 *     ?s_WorkerThreadProc@PhoneTopology@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180141810 (-s_WorkerThreadProc@PhoneTopology@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  EnterCriticalSection(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
