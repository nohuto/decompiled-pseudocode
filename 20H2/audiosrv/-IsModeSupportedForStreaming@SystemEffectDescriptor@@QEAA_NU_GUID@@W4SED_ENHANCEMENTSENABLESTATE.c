/*
 * XREFs of ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x180022C60
 * Callers:
 *     ?IsSFXModeSupported@CEndpointCharacteristics@@AEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180037700 (-IsSFXModeSupported@CEndpointCharacteristics@@AEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x180048C4C (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800498BC (-CheckForPreferredStreamFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005BC70 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x180022DB0 (-GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180022EB0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800232F0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 */

bool __fastcall SystemEffectDescriptor::IsModeSupportedForStreaming(__int64 a1, __int128 *a2, int a3)
{
  __int128 v4; // xmm0
  unsigned int OverridingChainDescriptorIndex; // eax
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // edx
  _QWORD *v9; // r8
  __int64 v10; // rax
  bool v11; // zf
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF

  if ( !a3 )
  {
    v11 = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(a1, a2) == -1;
    return !v11;
  }
  v4 = *a2;
  v11 = *(_BYTE *)(a1 + 52) == 0;
  v13 = *a2;
  OverridingChainDescriptorIndex = SystemEffectDescriptor::GetOverridingChainDescriptorIndex(a1, &v13, v11);
  if ( OverridingChainDescriptorIndex == -1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( !v6 )
      goto LABEL_9;
    v7 = *(_DWORD *)(v6 + 8);
    v8 = 0;
    if ( v7 <= 0 )
      goto LABEL_9;
    while ( 1 )
    {
      v9 = (_QWORD *)(*(_QWORD *)v6 + 16LL * v8);
      v10 = *v9 - v4;
      if ( *v9 == (_QWORD)v4 )
        v10 = v9[1] - *((_QWORD *)&v4 + 1);
      if ( !v10 )
        break;
      if ( ++v8 >= v7 )
        goto LABEL_9;
    }
    if ( v8 == -1 )
LABEL_9:
      v6 = 0LL;
    v11 = v6 == 0;
    return !v11;
  }
  return *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                      a1 + 32,
                      OverridingChainDescriptorIndex) != 0LL;
}
