/*
 * XREFs of ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x18011E4F8
 * Callers:
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800D7A4C (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 * Callees:
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180048148 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B7524 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18011E5F4 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18011EB40 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::RefreshConnectorFormats(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v5; // edx
  void *v7; // [rsp+40h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_18019C448 > 4 && tlgKeywordOn((__int64)&dword_18019C448, 16LL) )
  {
    v7 = (void *)*((_QWORD *)this + 3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v2,
      byte_180169B14,
      v3,
      v4,
      &v7);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8688));
  v7 = (char *)this + 8688;
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
    g_policyConfigInternal,
    &lpCriticalSection,
    *((_QWORD *)this + 3));
  CEndpointCharacteristics::RefreshDefaultConnectorFormats(this, v5);
  CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(this, eHostProcessConnector, 0LL, 0LL);
  CEndpointCharacteristics::ResetDeviceFormat(this);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( this != (CEndpointCharacteristics *)-8688LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 8688));
  return 0LL;
}
