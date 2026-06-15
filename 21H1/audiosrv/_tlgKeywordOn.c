/*
 * XREFs of _tlgKeywordOn @ 0x1800B7A3C
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18000EED0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCha.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGKPEAU3@AEAK9999PEAU2@@Z @ 0x18001E030 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180022600 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023B90 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002D9A0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x18002EE10 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x180033980 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180036AC0 (-StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180036EE4 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?CheckAndLogTelemetry@AudioJournal@@AEAAXXZ @ 0x180038EB4 (-CheckAndLogTelemetry@AudioJournal@@AEAAXXZ.c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048918 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18004A220 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudio.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x18004A824 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004B930 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18004CDC0 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18004CEA8 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180059744 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005B24C (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z @ 0x18005BDB8 (-EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x18005C43C (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18005D54C (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005DD60 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180064080 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18006DE30 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x1800B75F0 (-Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z.c)
 *     ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x1800B7B40 (-LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z.c)
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800BC8D0 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800BCA1C (-IsFirstHang@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800BCC4C (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800BCE94 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 *     ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x1800BEBC0 (-OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800BF120 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800C0F60 (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C94B8 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x1800DB9D4 (-CaptureState@CVADServer@@QEAAXXZ.c)
 *     asm_AudioServerInitializeStream @ 0x1800F2510 (asm_AudioServerInitializeStream.c)
 *     ?LogTelemetry@CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAXXZ @ 0x18010AA80 (-LogTelemetry@CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAXXZ.c)
 *     ?NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x18010C180 (-NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 *     ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x18011F0C8 (-RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011F710 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x180120244 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ??$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180122D28 (--$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ?LogEPCProductionAssert@@YAX_KPEBG@Z @ 0x180123134 (-LogEPCProductionAssert@@YAX_KPEBG@Z.c)
 *     ?LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z @ 0x180123198 (-LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z.c)
 *     ?LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z @ 0x180123210 (-LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x180126708 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180126900 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpa.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVCEndpointCharacteristics@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x180127510 (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVCEndpointCharacteristics@@AEBUWAVEFORMATEXTENSIB.c)
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18012E990 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x18012EEE8 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z @ 0x180130650 (-APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x1801361E8 (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x1801365D8 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18013DA68 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
