/*
 * XREFs of ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180023A30
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001E950 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180021780 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x180021CB0 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180022600 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023B90 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18005A158 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // ecx
  int v5; // eax
  int v6; // edi
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 12);
  if ( v4 != v5 )
    goto LABEL_7;
  if ( v5 )
  {
    v6 = 2 * v4;
    if ( (v4 & 0x40000000) != 0 )
      return 0LL;
  }
  else
  {
    v6 = 1;
  }
  if ( (unsigned __int64)v6 > 0x7FFFFFF )
    return 0LL;
  v7 = _o__recalloc(*(_QWORD *)a1, v6, 16LL);
  if ( !v7 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 12) = v6;
  *(_QWORD *)a1 = v7;
LABEL_7:
  v8 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v4);
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v9 = a2[1];
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    *v8 = *a2;
    v8[1] = a2[1];
    v4 = *(_DWORD *)(a1 + 8);
  }
  result = 1LL;
  *(_DWORD *)(a1 + 8) = v4 + 1;
  return result;
}
