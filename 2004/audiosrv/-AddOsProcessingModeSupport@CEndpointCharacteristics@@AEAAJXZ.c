/*
 * XREFs of ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180059A94
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x180055030 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180048850 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x180059BC4 (-AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180059D28 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x18005B504 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C2B8 (-AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddOsProcessingModeSupport(CEndpointCharacteristics *this)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  struct _GUID v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this) )
    goto LABEL_6;
  v2 = CEndpointCharacteristics::AddSpatialAudioProcessingSupportForConnector(this, eHostProcessConnector);
  v3 = v2;
  if ( v2 < 0 )
  {
    v7 = 1409LL;
  }
  else
  {
    if ( !(unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this)
      || (v2 = CEndpointCharacteristics::AddSpatialAudioProcessingSupportForConnector(this, eOffloadConnector),
          v3 = v2,
          v2 >= 0) )
    {
      v3 = 0;
      goto LABEL_5;
    }
    v7 = 1413LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v2);
LABEL_5:
  if ( v3 < 0 )
  {
    v8 = 2194LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
LABEL_6:
  v3 = CEndpointCharacteristics::AddProcessingModeSupport_for_VSS(this);
  if ( v3 < 0 )
  {
    v8 = 2195LL;
    goto LABEL_19;
  }
  v11 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v3 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eHostProcessConnector, &v11);
  if ( v3 < 0 )
  {
    v8 = 2196LL;
    goto LABEL_19;
  }
  v11 = GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0;
  v3 = ((__int64 (__fastcall *)(CEndpointCharacteristics *, __int64, struct _GUID *, _QWORD))CEndpointCharacteristics::AddInternalVoiceProcessingMode)(
         this,
         v4,
         &v11,
         0LL);
  if ( v3 < 0 )
  {
    v8 = 2197LL;
    goto LABEL_19;
  }
  v11 = GUID_461d14af_a88e_4be1_a809_d8bfd44b0121;
  v3 = ((__int64 (__fastcall *)(CEndpointCharacteristics *, __int64, struct _GUID *, __int64))CEndpointCharacteristics::AddInternalVoiceProcessingMode)(
         this,
         v5,
         &v11,
         1LL);
  if ( v3 < 0 )
  {
    v8 = 2198LL;
    goto LABEL_19;
  }
  v11 = GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7;
  v3 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eHostProcessConnector, &v11);
  if ( v3 < 0 )
  {
    v8 = 2199LL;
    goto LABEL_19;
  }
  if ( !*((_DWORD *)this + 54) )
    return 0LL;
  v11 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
  v9 = CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(this, eKeywordDetectorConnector, &v11);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x89A,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
