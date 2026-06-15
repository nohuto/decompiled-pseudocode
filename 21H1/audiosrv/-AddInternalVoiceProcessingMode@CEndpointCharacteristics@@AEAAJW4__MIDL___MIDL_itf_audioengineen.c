/*
 * XREFs of ?AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x180059AC4
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180059994 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180023530 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023A00 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023AF0 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180027A48 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180038CF4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z @ 0x18004B904 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_J@Z @ 0x1800557E0 (--A-$span@H$0-0@gsl@@QEBAAEAH_J@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180059F54 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x18005BF64 (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x18011A998 (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18011F4B8 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::AddInternalVoiceProcessingMode(
        unsigned __int64 *a1,
        __int64 a2,
        struct _GUID *a3,
        int a4)
{
  __int64 *v8; // rax
  unsigned __int64 *v9; // rdi
  SystemEffectDescriptor *v10; // rax
  int OverridingChain; // ebx
  SystemEffectDescriptor *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  struct _GUID v22; // [rsp+40h] [rbp-88h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-78h]
  _BYTE v24[56]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v25; // [rsp+90h] [rbp-38h]
  GUID v26; // [rsp+98h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( (*(unsigned int (__fastcall **)(unsigned __int64 *))(*a1 + 56))(a1) != 1 )
    return 0LL;
  if ( !*(_DWORD *)gsl::span<int,-1>::operator[](a1 + 8, 0LL) )
  {
    *(_DWORD *)gsl::span<int,-1>::operator[](a1 + 8, 0LL) = 1;
    v13 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](a1 + 19, 0LL);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v13);
    v14 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](a1 + 19, 0LL);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                         v14,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
    {
      *(_DWORD *)gsl::span<int,-1>::operator[](a1 + 213, 0LL) = 1;
      v16 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](a1 + 215, 0LL);
      if ( (unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                           v16,
                           v17,
                           &GUID_00000000_0000_0000_0000_000000000000) )
        goto LABEL_5;
      v15 = 1881LL;
    }
    else
    {
      v15 = 1877LL;
    }
LABEL_11:
    OverridingChain = -2147024882;
    goto LABEL_12;
  }
  v8 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](a1 + 19, 0LL);
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       v8,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
    goto LABEL_5;
  v18 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](a1 + 19, 0LL);
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                        v18,
                        &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
  {
    OverridingChain = -2147418113;
    v15 = 1889LL;
    goto LABEL_12;
  }
  v19 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](a1 + 19, 0LL);
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        v19,
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v15 = 1890LL;
    goto LABEL_11;
  }
  v20 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](a1 + 215, 0LL);
  if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                        v20,
                        v21,
                        &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
  {
    v15 = 1892LL;
    goto LABEL_11;
  }
LABEL_5:
  v26 = GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
  v23 = v24;
  v25 = 0LL;
  v22 = *a3;
  v9 = a1 + 209;
  v10 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](a1 + 209, 0LL);
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(v10, 2, 0, (__int64)v24);
  if ( OverridingChain < 0 )
  {
    v15 = 1898LL;
  }
  else
  {
    if ( a4 )
      return 0LL;
    v22 = *a3;
    v12 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](v9, 0LL);
    OverridingChain = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v12, &v22);
    if ( OverridingChain >= 0 )
      return 0LL;
    v15 = 1903LL;
  }
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain);
  return (unsigned int)OverridingChain;
}
