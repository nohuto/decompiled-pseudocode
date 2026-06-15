/*
 * XREFs of ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800599B8
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800598B4 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180059BBC (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005BB18 (-AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf.c)
 * Callees:
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800233B0 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x180028D7C (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x1800291A4 (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800385D4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052730 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18005A0A0 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18005A464 (-RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArra.c)
 *     ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18005B7C4 (-MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV-$function@$$A6AJPEAVSystemEffectDescriptor.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005B884 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // r9d
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int EffectChain; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, __int64); // rax
  __int64 v27; // rax
  __int64 v28; // rax
  std::_Ref_count_base *v29[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v30; // [rsp+48h] [rbp-61h] BYREF
  __int64 v31; // [rsp+50h] [rbp-59h]
  __int64 v32; // [rsp+58h] [rbp-51h] BYREF
  __int64 v33; // [rsp+60h] [rbp-49h]
  __int64 v34; // [rsp+68h] [rbp-41h] BYREF
  __int64 v35; // [rsp+70h] [rbp-39h]
  __int64 v36; // [rsp+78h] [rbp-31h] BYREF
  __int64 v37; // [rsp+80h] [rbp-29h]
  _BYTE v38[72]; // [rsp+90h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+47h]

  SystemEffectDescriptor::RemoveModesFromOverridingChains(this, a2);
  v36 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  SystemEffectDescriptor::SeparateStreamingModes(
    this,
    a2,
    (struct CAudioSignalProcessingModeArray *)&v36,
    (struct CAudioSignalProcessingModeArray *)&v34);
  v32 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  SystemEffectDescriptor::CreateOverrideChainLists((__int64)this, a3, a4, a5, (__int64)&v32, (__int64)&v30);
  v11 = a7;
  if ( (int)v37 <= 0 )
    goto LABEL_2;
  *(_OWORD *)v29 = 0LL;
  EffectChain = SystemEffectChainDescriptor::CreateEffectChain((unsigned int)&v36, v31, v30, 0, 0LL, (__int64)v29);
  v14 = EffectChain;
  if ( EffectChain < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15A,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)EffectChain);
    if ( v29[1] )
      std::_Ref_count_base::_Decref(v29[1]);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v30);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v32);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v34);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v36);
    v11 = a7;
    goto LABEL_23;
  }
  if ( !*(_QWORD *)(a7 + 56)
    || (v19 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                v38,
                a7),
        v20 = SystemEffectChainDescriptor::MarkAsUnresolved(v29[0], v19),
        v14 = v20,
        v20 >= 0) )
  {
    if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                          (__int64)this + 32,
                          v29) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15C,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL);
      if ( v29[1] )
        std::_Ref_count_base::_Decref(v29[1]);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v30);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v32);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v34);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v36);
      v25 = *(_QWORD *)(a7 + 56);
      if ( !v25 )
        return 2147942414LL;
      v26 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 32LL);
      goto LABEL_43;
    }
    if ( v29[1] )
      std::_Ref_count_base::_Decref(v29[1]);
LABEL_2:
    if ( (int)v35 <= 0 )
    {
LABEL_10:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v30);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v32);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v34);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v36);
      v16 = *(_QWORD *)(a7 + 56);
      if ( v16 )
      {
        LOBYTE(v15) = v16 != a7;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v15);
        *(_QWORD *)(a7 + 56) = 0LL;
      }
      return 0LL;
    }
    *(_OWORD *)v29 = 0LL;
    if ( a6 == 1 && (v27 = *((_QWORD *)this + 2)) != 0 )
    {
      v12 = *(_QWORD *)(v27 + 56);
      v13 = *(_DWORD *)(v27 + 64);
    }
    else
    {
      v12 = 0LL;
      v13 = 0;
    }
    v14 = SystemEffectChainDescriptor::CreateEffectChain((unsigned int)&v34, v33, v32, v13, v12, (__int64)v29);
    if ( v14 < 0 )
    {
      v23 = 359LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_29;
    }
    if ( *(_QWORD *)(a7 + 56) )
    {
      v28 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
              v38,
              a7);
      v14 = SystemEffectChainDescriptor::MarkAsUnresolved(v29[0], v28);
      if ( v14 < 0 )
      {
        v23 = 360LL;
        goto LABEL_28;
      }
    }
    if ( (unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                         (__int64)this + 32,
                         v29) )
    {
      if ( v29[1] )
        std::_Ref_count_base::_Decref(v29[1]);
      goto LABEL_10;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x169,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    if ( v29[1] )
      std::_Ref_count_base::_Decref(v29[1]);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v30);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v32);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v34);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v36);
    v25 = *(_QWORD *)(a7 + 56);
    if ( !v25 )
      return 2147942414LL;
    v26 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 32LL);
LABEL_43:
    LOBYTE(v24) = v25 != a7;
    v26(v25, v24);
    *(_QWORD *)(a7 + 56) = 0LL;
    return 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15B,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v20);
LABEL_29:
  if ( v29[1] )
    std::_Ref_count_base::_Decref(v29[1]);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v30);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v32);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v34);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v36);
LABEL_23:
  v22 = *(_QWORD *)(v11 + 56);
  if ( v22 )
  {
    LOBYTE(v21) = v22 != v11;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, v21);
    *(_QWORD *)(v11 + 56) = 0LL;
  }
  return (unsigned int)v14;
}
