/*
 * XREFs of ?GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@Z @ 0x180128B78
 * Callers:
 *     ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x180128110 (-CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudio.c)
 *     ?IsSpatialAudioStreamAvailable@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEBUtagPROPVARIANT@@@Z @ 0x180129670 (-IsSpatialAudioStreamAvailable@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEBUtagPROPVARI.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID(
        SpatialAudioDevicePropertyReader *this,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int16 v8; // si
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned __int16 v13; // r15
  int v14; // eax
  __int64 v15; // rax
  int v17; // [rsp+40h] [rbp-29h] BYREF
  int v18; // [rsp+44h] [rbp-25h] BYREF
  __int64 v19; // [rsp+48h] [rbp-21h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+60h] [rbp-9h]
  __int128 v22; // [rsp+68h] [rbp-1h] BYREF
  int v23; // [rsp+78h] [rbp+Fh]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  v19 = (__int64)a4;
  v21 = 0LL;
  *(_OWORD *)pvar = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v8 = 0;
  if ( v4 )
    LeaveCriticalSection(v4);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
         *((_QWORD *)this + 51),
         &PKEY_SpatialAudio_Metadata_Count,
         pvar);
  v12 = v9;
  if ( v9 >= 0 )
  {
    if ( LOWORD(pvar[0]) == 2 )
    {
      v13 = (unsigned __int16)pvar[1];
      v22 = PKEY_SpatialAudio_Metadata_Id_Array;
      v23 = 2;
      PropVariantClear(pvar);
      v21 = 0LL;
      *(_OWORD *)pvar = 0LL;
      if ( !v13 )
      {
LABEL_20:
        v12 = -2004286973;
        goto LABEL_21;
      }
      while ( 1 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
                *((_QWORD *)this + 51),
                &v22,
                pvar);
        v12 = v14;
        if ( v14 < 0 )
        {
          if ( (unsigned int)dword_18019D4B0 > 2 )
          {
            v18 = v14;
            v17 = 467;
            v19 = (__int64)"SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (__int64)&dword_18019D4B0,
              byte_18016D305,
              v10,
              v11,
              (const CHAR **)&v19,
              (__int64)&v17,
              (__int64)&v18);
          }
          goto LABEL_21;
        }
        if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) != 18 )
          break;
        v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)v21;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)v21 )
          v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)(v21 + 8);
        if ( !v15 )
        {
          if ( a3 )
            *a3 = *(_WORD *)(v21 + 16);
          *(_DWORD *)v19 = v8;
          goto LABEL_21;
        }
        PropVariantClear(pvar);
        ++v23;
        if ( ++v8 >= v13 )
          goto LABEL_20;
      }
      if ( (unsigned int)dword_18019D4B0 <= 2 )
        goto LABEL_11;
      v17 = 469;
    }
    else
    {
      if ( (unsigned int)dword_18019D4B0 <= 2 )
      {
LABEL_11:
        v12 = -2147024809;
        goto LABEL_21;
      }
      v17 = 456;
    }
    v19 = (__int64)"SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
    v18 = -2147024809;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019D4B0,
      byte_18016D2CB,
      v10,
      v11,
      (const CHAR **)&v19,
      (__int64)&v17,
      (__int64)&v18);
    goto LABEL_11;
  }
  if ( (unsigned int)dword_18019D4B0 > 2 )
  {
    v17 = v9;
    v18 = 454;
    v19 = (__int64)"SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019D4B0,
      byte_18016D305,
      v10,
      v11,
      (const CHAR **)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
LABEL_21:
  PropVariantClear(pvar);
  return v12;
}
