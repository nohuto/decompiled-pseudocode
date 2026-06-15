/*
 * XREFs of ?GetEncoderStaticObjectPositionAndVolume@SpatialAudioEncoderProperties@@UEAAJW4AudioObjectType@@PEAM111@Z @ 0x18012BBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume(
        SpatialAudioEncoderProperties *this,
        enum AudioObjectType a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  float *v15; // rcx
  __int32 v16; // r12d
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v6 )
    LeaveCriticalSection(v6);
  v14 = *((_QWORD *)this + 6);
  if ( v14 )
  {
    if ( a3 && a4 && (v15 = a5) != 0LL )
    {
      v16 = a2 & 0x3FFFD | 2;
      *(double *)&v20 = (double)v16;
      *(_DWORD *)a3 = *(_OWORD *)(v14 + 16LL
                                      * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v16)) >> 20) - 1024));
      *a4 = *(float *)(*((_QWORD *)this + 6)
                     + 16LL * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v16)) >> 20) - 1024)
                     + 4);
      *v15 = *(float *)(*((_QWORD *)this + 6)
                      + 16LL * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v16)) >> 20) - 1024)
                      + 8);
      if ( a6 )
        *a6 = *(float *)(*((_QWORD *)this + 6)
                       + 16LL * (((unsigned int)HIDWORD(COERCE_UNSIGNED_INT64((double)v16)) >> 20) - 1024)
                       + 12);
    }
    else
    {
      if ( (unsigned int)dword_18019D4B0 > 2 )
      {
        LODWORD(v20) = -2147024809;
        v19 = (__int64)"SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume";
        LODWORD(v18) = 479;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_18019D4B0,
          byte_18016D2CB,
          v12,
          v13,
          (const CHAR **)&v19,
          (__int64)&v18,
          (__int64)&v20);
      }
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v20) = -2147418113;
      v19 = (__int64)"SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolume";
      LODWORD(v18) = 478;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D2CB,
        v12,
        v13,
        (const CHAR **)&v19,
        (__int64)&v18,
        (__int64)&v20);
    }
    return (unsigned int)-2147418113;
  }
  return v11;
}
