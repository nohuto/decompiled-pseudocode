/*
 * XREFs of ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011C570
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023510 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180048F90 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180020CF0 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180022F00 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023380 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800234A0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetGfx(
        CEndpointCharacteristics *this,
        int a2,
        struct ICompositeSystemEffect **a3,
        struct IAudioProcessingObject **a4)
{
  unsigned __int64 v4; // rbx
  BOOL v8; // eax
  GUID *v9; // rcx
  __int64 v10; // rax
  GUID v12; // [rsp+60h] [rbp-18h] BYREF

  v4 = a2;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a2 == 3 || (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a2) )
    return 0LL;
  v8 = CEndpointCharacteristics::AreEnhancementsEnabled(this);
  v9 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( !v8 )
    v9 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v12 = *v9;
  v10 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 209, v4);
  return CEndpointCharacteristics::GetInitializedSystemEffectInterface(
           (__int64)this,
           v10,
           2,
           1,
           (__int128 *)&v12,
           0,
           0,
           v4,
           a3,
           a4,
           0LL);
}
