/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002BF80
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180002C64 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180017480 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180017CE0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18002B5B4 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     AudioSessionManagerDestroy @ 0x18002B630 (AudioSessionManagerDestroy.c)
 *     AUDIOSESSIONMANAGER_rundown @ 0x18002B9E0 (AUDIOSESSIONMANAGER_rundown.c)
 *     ??$MakeAndInitialize@VCAudioSessionManager@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManager@@AEAPEBG@Z @ 0x18002BEE4 (--$MakeAndInitialize@VCAudioSessionManager@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSe.c)
 *     ??1?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B85C8 (--1-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800BA2B8 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ??1?$ComPtr@VCAudioSessionManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D16DC (--1-$ComPtr@VCAudioSessionManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800D8F70 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800EB52C (-ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@IEAAJAEAV-$ComPtr@UIStreamGr.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EB74C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x18006DED8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(
        __int64 a1)
{
  unsigned int result; // eax
  __int64 v2; // r10
  unsigned int v3; // ebx

  result = ATL::SafeDecrementReferenceMultiThread((int *)(a1 + 12));
  v3 = result;
  if ( !result )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 104LL))(v2, result + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    return v3;
  }
  return result;
}
