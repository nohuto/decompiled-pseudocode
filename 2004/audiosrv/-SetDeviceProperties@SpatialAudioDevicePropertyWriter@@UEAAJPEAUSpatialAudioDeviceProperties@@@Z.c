/*
 * XREFs of ?SetDeviceProperties@SpatialAudioDevicePropertyWriter@@UEAAJPEAUSpatialAudioDeviceProperties@@@Z @ 0x180127D00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18005BE1C (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SetDeviceProperties(
        SpatialAudioDevicePropertyWriter *this,
        BYTE *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  struct _tagpropertykey v12; // [rsp+40h] [rbp-40h] BYREF
  struct tagPROPVARIANT v13; // [rsp+60h] [rbp-20h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+30h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *(_DWORD *)a2 = 1509949441;
    *(_OWORD *)&v13.vt = 0LL;
    v13.vt = 65;
    v12.fmtid = (GUID)PKEY_SpatialAudio_Metadata_DeviceProperties;
    v13.lVal = 146;
    v13.bstrblobVal.pData = a2;
    v12.pid = 2;
    v8 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v12, &v13);
    v7 = v8;
    if ( v8 >= 0 )
    {
      if ( !*((_DWORD *)this + 24) )
        (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)this + 32LL))(this);
    }
    else if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v14) = v8;
      LODWORD(v15) = 339;
      v16 = (__int64)"SpatialAudioDevicePropertyWriter::SetDeviceProperties";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D305,
        v9,
        v10,
        (const CHAR **)&v16,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v14) = -2147024809;
      v16 = (__int64)"SpatialAudioDevicePropertyWriter::SetDeviceProperties";
      LODWORD(v15) = 328;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D2CB,
        v5,
        v6,
        (const CHAR **)&v16,
        (__int64)&v15,
        (__int64)&v14);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
