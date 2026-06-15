/*
 * XREFs of ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180023580
 * Callers:
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180037DE8 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180038064 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048E74 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x1800493C0 (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180049704 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18004A030 (-CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x18005B404 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C1B8 (-AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x1800709E8 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800C5CF0 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18011B3C0 (-DeriveStreamFormatFromMixFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audi.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x18011BB88 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011D140 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011D214 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180023740 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x180119428 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x1801194F8 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(
        CEndpointCharacteristics *this,
        int a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 207) )
  {
    v4 = gsl::fail_fast::fail_fast(
           (gsl::fail_fast *)v10,
           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v4);
  }
  v5 = 96LL * a2;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v5 + *((_QWORD *)this + 208)));
  if ( v3 >= *((_QWORD *)this + 209) )
  {
    v6 = gsl::fail_fast::fail_fast(
           (gsl::fail_fast *)v10,
           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v6);
  }
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v5 + *((_QWORD *)this + 210)));
  if ( v3 >= *((_QWORD *)this + 211) )
  {
    v7 = gsl::fail_fast::fail_fast(
           (gsl::fail_fast *)v10,
           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v7);
  }
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v5 + *((_QWORD *)this + 212)));
  if ( v3 >= *((_QWORD *)this + 8) )
  {
    v8 = gsl::fail_fast::fail_fast(
           (gsl::fail_fast *)v10,
           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v8);
  }
  return *(unsigned int *)(*((_QWORD *)this + 9) + 4 * v3);
}
