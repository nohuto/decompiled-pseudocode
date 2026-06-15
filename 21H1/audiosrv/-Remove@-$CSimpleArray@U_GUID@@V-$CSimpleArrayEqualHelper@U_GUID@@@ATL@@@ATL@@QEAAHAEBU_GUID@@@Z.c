/*
 * XREFs of ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18011F4B8
 * Callers:
 *     ?AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x180059AC4 (-AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180059C28 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C1B8 (-AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf.c)
 *     _lambda_1ddcc36e30584de0b30e6aa0e02df019_::operator() @ 0x180119C64 (_lambda_1ddcc36e30584de0b30e6aa0e02df019_--operator().c)
 *     _lambda_4b369aa96bdcdce7616c4f02413351c1_::operator() @ 0x18011A08C (_lambda_4b369aa96bdcdce7616c4f02413351c1_--operator().c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180023530 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(__int64 *a1, _QWORD *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r11

  v2 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(a1, a2);
  if ( v2 == -1 )
    return 0LL;
  else
    return ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v3, v2);
}
