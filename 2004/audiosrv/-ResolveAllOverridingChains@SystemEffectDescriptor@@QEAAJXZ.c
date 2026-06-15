/*
 * XREFs of ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180023740
 * Callers:
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800211E4 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x180021CB0 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180022600 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180023020 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180023110 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180023580 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800236A0 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023B90 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002782C (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002797C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180052E20 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069C20 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::ResolveAllOverridingChains(SystemEffectDescriptor *this)
{
  int v3; // ebx
  volatile signed __int32 **v4; // rsi
  int v5; // r15d
  struct _RTL_CRITICAL_SECTION *v6; // r12
  unsigned int v7; // edx
  volatile signed __int32 **v8; // r14
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // r13
  __int64 v12; // rax
  volatile signed __int32 **v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  SystemEffectChainDescriptor **v16; // rax
  int v17; // eax
  volatile signed __int32 **v18; // r14
  volatile signed __int32 *v19; // rbx
  int v20[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !*((_BYTE *)this + 52) )
    return 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v8 = 0LL;
  *(_QWORD *)v20 = 0LL;
  v9 = 0LL;
  v21 = 0LL;
  v5 = 0;
  v10 = 0;
  if ( *((int *)this + 10) > 0 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 < 0 || v10 >= *((_DWORD *)this + 10) )
      {
        ATL::_AtlRaiseException(0xC000008C, v7);
        goto LABEL_29;
      }
      v11 = *((_QWORD *)this + 4);
      if ( (_DWORD)v9 == v5 )
      {
        if ( v5 )
        {
          v5 = 2 * v9;
          if ( (v9 & 0x40000000) != 0 )
            goto LABEL_42;
        }
        else
        {
          v5 = 1;
        }
        if ( (unsigned __int64)v5 > 0x7FFFFFF || (v12 = _o__recalloc(v8, v5, 16LL)) == 0 )
        {
LABEL_42:
          v5 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            v20[0]);
          goto LABEL_6;
        }
        HIDWORD(v21) = v5;
        v8 = (volatile signed __int32 **)v12;
        *(_QWORD *)v20 = v12;
      }
      v13 = &v8[2 * (int)v9];
      if ( v13 )
      {
        *v13 = 0LL;
        v13[1] = 0LL;
        v14 = *(_QWORD *)(v11 + v15 + 8);
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
          v5 = HIDWORD(v21);
          LODWORD(v9) = v21;
          v8 = *(volatile signed __int32 ***)v20;
        }
        *v13 = *(volatile signed __int32 **)(v11 + v15);
        v13[1] = *(volatile signed __int32 **)(v11 + v15 + 8);
      }
      v9 = (unsigned int)(v9 + 1);
      LODWORD(v21) = v9;
      ++v10;
      v15 += 16LL;
    }
    while ( v10 < *((_DWORD *)this + 10) );
  }
  v3 = 0;
  if ( (int)v9 <= 0 )
  {
LABEL_5:
    v5 = 0;
  }
  else
  {
    v4 = v8;
    while ( 1 )
    {
      if ( v3 < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, v7);
        __debugbreak();
      }
      if ( *((_BYTE *)*v4 + 20) )
      {
        v16 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                v20,
                                                (unsigned int)v3);
        v17 = SystemEffectChainDescriptor::Resolve(*v16, this);
        v5 = v17;
        if ( v17 < 0 )
          break;
      }
      ++v3;
      v4 += 2;
      if ( v3 >= (int)v9 )
        goto LABEL_5;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v17,
      v20[0]);
  }
LABEL_6:
  if ( v8 )
  {
    if ( (int)v9 > 0 )
    {
      v18 = v8 + 1;
      do
      {
        v19 = *v18;
        if ( *v18 )
        {
          if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v19);
          }
        }
        v18 += 2;
        --v9;
      }
      while ( v9 );
      v8 = *(volatile signed __int32 ***)v20;
    }
    free(v8);
  }
  if ( v6 )
LABEL_29:
    LeaveCriticalSection(v6);
  return (unsigned int)v5;
}
