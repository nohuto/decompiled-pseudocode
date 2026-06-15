/*
 * XREFs of ?GetUserSelectedSpatialAudioEncoderId@SpatialAudioDevicePropertyReader@@UEAAJPEAU_GUID@@@Z @ 0x1801285E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetUserSelectedSpatialAudioEncoderId(
        SpatialAudioDevicePropertyReader *this,
        struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  GUID v8; // xmm0
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    if ( *((_DWORD *)this + 108) )
    {
      if ( *((_DWORD *)this + 128) )
        v8 = *(GUID *)((char *)this + 444);
      else
        v8 = *(GUID *)((char *)this + 108);
    }
    else
    {
      v8 = GUID_00000000_0000_0000_0000_000000000000;
    }
    *a2 = v8;
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v10) = -2147024809;
      v12 = (__int64)"SpatialAudioDevicePropertyReader::GetUserSelectedSpatialAudioEncoderId";
      LODWORD(v11) = 893;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019C480,
        byte_18016C05C,
        v6,
        v7,
        (const CHAR **)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
    return (unsigned int)-2147024809;
  }
  return v5;
}
