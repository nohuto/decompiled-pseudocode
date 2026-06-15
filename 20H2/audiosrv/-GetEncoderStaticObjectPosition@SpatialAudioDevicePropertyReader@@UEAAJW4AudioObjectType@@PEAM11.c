/*
 * XREFs of ?GetEncoderStaticObjectPosition@SpatialAudioDevicePropertyReader@@UEAAJW4AudioObjectType@@PEAM11@Z @ 0x180127B00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetEncoderStaticObjectPosition(
        SpatialAudioDevicePropertyReader *this,
        enum AudioObjectType a2,
        float *a3,
        float *a4,
        float *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  float *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v10 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( a3 && a4 && (v13 = a5) != 0LL && (unsigned int)(a2 - 2) <= 0x1FFFE )
  {
    v14 = *((_QWORD *)this + 7);
    *(double *)&v18 = (double)(a2 & 0x3FFFD | 2u);
    v15 = 2LL * (unsigned int)((HIDWORD(v18) >> 20) - 1024);
    *(_DWORD *)a3 = *(_OWORD *)(v14 + 16LL * (unsigned int)((HIDWORD(v18) >> 20) - 1024));
    *a4 = *(float *)(v14 + 8 * v15 + 8);
    *v13 = *(float *)(v14 + 8 * v15 + 4);
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v18) = -2147024809;
      v17 = (__int64)"SpatialAudioDevicePropertyReader::GetEncoderStaticObjectPosition";
      LODWORD(v19) = 595;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019C480,
        byte_18016C05C,
        v11,
        v12,
        (const CHAR **)&v17,
        (__int64)&v19,
        (__int64)&v18);
    }
    return (unsigned int)-2147024809;
  }
  return v10;
}
