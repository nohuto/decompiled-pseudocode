/*
 * XREFs of ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180001DD8
 * Callers:
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180001C3C (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006E330 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 * Callees:
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800229A0 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180022A90 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 */

void __fastcall CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  struct _GUID *DefaultConnectorProcessingModeInternal; // rax
  struct _GUID v10; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-48h] BYREF

  v10 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v10) )
  {
    DefaultConnectorProcessingModeInternal = &v10;
    v10 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  else
  {
    DefaultConnectorProcessingModeInternal = (struct _GUID *)CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
                                                               this,
                                                               v11,
                                                               (unsigned int)a2,
                                                               0LL);
  }
  if ( a3 )
    *a3 = *DefaultConnectorProcessingModeInternal;
  if ( a4 )
    *a4 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( a5 )
    *a5 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
}
