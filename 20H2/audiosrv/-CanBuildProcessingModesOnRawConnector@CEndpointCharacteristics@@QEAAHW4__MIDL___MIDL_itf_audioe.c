/*
 * XREFs of ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180020B64
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180049280 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180070028 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180022EB0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180023020 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x1800230C0 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800232F0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023380 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023470 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800234A0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800272FC (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  __int64 v2; // r15
  void *v4; // rdi
  unsigned int v5; // r14d
  SystemEffectDescriptor *v6; // rax
  SystemEffectDescriptor *v7; // rax
  SystemEffectDescriptor *v8; // rax
  char *v9; // rax
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rax
  BOOL v14; // ebx
  __int64 v15; // rax
  unsigned int v16; // ebx
  int v17; // edi
  __int64 SupportedConnectorModesInternal; // rax
  void *v20; // [rsp+20h] [rbp-20h] BYREF
  int v21; // [rsp+28h] [rbp-18h]
  int v22; // [rsp+2Ch] [rbp-14h]
  GUID v23; // [rsp+30h] [rbp-10h] BYREF

  v2 = a2;
  v4 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  v5 = 0;
  v23 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( a2 || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(this) )
  {
    v6 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)this + 1656, v2);
    SystemEffectDescriptor::ResolveAllOverridingChains(v6);
    v7 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)this + 1672, v2);
    SystemEffectDescriptor::ResolveAllOverridingChains(v7);
    v8 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)this + 1688, v2);
    SystemEffectDescriptor::ResolveAllOverridingChains(v8);
    v9 = (char *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((char *)this + 152, v2);
  }
  else
  {
    v9 = (char *)this + 168;
  }
  v10 = 0;
  v11 = *((_DWORD *)v9 + 2);
  if ( v11 <= 0 )
  {
LABEL_9:
    v10 = -1;
  }
  else
  {
    v12 = *(_QWORD *)v9;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + 16LL * v10) - *(_QWORD *)&v23.Data1;
      if ( !v13 )
        v13 = *(_QWORD *)(v12 + 16LL * v10 + 8) - *(_QWORD *)v23.Data4;
      if ( !v13 )
        break;
      if ( ++v10 >= v11 )
        goto LABEL_9;
    }
  }
  if ( v10 != -1 )
  {
    v14 = (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(this) || (_DWORD)v2 == 3;
    v15 = gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)this + 1672, v2);
    SystemEffectDescriptor::GetSupportedProcessingModes(v15, &v20, v14);
    v16 = 0;
    v17 = v21;
    if ( v21 > 0 )
    {
      while ( 1 )
      {
        v23 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](&v20, v16);
        SupportedConnectorModesInternal = CEndpointCharacteristics::GetSupportedConnectorModesInternal(
                                            this,
                                            (unsigned int)v2,
                                            0LL);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             SupportedConnectorModesInternal,
                             &v23) == -1 )
          break;
        if ( (int)++v16 >= v17 )
          goto LABEL_16;
      }
      v5 = 1;
    }
LABEL_16:
    v4 = v20;
  }
  if ( v4 )
    free(v4);
  return v5;
}
