/*
 * XREFs of ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180071990
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180027DA0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x18002F060 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18002FCD0 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@K.c)
 *     ?InitializeProcessSubmixManager@@YAJXZ @ 0x180065204 (-InitializeProcessSubmixManager@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualAudioStream@@AEAPEAUIAudioProcess@@$$QEAW4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800714F0 (--$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CAT.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualAudioStream_CVirtualAudioStream_IAudioProcess___&_enum__AUDIO_STREAM_EXTENDED_CATEGORY_unsigned_short_const___&_enum___MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001_&__::_1_::dtor$0 @ 0x180071603 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualAudioStream_CVirtualAudioStream_IAudioProces.c)
 *     ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x18007180C (--$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessi.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualAudioSessionInfo_VirtualAudioSessionInfo_IAudioProcess___&_unsigned_short_const___&_bool_bool_enum__AudioSessionState__::_1_::dtor$0 @ 0x1800718EB (_Microsoft--WRL--Details--MakeAndInitialize_VirtualAudioSessionInfo_VirtualAudioSessionInfo_IAud.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const___&_enum_APO_TYPE_&__GUID_const_&__::_1_::dtor$0 @ 0x180076690 (_Microsoft--WRL--Details--MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_sh.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$58 @ 0x1800798F0 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$58.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore_unsigned_short_const___&__::_1_::dtor$0 @ 0x180079CBE (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore_un.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__::_1_::dtor$0 @ 0x180079D2A (_Microsoft--WRL--Details--MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__--_1_--.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Sarm::CSpatialAudioResourceManager_ISpatialAudioResourceManager_IAudioPolicyManager___&__::_1_::dtor$0 @ 0x180079ECB (_Microsoft--WRL--Details--MakeAndInitialize_Sarm--CSpatialAudioResourceManager_ISpatialAudioReso.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const___&_int_&__::_1_::dtor$0 @ 0x18007A766 (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_un.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroupProxy_StreamGroupParams___&_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&_unsigned_long_&__::_1_::dtor$0 @ 0x1800E26DE (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroupProxy_StreamG.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_DialogSession_DialogSession_IAudioProcess___unsigned_short_const___&__::_1_::dtor$0 @ 0x1800F6EEC (_Microsoft--WRL--Details--MakeAndInitialize_DialogSession_DialogSession_IAudioProcess___unsigned.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__::_1_::dtor$0 @ 0x180105172 (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__--_1_.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AvoidEndpointPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$0 @ 0x1801106DC (_Microsoft--WRL--Details--MakeAndInitialize_AvoidEndpointPolicyRule_IPolicyRule_IAudioProcess___.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CommunicationsRemapPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$0 @ 0x1801107B3 (_Microsoft--WRL--Details--MakeAndInitialize_CommunicationsRemapPolicyRule_IPolicyRule_IAudioProc.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___&__DynamicRoutingRule___&__::_1_::dtor$0 @ 0x180110884 (_Microsoft--WRL--Details--MakeAndInitialize_RemapPolicyRule_IPolicyRule_IAudioProcess___-__Dynam.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice___&_unsigned_int_&__tagpropertykey_const___&__::_1_::dtor$0 @ 0x180120B69 (_Microsoft--WRL--Details--MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice___-_un.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
