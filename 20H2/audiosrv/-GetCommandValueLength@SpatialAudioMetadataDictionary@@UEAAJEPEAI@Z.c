/*
 * XREFs of ?GetCommandValueLength@SpatialAudioMetadataDictionary@@UEAAJEPEAI@Z @ 0x18012C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::GetCommandValueLength(
        SpatialAudioMetadataDictionary *this,
        char a2,
        unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v7 = -2004286976;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a3 )
  {
    v10 = *((_DWORD *)this + 31);
    v11 = 0LL;
    if ( v10 )
    {
      v12 = *((_QWORD *)this + 16);
      while ( *(_BYTE *)(v12 + 2 * v11) != a2 )
      {
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= v10 )
          return v7;
      }
      v7 = 0;
      *a3 = *(unsigned __int8 *)(v12 + 2 * v11 + 1);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v14) = -2147024809;
      v16 = (__int64)"SpatialAudioMetadataDictionary::GetCommandValueLength";
      LODWORD(v15) = 281;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019C480,
        byte_18016C05C,
        v8,
        v9,
        (const CHAR **)&v16,
        (__int64)&v15,
        (__int64)&v14);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
