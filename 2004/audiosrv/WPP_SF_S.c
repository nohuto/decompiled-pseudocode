/*
 * XREFs of WPP_SF_S @ 0x1800BC0A0
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180004F70 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     GetAudioSessionManager @ 0x180011AE0 (GetAudioSessionManager.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180013C08 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180017480 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A4F0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     AudioSessionManagerGetCurrentSession @ 0x18001CC70 (AudioSessionManagerGetCurrentSession.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18002C8F0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18002E730 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180032B20 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180032EE0 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180034FD0 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180038690 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180044AD0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180044BA4 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x180044CC8 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x1800463D0 (-NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ.c)
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180047790 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     AudioVolumeConnect @ 0x1800540A0 (AudioVolumeConnect.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180060F5C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x1800643D0 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x1800644D0 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x180068C30 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     _lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_::operator() @ 0x18006E2AC (_lambda_eb7b93c79ee7a0b64d2291cc6159d2b2_--operator().c)
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800B90A0 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800B9EB0 (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800BA2B8 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x1800BEA30 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x1800BEE98 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800C0040 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x1800C14C8 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800C4340 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800C7EB0 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     ?GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z @ 0x1800C81C0 (-GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800C8460 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8680 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8830 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800C8B90 (-GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800C8CC0 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800C8E20 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800C8EA0 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800C95A8 (-IsExclusiveModeSession@CAudioSession@@QEAAHXZ.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800C9D60 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800C9E6C (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800CA4F0 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?PropertyStoreCommit@CAudioSession@@UEAAJXZ @ 0x1800CAAF0 (-PropertyStoreCommit@CAudioSession@@UEAAJXZ.c)
 *     ?PropertyStoreGetAt@CAudioSession@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x1800CAB50 (-PropertyStoreGetAt@CAudioSession@@UEAAJKPEAU_tagpropertykey@@@Z.c)
 *     ?PropertyStoreGetCount@CAudioSession@@UEAAJPEAK@Z @ 0x1800CABD0 (-PropertyStoreGetCount@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetAllVolumes@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x1800CC1D0 (-GetAllVolumes@CServerAudioSessionControl@@UEAAJIPEAM@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800CC500 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?SetAllVolumes@CServerAudioSessionControl@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800CCB90 (-SetAllVolumes@CServerAudioSessionControl@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800CF880 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800ECFB8 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEBU_GUID@@7PEAPEAUISaDeviceProxy@@@Z @ 0x1800ED18C (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ED40C (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     ?LogError@@YAXPEBGZZ @ 0x1800F4654 (-LogError@@YAXPEBGZZ.c)
 *     ?LogOutput@@YAXPEBGZZ @ 0x1800F470C (-LogOutput@@YAXPEBGZZ.c)
 *     ?MME_AudioInterfaceRemove@@YAJPEBG@Z @ 0x1800F8250 (-MME_AudioInterfaceRemove@@YAJPEBG@Z.c)
 *     ?MmeOnDeviceAdded@@YAJPEBG@Z @ 0x1800F83E4 (-MmeOnDeviceAdded@@YAJPEBG@Z.c)
 *     ?MmeOnDeviceRemoved@@YAJPEBG@Z @ 0x1800F8430 (-MmeOnDeviceRemoved@@YAJPEBG@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FB778 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1800FC7B8 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FD044 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x1800FE480 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x1800FE7B0 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800FE8F0 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
