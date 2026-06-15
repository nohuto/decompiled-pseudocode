/*
 * XREFs of ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVCEndpointCharacteristics@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x1801271C0
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertykey@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18005D64C (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@AEBU_tagpropertyke.c)
 * Callees:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048908 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800B822C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U2@U2@U3@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5445AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x18012558C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U2@U2@U3@U-$_tlgW.c)
 */

bool __fastcall CSpatialProperties::SetDesiredFormat(
        CSpatialProperties *this,
        struct CEndpointCharacteristics *a2,
        struct WAVEFORMATEXTENSIBLE *a3,
        char a4)
{
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r13
  int v13; // esi
  int v14; // ebx
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // r8
  __int64 v18; // r9
  WORD wValidBitsPerSample; // [rsp+60h] [rbp-39h] BYREF
  WORD wBitsPerSample; // [rsp+62h] [rbp-37h] BYREF
  WORD nChannels; // [rsp+64h] [rbp-35h] BYREF
  DWORD nSamplesPerSec; // [rsp+68h] [rbp-31h] BYREF
  DWORD dwChannelMask; // [rsp+6Ch] [rbp-2Dh] BYREF
  DWORD nAvgBytesPerSec; // [rsp+70h] [rbp-29h] BYREF
  void *v26; // [rsp+78h] [rbp-21h] BYREF
  GUID *p_SubFormat; // [rsp+80h] [rbp-19h] BYREF
  WAVEFORMATEXTENSIBLE v28; // [rsp+88h] [rbp-11h] BYREF

  v8 = 1;
  if ( (unsigned int)dword_18019D478 > 4 && tlgKeywordOn((__int64)&dword_18019D478, 16LL) )
  {
    p_SubFormat = &a3->SubFormat;
    nAvgBytesPerSec = a3->Format.nAvgBytesPerSec;
    wValidBitsPerSample = a3->Samples.wValidBitsPerSample;
    wBitsPerSample = a3->Format.wBitsPerSample;
    nSamplesPerSec = a3->Format.nSamplesPerSec;
    dwChannelMask = a3->dwChannelMask;
    nChannels = a3->Format.nChannels;
    v26 = (void *)*((_QWORD *)a2 + 3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v9,
      byte_18016B483,
      v10,
      v11,
      &v26,
      (__int64)&nChannels,
      (__int64)&dwChannelMask,
      (__int64)&nSamplesPerSec,
      (__int64)&wBitsPerSample,
      (__int64)&wValidBitsPerSample,
      (__int64)&nAvgBytesPerSec,
      (__int64 *)&p_SubFormat);
  }
  v12 = (unsigned __int64)this + 104;
  v13 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
          a2,
          eHostProcessConnector,
          a3,
          (const struct SpatialAudioSettings *)(v12 & -(__int64)(a4 != 0)));
  v14 = v13;
  if ( v13 < 0 && a3->dwChannelMask == 1599 )
  {
    v15 = *(_OWORD *)&a3->Format.cbSize;
    *(_OWORD *)&v28.Format.wFormatTag = *(_OWORD *)&a3->Format.wFormatTag;
    v16 = *(_QWORD *)a3->SubFormat.Data4;
    *(_OWORD *)&v28.Format.cbSize = v15;
    v28.dwChannelMask = 255;
    *(_QWORD *)v28.SubFormat.Data4 = v16;
    v8 = CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(
           a2,
           eHostProcessConnector,
           &v28,
           (const struct SpatialAudioSettings *)(v12 & -(__int64)(a4 != 0)));
    v14 = v8;
  }
  if ( (unsigned int)dword_18019D478 > 4 && tlgKeywordOn((__int64)&dword_18019D478, 0x400000000000LL) )
  {
    v26 = (void *)*((_QWORD *)a2 + 3);
    dwChannelMask = v8;
    nSamplesPerSec = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019D478,
      byte_18016B592,
      v17,
      v18,
      &v26,
      (__int64)&nSamplesPerSec,
      (__int64)&dwChannelMask);
  }
  return v14 >= 0;
}
