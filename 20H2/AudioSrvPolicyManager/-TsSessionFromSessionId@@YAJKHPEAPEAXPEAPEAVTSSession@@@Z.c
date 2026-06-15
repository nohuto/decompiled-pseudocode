/*
 * XREFs of ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C
 * Callers:
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180006EA0 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180007520 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180007840 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z @ 0x180008690 (-GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z.c)
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x18000ABD0 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x180016AF0 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18001E14C (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x18001F000 (-GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18001FFCC (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x1800201E0 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClient@@AEA_NAEAMAEA_J@Z @ 0x180024994 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClien.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180024E60 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x180026A18 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x180028944 (-TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x180028AD8 (-TsSessionIdIsMuted@@YAHK@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180028B58 (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180028C94 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180028D80 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180028F50 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180029028 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x1800290D8 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x1800292E8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x1800293D4 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x1800295AC (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x180029670 (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z @ 0x18002975C (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAUIDuckingController@@PEAH@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x180029840 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z @ 0x1800298F4 (-TsSessionIdIsAudioInStandbyAllowed@@YAHK@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180029AAC (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x180029CD0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     _lambda_0c539e07ad5eca11a9151d154bdea5da_::operator() @ 0x180029FD4 (_lambda_0c539e07ad5eca11a9151d154bdea5da_--operator().c)
 *     ?TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z @ 0x18002A1BC (-TsSessionUpdateDuckingGainForId@@YAJKPEBGMPEA_N@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z @ 0x18002A3EC (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18002A46C (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x18002A4F8 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002A7F0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002AA88 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002AB9C (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 * Callees:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180027B9C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionFromSessionId(DWORD a1, int a2, void **a3, struct TSSession **a4)
{
  _QWORD *v8; // rax
  void *v9; // rdx
  struct TSSession *v10; // rcx
  __int64 result; // rax

  if ( a3 )
    *a3 = 0LL;
  *a4 = 0LL;
  EnterCriticalSection(&CriticalSection);
  v8 = qword_18004FF98;
  while ( 1 )
  {
    v9 = v8;
    if ( !v8 )
      break;
    v10 = (struct TSSession *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( a1 == *(_DWORD *)v10 )
    {
      if ( a3 )
        *a3 = v9;
      *a4 = v10;
      break;
    }
  }
  LeaveCriticalSection(&CriticalSection);
  result = *a4 == 0LL ? 0x490 : 0;
  if ( !*a4 )
  {
    if ( a2 )
      return TsSessionCreate(a1, a3, a4);
  }
  return result;
}
