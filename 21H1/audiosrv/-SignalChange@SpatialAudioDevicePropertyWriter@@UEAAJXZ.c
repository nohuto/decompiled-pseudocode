/*
 * XREFs of ?SignalChange@SpatialAudioDevicePropertyWriter@@UEAAJXZ @ 0x18005B930
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18005BD1C (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::SignalChange(SpatialAudioDevicePropertyWriter *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  struct _tagpropertykey v6; // [rsp+40h] [rbp-40h] BYREF
  struct tagPROPVARIANT v7; // [rsp+60h] [rbp-20h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v9; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v10; // [rsp+C0h] [rbp+40h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  memset(&v7, 0, sizeof(v7));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  v7.iVal = 0;
  v6.fmtid = (GUID)PKEY_SpatialAudio_Signaling_Key;
  v7.vt = 2;
  v6.pid = 2;
  v3 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v6, &v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v8) = v3;
      v10 = (__int64)"SpatialAudioDevicePropertyWriter::SignalChange";
      LODWORD(v9) = 187;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8);
    }
  }
  else
  {
    *((_DWORD *)this + 24) = 0;
  }
  return v4;
}
