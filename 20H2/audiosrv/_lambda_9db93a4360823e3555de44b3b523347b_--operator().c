/*
 * XREFs of _lambda_9db93a4360823e3555de44b3b523347b_::operator() @ 0x18005BCEC
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180059588 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_1ddcc36e30584de0b30e6aa0e02df019_::operator() @ 0x180119094 (_lambda_1ddcc36e30584de0b30e6aa0e02df019_--operator().c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18001E210 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180022EB0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023470 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 */

GUID *__fastcall lambda_9db93a4360823e3555de44b3b523347b_::operator()(int *a1, GUID *a2)
{
  GUID *v3; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rax
  int v7; // r8d
  __int64 v8; // rcx
  GUID v10; // [rsp+30h] [rbp-18h] BYREF

  v3 = (GUID *)(a1 + 3);
  v5 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                    (unsigned __int64 *)(*(_QWORD *)a1 + 152LL),
                    a1[2]);
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v5, v3) == -1 )
  {
    v6 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                      (unsigned __int64 *)(*(_QWORD *)a1 + 152LL),
                      a1[2]);
    v3 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v6,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
      v3 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  }
  v7 = a1[2];
  v8 = *(_QWORD *)a1;
  v10 = *v3;
  CEndpointCharacteristics::GetAliasedDeviceConnectorMode(v8, a2, v7, &v10, 1);
  return a2;
}
