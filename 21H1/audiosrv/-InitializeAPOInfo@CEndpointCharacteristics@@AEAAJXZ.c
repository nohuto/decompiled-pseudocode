/*
 * XREFs of ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18011E100
 * Callers:
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x180120244 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023A00 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002797C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180037DE8 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180038064 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180038CF4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180048E74 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x18011C1A8 (-FindCriticalAPO@CEndpointCharacteristics@@AEAAHPEAUIAudioSystemEffects2@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::InitializeAPOInfo(CEndpointCharacteristics *this)
{
  unsigned int v2; // esi
  int *v3; // r14
  __int64 v4; // rax
  int SupportedProcessingModes; // eax
  unsigned int v6; // edi
  signed int v7; // edi
  struct IAudioSystemEffects2 *v8; // rcx
  unsigned int v9; // esi
  int *v10; // r14
  __int64 v11; // rax
  int v12; // eax
  signed int v13; // edi
  struct IAudioSystemEffects2 *v14; // rcx
  unsigned int v15; // edi
  int *v16; // rsi
  int EndpointEffect; // r14d
  struct IAudioSystemEffects2 *v18; // rcx
  struct IAudioSystemEffects2 *v20; // [rsp+40h] [rbp-19h] BYREF
  __int64 v21; // [rsp+48h] [rbp-11h] BYREF
  __int64 v22; // [rsp+50h] [rbp-9h]
  struct _GUID v23; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v24[4]; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v24[0] = 0;
  v24[1] = 1;
  v24[2] = 3;
  *((_DWORD *)this + 61) = 1;
  *(_OWORD *)((char *)this + 248) = 0LL;
  v2 = 0;
  v3 = v24;
  while ( 1 )
  {
    v21 = 0LL;
    v22 = 0LL;
    v4 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 207, v2);
    SupportedProcessingModes = SystemEffectDescriptor::GetSupportedProcessingModes(v4, (__int64)&v21, 1);
    v6 = SupportedProcessingModes;
    if ( SupportedProcessingModes < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E9,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SupportedProcessingModes);
      goto LABEL_45;
    }
    v7 = 0;
    if ( (int)v22 > 0 )
      break;
LABEL_11:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
    ++v2;
    ++v3;
    if ( v2 >= 3 )
      goto LABEL_16;
  }
  while ( 1 )
  {
    v20 = 0LL;
    v23 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v21, v7);
    if ( (int)CEndpointCharacteristics::GetStreamEffect(this, &v23, 1u, *v3, 0LL, 0LL, &v20) < 0 )
      goto LABEL_7;
    v8 = v20;
    if ( v20 )
      break;
LABEL_8:
    if ( v8 )
      ((void (__fastcall *)(struct IAudioSystemEffects2 *))v8->lpVtbl->Release)(v8);
    if ( ++v7 >= (int)v22 )
      goto LABEL_11;
  }
  if ( !(unsigned int)CEndpointCharacteristics::FindCriticalAPO((CEndpointCharacteristics *)v20, v20) )
  {
LABEL_7:
    v8 = v20;
    goto LABEL_8;
  }
  *((_DWORD *)this + 63) = 1;
  if ( v20 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v20->lpVtbl->Release)(v20);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
LABEL_16:
  v9 = 0;
  v10 = v24;
  while ( 2 )
  {
    v21 = 0LL;
    v22 = 0LL;
    v11 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 209, v9);
    v12 = SystemEffectDescriptor::GetSupportedProcessingModes(v11, (__int64)&v21, 1);
    v6 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2FE,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v12);
LABEL_45:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
      return v6;
    }
    v13 = 0;
    if ( (int)v22 <= 0 )
    {
LABEL_26:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
      ++v9;
      ++v10;
      if ( v9 >= 3 )
        goto LABEL_31;
      continue;
    }
    break;
  }
  while ( 2 )
  {
    v20 = 0LL;
    v23 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v21, v13);
    if ( (int)CEndpointCharacteristics::GetModeEffect(this, &v23, 1u, *v10, 0LL, 0LL, &v20) < 0 )
    {
LABEL_22:
      v14 = v20;
LABEL_23:
      if ( v14 )
        ((void (__fastcall *)(struct IAudioSystemEffects2 *))v14->lpVtbl->Release)(v14);
      if ( ++v13 >= (int)v22 )
        goto LABEL_26;
      continue;
    }
    break;
  }
  v14 = v20;
  if ( !v20 )
    goto LABEL_23;
  if ( !(unsigned int)CEndpointCharacteristics::FindCriticalAPO((CEndpointCharacteristics *)v20, v20) )
    goto LABEL_22;
  *((_DWORD *)this + 64) = 1;
  if ( v20 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v20->lpVtbl->Release)(v20);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
LABEL_31:
  v15 = 0;
  v16 = v24;
  while ( 2 )
  {
    v20 = 0LL;
    EndpointEffect = CEndpointCharacteristics::GetEndpointEffect(this, 1u, *v16, 0LL, 0LL, &v20);
    if ( EndpointEffect < 0 )
    {
LABEL_35:
      v18 = v20;
LABEL_36:
      if ( v18 )
        ((void (__fastcall *)(struct IAudioSystemEffects2 *))v18->lpVtbl->Release)(v18);
      ++v15;
      ++v16;
      if ( v15 >= 3 )
        goto LABEL_42;
      continue;
    }
    break;
  }
  v18 = v20;
  if ( !v20 )
    goto LABEL_36;
  if ( !(unsigned int)CEndpointCharacteristics::FindCriticalAPO((CEndpointCharacteristics *)v20, v20) )
    goto LABEL_35;
  *((_DWORD *)this + 65) = 1;
  if ( v20 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v20->lpVtbl->Release)(v20);
LABEL_42:
  *((_QWORD *)this + 30) = 1LL;
  return (unsigned int)EndpointEffect;
}
