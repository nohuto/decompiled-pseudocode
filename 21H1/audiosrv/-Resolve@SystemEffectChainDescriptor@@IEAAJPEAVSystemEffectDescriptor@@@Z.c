/*
 * XREFs of ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180052D20
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18001E950 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180021780 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x180021CB0 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180022600 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x180023430 (-GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180023740 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023B90 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052DD0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemEffectChainDescriptor::Resolve(
        SystemEffectChainDescriptor *this,
        struct SystemEffectDescriptor *a2)
{
  unsigned int v2; // ebp
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rax
  std::_Ref_count_base *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  SystemEffectChainDescriptor *v12; // [rsp+50h] [rbp+8h] BYREF
  struct SystemEffectDescriptor *v13; // [rsp+58h] [rbp+10h] BYREF

  v4 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  }
  v5 = *((_QWORD *)this + 3);
  v6 = (std::_Ref_count_base *)v4;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 0;
  v12 = this;
  v13 = a2;
  v7 = *(_QWORD *)(v5 + 56);
  if ( !v7 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    goto LABEL_13;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, struct SystemEffectDescriptor **, SystemEffectChainDescriptor **))(*(_QWORD *)v7 + 16LL))(
         v7,
         &v13,
         &v12);
  v2 = v8;
  if ( v8 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_9;
  }
  v9 = *((_DWORD *)this + 4);
  if ( !v9 )
  {
    v6 = 0LL;
    LOBYTE(v9) = 0;
    if ( v4 )
    {
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
      v9 = *((_DWORD *)this + 4);
    }
  }
  if ( (v9 & 1) != 0 )
    *((_BYTE *)this + 20) = 1;
  v2 = 0;
LABEL_9:
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return v2;
}
