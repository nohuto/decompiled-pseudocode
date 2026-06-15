/*
 * XREFs of GetSpatialSettingsMonitoringPKey @ 0x18005B9D4
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001C5C0 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ??0CSpatialProperties@@QEAA@XZ @ 0x18005B880 (--0CSpatialProperties@@QEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

__int64 __fastcall GetSpatialSettingsMonitoringPKey(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+50h] [rbp+8h] BYREF
  __int64 v3; // [rsp+58h] [rbp+10h] BYREF
  __int64 v4; // [rsp+60h] [rbp+18h] BYREF

  if ( a1 )
  {
    result = 2LL;
    *(_OWORD *)a1 = PKEY_SpatialAudio_Signaling_Key;
    *(_DWORD *)(a1 + 16) = 2;
  }
  else if ( (unsigned int)dword_18019D4B0 > 2 )
  {
    LODWORD(v2) = -2147467261;
    v4 = (__int64)"GetSpatialSettingsMonitoringPKey";
    LODWORD(v3) = 404;
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
             (int)&dword_18019D4B0,
             (__int64)&v4,
             (__int64)&v3,
             (__int64)&v2);
  }
  return result;
}
