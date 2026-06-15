/*
 * XREFs of ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180047FAC
 * Callers:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180020060 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180021F80 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 * Callees:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180047F0C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180048090 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048148 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180051424 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::RefreshDeviceFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        int a3,
        int a4)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // esi
  int HasHardwareAudioEngine; // eax
  int DeviceFormat; // ebx
  void *v9; // rcx
  int v10; // eax
  void *v11; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-30h]
  struct tWAVEFORMATEX *v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v19; // [rsp+88h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+90h] [rbp+40h]
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  if ( (unsigned int)dword_18019C448 > 4 && (byte_18019C458 & 0x10) != 0 && (qword_18019C460 & 0x10) == qword_18019C460 )
  {
    v19 = a2;
    v21 = *((_QWORD *)this + 3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_18019C448,
      (unsigned int)&unk_180169B74,
      a3,
      a4,
      (__int64)&v21,
      (__int64)&v19);
  }
  v6 = eKeywordDetectorConnector;
  if ( a2 != eKeywordDetectorConnector )
    v6 = eHostProcessConnector;
  HasHardwareAudioEngine = CEndpointCharacteristics::HasHardwareAudioEngine(this);
  pv = 0LL;
  v16 = 0LL;
  v17 = 1;
  DeviceFormat = CEndpointCharacteristics::GetDeviceFormat(this, 0, HasHardwareAudioEngine != 0, v6, &v16);
  if ( v17 )
  {
    v9 = pv;
    pv = v16;
    if ( v9 )
      CoTaskMemFree(v9);
  }
  if ( DeviceFormat < 0 )
  {
    v13 = (unsigned int)DeviceFormat;
    v14 = 8942LL;
  }
  else
  {
    v10 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(this, v6, (const struct tWAVEFORMATEX *)pv, 0LL);
    DeviceFormat = v10;
    if ( v10 >= 0 )
    {
      DeviceFormat = 0;
      goto LABEL_11;
    }
    v13 = (unsigned int)v10;
    v14 = 8944LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v13,
    v15);
LABEL_11:
  v11 = pv;
  pv = 0LL;
  if ( v11 )
    CoTaskMemFree(v11);
  return (unsigned int)DeviceFormat;
}
