/*
 * XREFs of _lambda_624ff53c6311d881d87aa48034e46cd1_::operator() @ 0x18005B8E4
 * Callers:
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x18005AD64 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180022EB0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180023020 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023380 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800385D4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800598B4 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005B884 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18005BA90 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005BC70 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_624ff53c6311d881d87aa48034e46cd1_::operator()(
        CEndpointCharacteristics **a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned __int64 v6; // r12
  int v8; // r14d
  __int64 *SupportedConnectorModesInternal; // rsi
  int DefaultEffectChainClsids; // eax
  int v11; // edi
  __int64 v12; // rdi
  __int128 v13; // xmm6
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rax
  int OverridingChain; // eax
  unsigned int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  BOOL v25; // esi
  __int64 v26; // rax
  __int64 v27; // rdx
  SystemEffectDescriptor *v28; // rax
  __int64 v29[2]; // [rsp+48h] [rbp-91h] BYREF
  GUID v30; // [rsp+58h] [rbp-81h] BYREF
  struct _GUID v31; // [rsp+68h] [rbp-71h] BYREF
  __int64 v32; // [rsp+78h] [rbp-61h]
  _BYTE v33[56]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-21h]
  unsigned int v35[4]; // [rsp+C8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+57h]

  v6 = a2;
  v32 = a3;
  *(_QWORD *)&v31.Data1 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)*a1 + 207, a2);
  v8 = 0;
  v29[0] = 0LL;
  v29[1] = 0LL;
  SupportedConnectorModesInternal = (__int64 *)CEndpointCharacteristics::GetSupportedConnectorModesInternal(*a1, v6, 0);
  *(_QWORD *)&v30.Data1 = SupportedConnectorModesInternal;
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               *(SystemEffectDescriptor **)&v31.Data1,
                               (struct CAudioSignalProcessingModeArray *)v29,
                               v35,
                               0LL);
  v11 = DefaultEffectChainClsids;
  if ( DefaultEffectChainClsids < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6EA,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DefaultEffectChainClsids);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v29);
    v22 = *(_QWORD *)(a3 + 56);
    if ( !v22 )
      return (unsigned int)v11;
LABEL_15:
    LOBYTE(v21) = v22 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, v21);
    *(_QWORD *)(a3 + 56) = 0LL;
    return (unsigned int)v11;
  }
  if ( a5 <= 0 )
  {
LABEL_7:
    if ( (_DWORD)v6 != 1
      && !v8
      && (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
    {
      v25 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              SupportedConnectorModesInternal,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) != -1;
      v26 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
              (__int64)v33,
              a3);
      v30 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v11 = SystemEffectDescriptor::CreateOverridingChain(
              *(SystemEffectDescriptor **)&v31.Data1,
              &v30,
              1LL,
              (__int64)&unk_18019D6E8,
              1,
              v25,
              v26);
      if ( v11 < 0 )
      {
        v27 = 1793LL;
        goto LABEL_24;
      }
      v31 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      if ( !(unsigned int)CEndpointCharacteristics::IsAPOModeSupported(
                            *a1,
                            &v31,
                            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v6) )
      {
        *(_QWORD *)&v31.Data1 = v33;
        v34 = 0LL;
        v30 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v28 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                          (unsigned __int64 *)*a1 + 209,
                                          v6);
        v11 = SystemEffectDescriptor::CreateOverridingChain(v28, &v30, 0LL, 0LL, 2, v25, (__int64)v33);
        if ( v11 < 0 )
        {
          v27 = 1799LL;
LABEL_24:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v27,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v11);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v29);
          v22 = *(_QWORD *)(a3 + 56);
          if ( !v22 )
            return (unsigned int)v11;
          goto LABEL_15;
        }
      }
    }
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v29);
    v16 = *(_QWORD *)(a3 + 56);
    if ( v16 )
    {
      LOBYTE(v15) = v16 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v15);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
    return 0LL;
  }
  v12 = 0LL;
  while ( 1 )
  {
    v13 = (__int128)*off_18019C530[v12];
    *(_OWORD *)v35 = v13;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         v35) != -1 )
      break;
    v14 = 0;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v29, v35) != -1 )
      goto LABEL_12;
LABEL_6:
    ++v12;
    SupportedConnectorModesInternal = *(__int64 **)&v30.Data1;
    if ( v12 >= a5 )
      goto LABEL_7;
  }
  v14 = 1;
LABEL_12:
  v18 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
          (__int64)v33,
          a3);
  *(_OWORD *)v35 = v13;
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                      *(SystemEffectDescriptor **)&v31.Data1,
                      v35,
                      1LL,
                      (__int64)&unk_18019D6E8,
                      1,
                      v14,
                      v18);
  v20 = OverridingChain;
  if ( OverridingChain >= 0 )
  {
    ++v8;
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6F5,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v29);
  v24 = *(_QWORD *)(a3 + 56);
  if ( v24 )
  {
    LOBYTE(v23) = v24 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v23);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return v20;
}
