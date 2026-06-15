/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F69C
 * Callers:
 *     ActivatePolicyManager @ 0x18000A580 (ActivatePolicyManager.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18000AC2C (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x18000C550 (-RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPre.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x18000CA70 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x180012BF8 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180015018 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180018D2C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?SetMixedRealitySpatialAudioFormatPolicy@CProcess@@UEAAXW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x18001CB60 (-SetMixedRealitySpatialAudioFormatPolicy@CProcess@@UEAAXW4MixedRealitySpatialAudioFormatPolicy@A.c)
 *     ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@@Z @ 0x18001DC68 (--$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180023AAC (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x18002B154 (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002D49C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _lambda_0c539e07ad5eca11a9151d154bdea5da_::operator() @ 0x18002F8D4 (_lambda_0c539e07ad5eca11a9151d154bdea5da_--operator().c)
 *     ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x18002FF98 (-TsSessionOnApmResumeSuspendStateChanged@@YAXXZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180032A0C (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18003577C (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F738 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000266C (--2@YAPEAX_K@Z.c)
 */

LPVOID __fastcall operator new(SIZE_T a1, const struct std::nothrow_t *a2)
{
  LPVOID result; // rax

  try
  {
    result = operator new(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
