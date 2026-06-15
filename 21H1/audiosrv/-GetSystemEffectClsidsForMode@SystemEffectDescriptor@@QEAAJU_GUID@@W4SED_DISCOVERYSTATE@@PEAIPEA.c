/*
 * XREFs of ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x180021560
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021370 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C1B8 (-AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x18002174C (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 *     ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x180023430 (-GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180023530 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetSystemEffectClsidsForMode(
        __int64 a1,
        __int128 *a2,
        int a3,
        _DWORD *a4,
        SIZE_T cb,
        unsigned int a6)
{
  unsigned int OverridingChainDescriptorIndex; // eax
  void *v10; // rbx
  __int64 v11; // r11
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v16; // rdx
  void *v17; // rax
  int v18[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v19; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v19 = *a2;
  *(_OWORD *)v18 = v19;
  OverridingChainDescriptorIndex = SystemEffectDescriptor::GetOverridingChainDescriptorIndex(a1, v18, a6);
  v10 = 0LL;
  if ( OverridingChainDescriptorIndex == -1 )
  {
    if ( !*(_QWORD *)(a1 + 16)
      || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*(_QWORD *)(a1 + 16), &v19) == -1 )
    {
      v11 = 0LL;
    }
  }
  else
  {
    v11 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                       a1 + 32,
                       OverridingChainDescriptorIndex);
  }
  if ( !v11 && a3 == 1 )
    v11 = *(_QWORD *)(a1 + 16);
  v12 = (_QWORD *)cb;
  *a4 = 0;
  if ( v12 )
    *v12 = 0LL;
  if ( !v11 )
    return 0LL;
  v13 = 40LL;
  if ( a3 == 1 )
    v13 = 56LL;
  v14 = v13 + v11;
  if ( !v12 || *(int *)(v14 + 8) <= 0 )
  {
LABEL_11:
    *a4 = *(_DWORD *)(v14 + 8);
    return 0LL;
  }
  v16 = *(int *)(v14 + 8);
  cb = 0LL;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&cb, v16, 16LL) >= 0 && cb <= 0x7FFFFFFF )
  {
    v17 = CoTaskMemAlloc((unsigned int)cb);
    v10 = v17;
    if ( v17 )
    {
      memcpy_0(v17, *(const void **)v14, 16LL * *(int *)(v14 + 8));
      *v12 = v10;
      CoTaskMemFree(0LL);
      goto LABEL_11;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x272,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v18[0]);
  CoTaskMemFree(v10);
  return 2147942414LL;
}
