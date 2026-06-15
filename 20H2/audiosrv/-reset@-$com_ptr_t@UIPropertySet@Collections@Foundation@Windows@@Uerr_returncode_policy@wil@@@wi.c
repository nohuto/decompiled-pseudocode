/*
 * XREFs of ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CB034
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000CBC0 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014200 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023510 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x180033300 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180035700 (-NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     wil::details::functor_wrapper_void__lambda_0e6163ff1b327aa0d4e45e7e06fa9bf3__&_::Run @ 0x180046B80 (wil--details--functor_wrapper_void__lambda_0e6163ff1b327aa0d4e45e7e06fa9bf3__-_--Run.c)
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180047850 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18004FA60 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?OnStreamDisconnectedFromSaDevice@CAudioStream@@UEAAXXZ @ 0x1800520D0 (-OnStreamDisconnectedFromSaDevice@CAudioStream@@UEAAXXZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18005F590 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ?SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z @ 0x18006E934 (-SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_e502a9afe934ad15e9a66fb40fe85541__bool_IAudioStreamInfo___::_Do_call @ 0x180071350 (std--_Func_impl_no_alloc__lambda_e502a9afe934ad15e9a66fb40fe85541__bool_IAudioStreamInfo___--_Do.c)
 *     asm_GetApplicationSubmixContextForExcludedProcessTree @ 0x1800713F0 (asm_GetApplicationSubmixContextForExcludedProcessTree.c)
 *     ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x180073A54 (-RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ @ 0x180073D74 (-UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ.c)
 *     ??I?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIAudioProcess@@XZ @ 0x1800C64C8 (--I-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIAudioProcess@@XZ.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800D0690 (AudioSessionManagerGetSessionForStreamSwitch.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x1800D1AC0 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800D1B5C (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800D1E00 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 *     ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800D2130 (-InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?AbortStartStream@CVADServer@@UEAAJXZ @ 0x1800DAB50 (-AbortStartStream@CVADServer@@UEAAJXZ.c)
 *     ?PreStartStream@CVADServer@@UEAAJXZ @ 0x1800DC870 (-PreStartStream@CVADServer@@UEAAJXZ.c)
 *     AudioServerGetEndpointVpoContext @ 0x1800DEAF0 (AudioServerGetEndpointVpoContext.c)
 *     AudioServerGetStreamVpoContext @ 0x1800DF370 (AudioServerGetStreamVpoContext.c)
 *     ?GetVpoContext@CProcessSubmixProxy@@UEAAJPEAPEAUIVpoContext@@@Z @ 0x1800E5240 (-GetVpoContext@CProcessSubmixProxy@@UEAAJPEAPEAUIVpoContext@@@Z.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EAABC (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800ECFD0 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 *     asm_GetApplicationSubmixContext @ 0x1800F1AD0 (asm_GetApplicationSubmixContext.c)
 *     asm_GetApplicationSubmixContextForProcessTree @ 0x1800F1BD0 (asm_GetApplicationSubmixContextForProcessTree.c)
 *     asm_GetApplicationSubmixContextFromPID @ 0x1800F1CE0 (asm_GetApplicationSubmixContextFromPID.c)
 *     ?RpcBeginDialogSession@@YAJPEBGPEAPEAVDialogSession@@@Z @ 0x1800F706C (-RpcBeginDialogSession@@YAJPEBGPEAPEAVDialogSession@@@Z.c)
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180107AB8 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource.c)
 *     ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180108E90 (-UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResour.c)
 *     ?Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18010B158 (-Initialize@CStreamResource@Sarm@@QEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEAU__POSITION@@PEBUSPA.c)
 *     ?IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ @ 0x18010B3D4 (-IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ.c)
 *     ?OnDeviceAdded@CExclusiveModeListener@@EEAAJPEBG@Z @ 0x18010CC30 (-OnDeviceAdded@CExclusiveModeListener@@EEAAJPEBG@Z.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x18010DEEC (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 *     wil::details::lambda_call__lambda_725372baeb855ae858d01405b3bc3564___::_lambda_call__lambda_725372baeb855ae858d01405b3bc3564___ @ 0x18010E764 (wil--details--lambda_call__lambda_725372baeb855ae858d01405b3bc3564___--_lambda_call__lambda_7253.c)
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x18010EE30 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x18010F74C (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18010FF40 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1801117AC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x1801119E8 (-ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z @ 0x180111CB0 (-GetDeviceFromDeviceId@DynamicAudioEndpointManager@@CAJPEBGPEAPEAUIMMDevice@@@Z.c)
 *     ?GetRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x180111E24 (-GetRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z.c)
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x180112440 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180112834 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z @ 0x180113014 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x180113620 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z.c)
 *     ?OnRuleOperation@AvoidEndpointPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x180114540 (-OnRuleOperation@AvoidEndpointPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z.c)
 *     ?RuntimeClassInitialize@AvoidEndpointPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x1801148C0 (-RuntimeClassInitialize@AvoidEndpointPolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule.c)
 *     ?OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z @ 0x180114B40 (-OnRuleOperation@CommunicationsRemapPolicyRule@@UEAAJPEBGW4RuleOperation@@KPEAW4RuleAction@@@Z.c)
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18011BED4 (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
