/*
 * XREFs of ?GetSpatialAudioPolicyFlags@SpatialAudioDevicePropertyReader@@UEAAJPEAW4SpatialAudioPolicyFlags@@@Z @ 0x180129240
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetSpatialAudioPolicyFlags(
        SpatialAudioDevicePropertyReader *this,
        enum SpatialAudioPolicyFlags *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+70h] [rbp+30h] BYREF
  __int64 v10; // [rsp+80h] [rbp+40h] BYREF
  __int64 v11; // [rsp+88h] [rbp+48h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( *((_DWORD *)this + 128) )
  {
    if ( a2 )
    {
      *(_DWORD *)a2 = *((_DWORD *)this + 124);
    }
    else
    {
      if ( (unsigned int)dword_18019D4B0 > 2 )
      {
        LODWORD(v9) = -2147024809;
        v11 = (__int64)"SpatialAudioDevicePropertyReader::GetSpatialAudioPolicyFlags";
        LODWORD(v10) = 751;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_18019D4B0,
          byte_18016D300,
          v6,
          v7,
          (const CHAR **)&v11,
          (__int64)&v10,
          (__int64)&v9);
      }
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v9) = -2147418113;
      v11 = (__int64)"SpatialAudioDevicePropertyReader::GetSpatialAudioPolicyFlags";
      LODWORD(v10) = 750;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D300,
        v6,
        v7,
        (const CHAR **)&v11,
        (__int64)&v10,
        (__int64)&v9);
    }
    return (unsigned int)-2147418113;
  }
  return v5;
}
