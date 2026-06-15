/*
 * XREFs of ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800686BC
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180022600 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023B90 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002797C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x1800293FC (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x1800598D0 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18005C230 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18011B7B4 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180027A48 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180038CE4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x18011F64C (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(__int64 a1, __int64 a2)
{
  int v2; // edi
  void *v5; // rax
  int v6; // eax
  int i; // edi

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == *(_DWORD *)(a2 + 8) )
  {
    while ( v2 > 0 )
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(a1, (unsigned int)--v2);
  }
  else
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a1);
    v5 = calloc(*(int *)(a2 + 8), 0x10uLL);
    *(_QWORD *)a1 = v5;
    if ( v5 )
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 8);
  }
  v6 = *(_DWORD *)(a2 + 8);
  for ( i = 0; i < v6; ++i )
  {
    if ( i < 0 || i >= v6 )
    {
      ATL::_AtlRaiseException(0xC000008C, a2);
      JUMPOUT(0x18006874FLL);
    }
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a1, (_OWORD *)(*(_QWORD *)a2 + 16LL * i));
    v6 = *(_DWORD *)(a2 + 8);
  }
  return a1;
}
