/*
 * XREFs of ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x18005AD64
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800592F4 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180022EB0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180022F00 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023380 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023470 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180048090 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800598B4 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     _lambda_624ff53c6311d881d87aa48034e46cd1_::operator() @ 0x18005B8E4 (_lambda_624ff53c6311d881d87aa48034e46cd1_--operator().c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006C65C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddProcessingModeSupport_for_VSS(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  int v3; // r9d
  int v4; // ebx
  int v5; // r9d
  SystemEffectDescriptor *v7; // rbx
  __int64 *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  CEndpointCharacteristics *v11; // [rsp+40h] [rbp-29h] BYREF
  __int64 (__fastcall **v12)(); // [rsp+48h] [rbp-21h] BYREF
  CEndpointCharacteristics *v13; // [rsp+50h] [rbp-19h]
  __int64 (__fastcall ***v14)(); // [rsp+80h] [rbp+17h]
  GUID v15; // [rsp+90h] [rbp+27h] BYREF
  CLSID pClsid; // [rsp+A0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( (*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this)
    || (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v2)
    && !(unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform()
    || CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) < 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, 0) )
  {
    v11 = this;
    v12 = off_180154B88;
    v13 = this;
    v14 = &v12;
    v4 = lambda_624ff53c6311d881d87aa48034e46cd1_::operator()((unsigned int)&v11, 0, (unsigned int)&v12, v3, 3);
    if ( v4 >= 0 )
    {
      if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this) )
      {
        v13 = this;
        v12 = off_180155C88;
        v14 = &v12;
        v4 = lambda_624ff53c6311d881d87aa48034e46cd1_::operator()((unsigned int)&v11, 1, (unsigned int)&v12, v5, 4);
        if ( v4 < 0 )
        {
          v10 = 1816LL;
          goto LABEL_12;
        }
      }
      return 0LL;
    }
    v10 = 1807LL;
  }
  else
  {
    v7 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 207, 0LL);
    v8 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, 0LL);
    v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
           v8,
           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    v13 = this;
    v12 = off_180154B88;
    v14 = &v12;
    v15 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v4 = SystemEffectDescriptor::CreateOverridingChain(
           v7,
           &v15,
           1LL,
           (__int64)&unk_18019D6E8,
           1,
           v9 != -1,
           (__int64)&v12);
    if ( v4 >= 0 )
      return 0LL;
    v10 = 1745LL;
  }
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
