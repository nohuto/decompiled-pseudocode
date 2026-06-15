/*
 * XREFs of ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048E74
 * Callers:
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180049704 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18011DFB8 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18011E100 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021370 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x1800233B0 (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180023580 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800236A0 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023A00 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetEndpointEffect(
        CEndpointCharacteristics *this,
        unsigned int a2,
        int a3,
        struct ICompositeSystemEffect **a4,
        struct IAudioProcessingObject **a5,
        struct IAudioSystemEffects2 **a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  GUID v13; // [rsp+60h] [rbp-48h] BYREF

  v6 = 0;
  v8 = a3;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a3) )
  {
    if ( a2
      || (v10 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 211, v8),
          v13 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3,
          SystemEffectDescriptor::GetChainDescriptorForMode(v10, (__int128 *)&v13, *(_BYTE *)(v10 + 52) == 0))
      && *(_DWORD *)(CEndpointCharacteristics::GetSupportedConnectorModesInternal(this, v8, 0) + 8) <= 1u )
    {
      v13 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v11 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 211, v8);
      return (unsigned int)CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                             (__int64)this,
                             v11,
                             3,
                             1,
                             (__int128 *)&v13,
                             a2,
                             0,
                             v8,
                             a4,
                             a5,
                             a6);
    }
  }
  return v6;
}
