/*
 * XREFs of ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011DFB8
 * Callers:
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800C6588 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 * Callees:
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180037DE8 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180038064 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048E74 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x1800C5A84 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetSystemEffect(
        CEndpointCharacteristics *this,
        struct _tagpropertykey *a2,
        struct _GUID *a3)
{
  struct _GUID v3; // xmm6
  __int64 v4; // rcx
  CEndpointCharacteristics *v5; // r10
  struct IAudioSystemEffects2 **v6; // r11
  __int64 v8; // rcx
  CEndpointCharacteristics *v9; // r10
  struct IAudioSystemEffects2 **v10; // r11
  CEndpointCharacteristics *v11; // r10
  struct IAudioSystemEffects2 **v12; // r11
  struct _GUID v13; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a3;
  if ( (unsigned int)operator==((__int64)a2, (__int64)&PKEY_FX_StreamEffectClsid) )
  {
    v13 = v3;
    return CEndpointCharacteristics::GetStreamEffect(v5, &v13, 1u, 0, 0LL, 0LL, v6);
  }
  else if ( (unsigned int)operator==(v4, (__int64)&PKEY_FX_ModeEffectClsid) )
  {
    v13 = v3;
    return CEndpointCharacteristics::GetModeEffect(v9, &v13, 1u, 0, 0LL, 0LL, v10);
  }
  else if ( (unsigned int)operator==(v8, (__int64)&PKEY_FX_EndpointEffectClsid) )
  {
    return CEndpointCharacteristics::GetEndpointEffect(v11, 1u, 0, 0LL, 0LL, v12);
  }
  else
  {
    return 2147942487LL;
  }
}
