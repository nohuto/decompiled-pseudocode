/*
 * XREFs of ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011A178
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006E330 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     AudioServerIsRawStreamSupported @ 0x1800DFE50 (AudioServerIsRawStreamSupported.c)
 * Callees:
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800229A0 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_J@Z @ 0x180055140 (--A-$span@H$0-0@gsl@@QEBAAEAH_J@Z.c)
 */

char __fastcall CEndpointCharacteristics::AllowRawStreamCreation(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  unsigned __int64 v2; // rdi
  char v4; // bl
  GUID v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  v6 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v4 = 0;
  if ( (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v6) )
    return *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)this + 213, v2) == 0;
  return v4;
}
