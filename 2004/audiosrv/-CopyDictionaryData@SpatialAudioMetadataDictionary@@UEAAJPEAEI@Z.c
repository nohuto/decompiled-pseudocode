/*
 * XREFs of ?CopyDictionaryData@SpatialAudioMetadataDictionary@@UEAAJPEAEI@Z @ 0x18012D490
 * Callers:
 *     ?CopyDictionaryData@SpatialAudioMetadataDictionary@@W7EAAJPEAEI@Z @ 0x180075770 (-CopyDictionaryData@SpatialAudioMetadataDictionary@@W7EAAJPEAEI@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::CopyDictionaryData(
        const void **this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  size_t v4; // r14
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 7);
  v4 = a3;
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 7));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a2 && (v8 = v4, v4 == 2LL * *((unsigned int *)this + 31)) )
  {
    memcpy_0(a2, this[16], v4);
  }
  else
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v11) = -2147024809;
      v13 = (__int64)"SpatialAudioMetadataDictionary::CopyDictionaryData";
      LODWORD(v12) = 344;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D2CB,
        v8,
        v9,
        (const CHAR **)&v13,
        (__int64)&v12,
        (__int64)&v11);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
