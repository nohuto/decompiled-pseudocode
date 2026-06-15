/*
 * XREFs of ?GetMaxDynamicObjectCount@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x1801288E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetMaxDynamicObjectCount(
        SpatialAudioDevicePropertyReader *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *a2 = *((unsigned __int16 *)this + 66);
  }
  else
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v9) = -2147024809;
      v11 = (__int64)"SpatialAudioDevicePropertyReader::GetMaxDynamicObjectCount";
      LODWORD(v10) = 645;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D2CB,
        v6,
        v7,
        (const CHAR **)&v11,
        (__int64)&v10,
        (__int64)&v9);
    }
    return (unsigned int)-2147024809;
  }
  return v5;
}
