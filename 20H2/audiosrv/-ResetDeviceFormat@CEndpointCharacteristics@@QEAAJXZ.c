/*
 * XREFs of ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011EB40
 * Callers:
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800D7DA0 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x18011E4F8 (-RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180021EA0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180028AA0 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x18004810C (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048148 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18004A978 (-ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B7524 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::ResetDeviceFormat(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int DeviceFormatAndSpatialSettings; // ebx
  void *v6; // rcx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  void *v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  void *v15; // rcx
  void *v16; // rcx
  struct tWAVEFORMATEX *v17; // rcx
  struct _GUID v19; // [rsp+40h] [rbp-30h] BYREF
  void **p_pv; // [rsp+50h] [rbp-20h]
  struct tWAVEFORMATEX *v21; // [rsp+58h] [rbp-18h] BYREF
  char v22; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  LPVOID pv; // [rsp+98h] [rbp+28h] BYREF
  struct tWAVEFORMATEX *v25; // [rsp+A0h] [rbp+30h] BYREF

  if ( (unsigned int)dword_18019C448 > 4 && tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
  {
    pv = (LPVOID)*((_QWORD *)this + 3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v2,
      byte_180169B47,
      v3,
      v4,
      &pv);
  }
  v19 = GUID_00000000_0000_0000_0000_000000000000;
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, eHostProcessConnector, &v19, 0LL, 0LL);
  v25 = 0LL;
  p_pv = (void **)&v25;
  v21 = 0LL;
  v22 = 1;
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                     this,
                                     eHostProcessConnector,
                                     0,
                                     (LPVOID *)&v21,
                                     0LL,
                                     0LL,
                                     0LL);
  if ( v22 )
  {
    v6 = *p_pv;
    *p_pv = v21;
    if ( v6 )
      CoTaskMemFree(v6);
  }
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v7 = (unsigned int)DeviceFormatAndSpatialSettings;
    v8 = 8994LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v7);
    goto LABEL_28;
  }
  v9 = CEndpointCharacteristics::ConfirmDeviceFormat(this, v25, &v19, eHostProcessConnector, 0);
  if ( v9 >= 0 )
    goto LABEL_27;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    8997LL,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v9);
  v10 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(this, eHostProcessConnector, 0LL, 0LL);
  DeviceFormatAndSpatialSettings = v10;
  if ( v10 < 0 )
  {
    v8 = 9001LL;
LABEL_14:
    v7 = (unsigned int)v10;
    goto LABEL_15;
  }
  v10 = CEndpointCharacteristics::ClearMixFormatCache((__int64)this, 0);
  DeviceFormatAndSpatialSettings = v10;
  if ( v10 < 0 )
  {
    v8 = 9004LL;
    goto LABEL_14;
  }
  pv = 0LL;
  p_pv = &pv;
  v21 = 0LL;
  v22 = 1;
  DeviceFormatAndSpatialSettings = CEndpointCharacteristics::GetDeviceFormatAndSpatialSettings(
                                     this,
                                     eHostProcessConnector,
                                     1,
                                     (LPVOID *)&v21,
                                     0LL,
                                     0LL,
                                     0LL);
  if ( v22 )
  {
    v11 = *p_pv;
    *p_pv = v21;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( DeviceFormatAndSpatialSettings < 0 )
  {
    v12 = (unsigned int)DeviceFormatAndSpatialSettings;
    v13 = 9008LL;
    goto LABEL_23;
  }
  v14 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
          this,
          eHostProcessConnector,
          (WAVEFORMATEXTENSIBLE *)pv,
          0LL);
  DeviceFormatAndSpatialSettings = v14;
  if ( v14 >= 0 )
  {
    v16 = pv;
    pv = 0LL;
    if ( v16 )
      CoTaskMemFree(v16);
LABEL_27:
    DeviceFormatAndSpatialSettings = 0;
    goto LABEL_28;
  }
  v12 = (unsigned int)v14;
  v13 = 9011LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v12);
  v15 = pv;
  pv = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
LABEL_28:
  v17 = v25;
  v25 = 0LL;
  if ( v17 )
    CoTaskMemFree(v17);
  return (unsigned int)DeviceFormatAndSpatialSettings;
}
