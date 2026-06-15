/*
 * XREFs of ?IsSWAPOFallbackSupported@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011E07C
 * Callers:
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x180021100 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800229A0 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023470 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 */

bool __fastcall CEndpointCharacteristics::IsSWAPOFallbackSupported(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  char v4; // bl
  struct _GUID v6; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( *(int *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 219, a2) + 8) > 0 )
  {
    v6 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    return (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v6) != 0;
  }
  return v4;
}
