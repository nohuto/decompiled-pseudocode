/*
 * XREFs of ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CB1E0
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x18000360C (-LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180003F10 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x1800045A0 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180005A20 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUI.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180006478 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     s_rtgGetDefaultAudioEndpoint @ 0x18000E0D0 (s_rtgGetDefaultAudioEndpoint.c)
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180013280 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18004D110 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?AudioDGGetStartupStatus_RPC_WithWait@@YAJPEAX@Z @ 0x18004D274 (-AudioDGGetStartupStatus_RPC_WithWait@@YAJPEAX@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x18004D308 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18005248C (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180054D60 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180062F14 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     s_apmSetPersistedDefaultAudioEndpoint @ 0x1800EF040 (s_apmSetPersistedDefaultAudioEndpoint.c)
 *     _lambda_9268d9d4379208cfe1cd98081c6e861f_::operator() @ 0x18012E3EC (_lambda_9268d9d4379208cfe1cd98081c6e861f_--operator().c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x1800CB17C (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_Win32((__int64)this, a2, a3, (__int64)a4, v5, retaddr, 1, (int)a4);
}
