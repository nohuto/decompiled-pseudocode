/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F8F4
 * Callers:
 *     ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x1800069D0 (-ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z.c)
 *     _lambda_1a6013364819a622eb1c78e19bf6fec0_::operator() @ 0x18000C288 (_lambda_1a6013364819a622eb1c78e19bf6fec0_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_::_Do_call @ 0x18000DC80 (std--_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_::_Do_call @ 0x18000DF10 (std--_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_--_Do_call.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180010370 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18001058C (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x1800166BC (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x180016980 (-IsSpatializerAllowed@CProcess@@UEAA_NXZ.c)
 *     ?OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180022D60 (-OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180025140 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x180025490 (--_GCAastPreStartContext@@UEAAPEAXI@Z.c)
 *     ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x180029F80 (-TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x18002A698 (-TsSessionOnApmResumeSuspendStateChanged@@YAXXZ.c)
 *     ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x18002E62C (--0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x180030914 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180031330 (-GetPersistedDefaultAudioEndpointDeviceId@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800038BC (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
}
