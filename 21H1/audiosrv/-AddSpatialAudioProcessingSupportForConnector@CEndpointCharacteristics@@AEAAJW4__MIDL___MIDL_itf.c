/*
 * XREFs of ?AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C1B8
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180059994 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x180021560 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x1800233B0 (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180023530 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180023580 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023A00 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023AF0 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180027A48 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180038CF4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x180049144 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z @ 0x18004B904 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_J@Z @ 0x1800557E0 (--A-$span@H$0-0@gsl@@QEBAAEAH_J@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180059F54 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18005A058 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x18011A998 (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18011F4B8 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::AddSpatialAudioProcessingSupportForConnector(
        CEndpointCharacteristics *this,
        int a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 *v4; // r15
  __int64 v5; // rcx
  SystemEffectDescriptor *v6; // rbx
  __int64 ChainDescriptorForMode; // rax
  __int64 *v8; // rax
  int v9; // eax
  int SystemEffectClsidsForMode; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  SystemEffectDescriptor *v19; // rsi
  __int64 *v20; // rax
  int v21; // eax
  __int64 *v22; // rsi
  unsigned int v23; // ebx
  GUID **v24; // r12
  _OWORD *v25; // rdx
  SystemEffectDescriptor *v26; // r12
  int OverridingChain; // eax
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  SystemEffectDescriptor *v34; // [rsp+40h] [rbp-79h] BYREF
  GUID v35; // [rsp+50h] [rbp-69h] BYREF
  __int64 v36; // [rsp+60h] [rbp-59h] BYREF
  __m256i v37; // [rsp+68h] [rbp-51h]
  __int64 *v38; // [rsp+98h] [rbp-21h]
  __m256i v39; // [rsp+A0h] [rbp-19h] BYREF
  GUID v40; // [rsp+C0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v2 = a2;
  v40 = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5;
  v39.m256i_i64[0] = (__int64)this;
  *(GUID *)&v39.m256i_u64[1] = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5;
  v39.m256i_i32[6] = a2;
  v4 = (unsigned __int64 *)((char *)this + 152);
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a2) )
  {
    if ( *(_DWORD *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v4, v2) + 8) == 1 )
    {
      v5 = 1672LL;
      if ( (_DWORD)v2 != 1 )
        v5 = 1688LL;
      v6 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                       (unsigned __int64 *)((char *)this + v5),
                                       v2);
      v35 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      ChainDescriptorForMode = SystemEffectDescriptor::GetChainDescriptorForMode((__int64)v6, (__int128 *)&v35, 1LL);
      if ( ChainDescriptorForMode
        && *(_DWORD *)(ChainDescriptorForMode + 48)
        && (unsigned int)CEndpointCharacteristics::FormFactor(this) == 9 )
      {
        v20 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v4, v2);
        v21 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                v20,
                &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
        v36 = (__int64)off_180156CB8;
        v37 = v39;
        v38 = &v36;
        v35 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        SystemEffectClsidsForMode = SystemEffectDescriptor::CreateOverridingChain(
                                      v6,
                                      &v35,
                                      1LL,
                                      (__int64)&v40,
                                      1,
                                      v21 != -1,
                                      (__int64)&v36);
        if ( SystemEffectClsidsForMode < 0 )
        {
          v14 = 1513LL;
          goto LABEL_13;
        }
        return 0LL;
      }
      v8 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v4, v2);
      v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
             v8,
             &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v38 = 0LL;
      v35 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      SystemEffectClsidsForMode = SystemEffectDescriptor::CreateOverridingChain(
                                    v6,
                                    &v35,
                                    1LL,
                                    (__int64)&v40,
                                    1,
                                    v9 != -1,
                                    (__int64)&v36);
      if ( SystemEffectClsidsForMode >= 0 )
        return 0LL;
      v14 = 1518LL;
      goto LABEL_13;
    }
    v34 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 209, v2);
    v22 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v4, v2);
    v35 = (GUID)0LL;
    v23 = 0;
    v24 = off_1801577C0;
    do
    {
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v22, *v24) != -1 )
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)&v35, v25);
      ++v23;
      ++v24;
    }
    while ( v23 < 4 );
    v26 = v34;
    if ( *(int *)v35.Data4 <= 0
      || (v38 = 0LL,
          OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                              v34,
                              (struct CAudioSignalProcessingModeArray *)&v35,
                              1u,
                              (__int64)&v40,
                              1,
                              1,
                              (__int64)&v36),
          SystemEffectClsidsForMode = OverridingChain,
          OverridingChain >= 0) )
    {
      if ( (_DWORD)v2 == 1 )
        goto LABEL_50;
      v28 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v4, v2);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v28,
                           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
        goto LABEL_50;
      v29 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v4, v2);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v29,
                           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
        goto LABEL_50;
      v30 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v4, v2);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            v30,
                            &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
      {
        SystemEffectClsidsForMode = -2147024882;
        v16 = 2147942414LL;
        v15 = 1553LL;
        goto LABEL_16;
      }
      v31 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v4, v2);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                            v31,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        SystemEffectClsidsForMode = -2147418113;
        v16 = 2147549183LL;
        v15 = 1556LL;
        goto LABEL_16;
      }
      v32 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((unsigned __int64 *)this + 215, v2);
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            v32,
                            v33,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        SystemEffectClsidsForMode = -2147024882;
        v16 = 2147942414LL;
        v15 = 1557LL;
        goto LABEL_16;
      }
      *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)this + 213, v2) = 1;
      v38 = 0LL;
      *(GUID *)v39.m256i_i8 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                          v26,
                          &v39,
                          1LL,
                          (__int64)&v40,
                          1,
                          0,
                          (__int64)&v36);
      SystemEffectClsidsForMode = OverridingChain;
      if ( OverridingChain >= 0 )
      {
LABEL_50:
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v35);
        return 0LL;
      }
      v15 = 1561LL;
    }
    else
    {
      v15 = 1542LL;
    }
    v16 = (unsigned int)OverridingChain;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v16);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v35);
    return (unsigned int)SystemEffectClsidsForMode;
  }
  v12 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v4, v2);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v12);
  v13 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v4, v2);
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        v13,
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v14 = 1456LL;
LABEL_11:
    SystemEffectClsidsForMode = -2147024882;
    goto LABEL_13;
  }
  *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)this + 213, v2) = 1;
  v17 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((unsigned __int64 *)this + 215, v2);
  if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                        v17,
                        v18,
                        &GUID_00000000_0000_0000_0000_000000000000) )
  {
    v14 = 1460LL;
    goto LABEL_11;
  }
  v19 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 209, v2);
  LODWORD(v34) = 0;
  v35 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  SystemEffectClsidsForMode = SystemEffectDescriptor::GetSystemEffectClsidsForMode(
                                (__int64)v19,
                                (__int128 *)&v35,
                                0,
                                &v34,
                                0LL,
                                1u);
  if ( SystemEffectClsidsForMode >= 0 )
  {
    if ( (_DWORD)v34 && (unsigned int)CEndpointCharacteristics::FormFactor(this) == 9 )
    {
      v36 = (__int64)off_180156CB8;
      v37 = v39;
      v38 = &v36;
      v35 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      SystemEffectClsidsForMode = SystemEffectDescriptor::CreateOverridingChain(
                                    v19,
                                    &v35,
                                    1LL,
                                    (__int64)&v40,
                                    1,
                                    1,
                                    (__int64)&v36);
      if ( SystemEffectClsidsForMode < 0 )
      {
        v14 = 1478LL;
        goto LABEL_13;
      }
    }
    else
    {
      v38 = 0LL;
      v35 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      SystemEffectClsidsForMode = SystemEffectDescriptor::CreateOverridingChain(
                                    v19,
                                    &v35,
                                    1LL,
                                    (__int64)&v40,
                                    1,
                                    1,
                                    (__int64)&v36);
      if ( SystemEffectClsidsForMode < 0 )
      {
        v14 = 1482LL;
        goto LABEL_13;
      }
    }
    v38 = 0LL;
    v35 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    SystemEffectClsidsForMode = SystemEffectDescriptor::CreateOverridingChain(
                                  v19,
                                  &v35,
                                  1LL,
                                  (__int64)&v40,
                                  2,
                                  0,
                                  (__int64)&v36);
    if ( SystemEffectClsidsForMode >= 0 )
      return 0LL;
    v14 = 1486LL;
  }
  else
  {
    v14 = 1468LL;
  }
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)SystemEffectClsidsForMode);
  return (unsigned int)SystemEffectClsidsForMode;
}
