/*
 * XREFs of ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18001E890
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_cc7043d9a598c166c40b04e724fa0d9a__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x18004BBC0 (std--_Func_impl_no_alloc__lambda_cc7043d9a598c166c40b04e724fa0d9a__bool_WAVEFORMATEXTENSIBLE_con.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x1800598D0 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     _lambda_9db93a4360823e3555de44b3b523347b_::operator() @ 0x18005C48C (_lambda_9db93a4360823e3555de44b3b523347b_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_64ebcd876265745cd6de26faffeb735b__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180066070 (std--_Func_impl_no_alloc__lambda_64ebcd876265745cd6de26faffeb735b__bool_WAVEFORMATE_ea_180066070.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18011B7B4 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x18011BC48 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011F284 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z @ 0x18004B954 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x1801194E8 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x1801195B8 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18011C300 (-FindKey@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEBAHAEBU_GUID@.c)
 */

// Hidden C++ exception states: #wind=1
GUID *__fastcall CEndpointCharacteristics::GetAliasedDeviceConnectorMode(
        __int64 a1,
        GUID *a2,
        int a3,
        _QWORD *a4,
        int a5)
{
  int v6; // r11d
  __int64 v7; // rax
  int v8; // r10d
  GUID v9; // xmm0
  __int64 v10; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  int Key; // eax
  unsigned int v16; // edx
  __int64 v17; // r11
  __int64 v18; // rax
  _OWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  if ( (unsigned __int64)a3 >= *(_QWORD *)(a1 + 1720) )
  {
    v18 = gsl::fail_fast::fail_fast(
            (gsl::fail_fast *)v19,
            "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v18);
  }
  v7 = *(_QWORD *)(a1 + 1728);
  v8 = *(_DWORD *)(v7 + 24LL * a3 + 16);
  if ( v8 <= 0 )
    goto LABEL_3;
  v12 = *(_QWORD *)(v7 + 24LL * a3);
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 + 16LL * v6) - *a4;
    if ( !v13 )
      v13 = *(_QWORD *)(v12 + 16LL * v6 + 8) - a4[1];
    if ( !v13 )
      break;
    if ( ++v6 >= v8 )
      goto LABEL_3;
  }
  if ( v6 == -1 )
  {
LABEL_3:
    v9 = *(GUID *)a4;
  }
  else
  {
    v19[0] = *(_OWORD *)a4;
    v14 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](a1 + 1720, a3);
    Key = ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::FindKey(v14, v19);
    if ( Key == -1 )
    {
      v9 = GUID_00000000_0000_0000_0000_000000000000;
    }
    else
    {
      if ( Key < 0 || Key >= *(_DWORD *)(v17 + 16) )
      {
        ATL::_AtlRaiseException(0xC000008C, v16);
        __debugbreak();
      }
      v9 = *(GUID *)(*(_QWORD *)(v17 + 8) + 16LL * Key);
    }
  }
  v19[0] = v9;
  *a2 = v9;
  if ( !a5 )
  {
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v10 )
      *a2 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  return a2;
}
