/*
 * XREFs of ?GetEncoderStaticObjectPositionAndVolumeByIndex@SpatialAudioEncoderProperties@@UEAAJIPEAM000@Z @ 0x18012BD70
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex(
        SpatialAudioEncoderProperties *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // r12
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  float *v15; // rdx
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v7 = a2;
  v11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v6 )
    LeaveCriticalSection(v6);
  v14 = *((_QWORD *)this + 6);
  if ( v14 )
  {
    if ( a3 && a4 && (v15 = a5) != 0LL && (unsigned int)v7 < 0x11 )
    {
      *(_DWORD *)a3 = *(_OWORD *)(v14 + 16 * v7);
      *a4 = *(float *)(*((_QWORD *)this + 6) + 16 * v7 + 4);
      *v15 = *(float *)(*((_QWORD *)this + 6) + 16 * v7 + 8);
      if ( a6 )
        *a6 = *(float *)(*((_QWORD *)this + 6) + 16 * v7 + 12);
    }
    else
    {
      if ( (unsigned int)dword_18019D4B0 > 2 )
      {
        LODWORD(v19) = -2147024809;
        v18 = (__int64)"SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex";
        LODWORD(v17) = 500;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_18019D4B0,
          byte_18016D2CB,
          v12,
          v13,
          (const CHAR **)&v18,
          (__int64)&v17,
          (__int64)&v19);
      }
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v19) = -2147418113;
      v18 = (__int64)"SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex";
      LODWORD(v17) = 499;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D2CB,
        v12,
        v13,
        (const CHAR **)&v18,
        (__int64)&v17,
        (__int64)&v19);
    }
    return (unsigned int)-2147418113;
  }
  return v11;
}
