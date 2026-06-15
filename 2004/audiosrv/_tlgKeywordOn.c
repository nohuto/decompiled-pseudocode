/*
 * XREFs of _tlgKeywordOn @ 0x1800B7ADC
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
 *     ?CheckAndLogTelemetry@AudioJournal@@AEAAXXZ @ 0x180038EA4 (-CheckAndLogTelemetry@AudioJournal@@AEAAXXZ.c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048908 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18004A26C (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudio.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x18004A870 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004B980 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18004CE10 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18004CEF8 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180059844 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005B34C (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z @ 0x18005BEB8 (-EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x18005C53C (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18005D64C (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005DE60 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180064180 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18006D820 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z @ 0x1800B7690 (-Fire@AudioSrvVolumeTelemetryEndpointVolume@@EEAAX_KI@Z.c)
 *     ?LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z @ 0x1800B7BE0 (-LooksLikeWeAreHung@CAudioHealthMonitor@@UEAAXKPEBG@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800B9C64 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800BC9C0 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800BCB0C (-IsFirstHang@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800BCD3C (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 *     ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x1800BCF84 (-ProcessHasBeenRunningLongEnough@-$CWatchdogTimer@$00@@AEAAJPEA_N@Z.c)
 *     ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x1800BECB0 (-OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x1800BF210 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800C1050 (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 *     ?CaptureState@CVADServer@@QEAAXXZ @ 0x1800DBA94 (-CaptureState@CVADServer@@QEAAXXZ.c)
 *     asm_AudioServerInitializeStream @ 0x1800F25D0 (asm_AudioServerInitializeStream.c)
 *     ?LogTelemetry@CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAXXZ @ 0x18010AB40 (-LogTelemetry@CSarmErrorEventValues@CSpatialAudioResourceManagerTraceLogger@@UEAAXXZ.c)
 *     ?NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z @ 0x18010C240 (-NotifyClientOfGrant@CStreamResource@Sarm@@AEAAJI_J@Z.c)
 *     ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x18011F188 (-RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011F7D0 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x180120304 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ??$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180122998 (--$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengi.c)
 *     ?LogEPCProductionAssert@@YAX_KPEBG@Z @ 0x180122DA4 (-LogEPCProductionAssert@@YAX_KPEBG@Z.c)
 *     ?LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z @ 0x180122E08 (-LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x1801263B8 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x1801265B0 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpa.c)
 *     ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVCEndpointCharacteristics@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x1801271C0 (-SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVCEndpointCharacteristics@@AEBUWAVEFORMATEXTENSIB.c)
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18012E640 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x18012EB98 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z @ 0x180130300 (-APOTrackAndLogException@@YAXPEBU_tlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEBDJ_N5@Z.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180135E98 (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x180136288 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18013D718 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
