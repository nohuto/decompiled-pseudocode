/*
 * XREFs of ?ResetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x18005BB00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18005BE1C (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::ResetDeviceProperties(SpatialAudioDevicePropertyWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  unsigned int v4; // edi
  struct _tagpropertykey v6; // [rsp+40h] [rbp-40h] BYREF
  struct tagPROPVARIANT v7; // [rsp+60h] [rbp-20h] BYREF
  char v8; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v9; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v10; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v11; // [rsp+C8h] [rbp+48h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  memset(&v7, 0, sizeof(v7));
  v7.iVal = 0;
  v7.vt = 2;
  v6.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
  v6.pid = 2;
  v3 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v6, &v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      return v4;
    LODWORD(v10) = 222;
LABEL_10:
    LODWORD(v9) = v3;
    v11 = (__int64)"SpatialAudioDevicePropertyWriter::ResetDeviceProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_18019D4B0,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
    return v4;
  }
  v8 = 0;
  *(_OWORD *)&v7.vt = 0LL;
  v7.vt = 65;
  v7.lVal = 1;
  v7.bstrblobVal.pData = (BYTE *)&v8;
  v6.pid = 2;
  v6.fmtid = (GUID)PKEY_SpatialAudio_Metadata_DeviceProperties;
  v3 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v6, &v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      return v4;
    LODWORD(v10) = 232;
    goto LABEL_10;
  }
  if ( !*((_DWORD *)this + 24) )
    (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
  return v4;
}
