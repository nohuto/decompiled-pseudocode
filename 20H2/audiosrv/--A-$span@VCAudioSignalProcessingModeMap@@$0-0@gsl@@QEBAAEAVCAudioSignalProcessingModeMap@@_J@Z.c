/*
 * XREFs of ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_J@Z @ 0x18004B190
 * Callers:
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18001D3C0 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18001E210 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x18001F990 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x180021630 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180023510 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18004AFCC (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x180059424 (-AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005BB18 (-AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf.c)
 *     _lambda_edd11abfd7fb8004be40d25e4712f682_::operator() @ 0x180065FB4 (_lambda_edd11abfd7fb8004be40d25e4712f682_--operator().c)
 *     _lambda_4b369aa96bdcdce7616c4f02413351c1_::operator() @ 0x1801194BC (_lambda_4b369aa96bdcdce7616c4f02413351c1_--operator().c)
 * Callees:
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x180118858 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x180118928 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 >= *a1 )
  {
    v3 = gsl::fail_fast::fail_fast(
           (gsl::fail_fast *)v4,
           "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    gsl::details::throw_exception<gsl::fail_fast>(v3);
  }
  return a1[1] + 24 * a2;
}
