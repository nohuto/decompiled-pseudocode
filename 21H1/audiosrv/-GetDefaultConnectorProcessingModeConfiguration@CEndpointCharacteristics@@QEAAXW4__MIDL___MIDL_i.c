/*
 * XREFs of ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180022520
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006ECF0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18011B6F4 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011F1C4 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011F710 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180023110 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C310 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 */

void __fastcall CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  struct _GUID v9; // xmm1
  struct _GUID v10; // xmm2
  GUID *v11; // rax
  struct _GUID v12; // xmm0
  struct _GUID v13; // [rsp+20h] [rbp-88h] BYREF
  struct _GUID v14; // [rsp+30h] [rbp-78h]
  struct _GUID v15; // [rsp+40h] [rbp-68h]
  _BYTE v16[16]; // [rsp+50h] [rbp-58h] BYREF
  struct _GUID v17; // [rsp+60h] [rbp-48h] BYREF

  v13 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v9 = *(struct _GUID *)CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
                          this,
                          v16,
                          (unsigned int)a2,
                          0LL);
  v10 = v9;
  v14 = v9;
  v17 = v9;
  v15 = v9;
  if ( a4 )
  {
    v13 = v9;
    if ( (unsigned int)CEndpointCharacteristics::IsAPOModeSupported(this, &v13, a2) )
      v11 = &v17;
    else
      v11 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v12 = *v11;
    v9 = v14;
    v10 = v15;
  }
  else
  {
    v12 = v13;
  }
  if ( a3 )
    *a3 = v9;
  if ( a4 )
    *a4 = v12;
  if ( a5 )
    *a5 = v10;
}
