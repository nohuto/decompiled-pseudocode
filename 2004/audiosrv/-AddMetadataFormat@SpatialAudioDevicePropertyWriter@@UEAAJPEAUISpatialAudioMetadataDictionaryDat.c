/*
 * XREFs of ?AddMetadataFormat@SpatialAudioDevicePropertyWriter@@UEAAJPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x180127860
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ?SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18005BE1C (-SetPropertyValue@SpatialAudioDevicePropertyWriter@@AEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ACC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyWriter::AddMetadataFormat(
        SpatialAudioDevicePropertyWriter *this,
        struct ISpatialAudioMetadataDictionaryData *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  void *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  LPVOID v12; // rax
  __int64 v13; // rcx
  int v14; // r15d
  __int64 v16; // [rsp+40h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-51h] BYREF
  _WORD v18[2]; // [rsp+50h] [rbp-49h] BYREF
  _DWORD v19[7]; // [rsp+54h] [rbp-45h] BYREF
  struct _tagpropertykey v20; // [rsp+70h] [rbp-29h] BYREF
  GUID v21; // [rsp+90h] [rbp-9h] BYREF
  __int16 v22; // [rsp+A0h] [rbp+7h]
  GUID v23; // [rsp+A8h] [rbp+Fh] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v18[0] = 0;
  v19[0] = 0;
  v23 = GUID_00000000_0000_0000_0000_000000000000;
  v5 = 0LL;
  v21 = GUID_00000000_0000_0000_0000_000000000000;
  v22 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( !a2 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v16 = 0x10180070057LL;
      v17 = (__int64)"SpatialAudioDevicePropertyWriter::AddMetadataFormat";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D2CB,
        v6,
        v7,
        (const CHAR **)&v17,
        (__int64)&v16 + 4,
        (__int64)&v16);
    }
    v8 = -2147024809;
    goto LABEL_40;
  }
  v9 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, GUID *))(*(_QWORD *)a2 + 24LL))(
         a2,
         &v23);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_40;
    LODWORD(v16) = 261;
    goto LABEL_38;
  }
  v9 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _WORD *))(*(_QWORD *)a2 + 32LL))(
         a2,
         v18);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_40;
    LODWORD(v16) = 264;
    goto LABEL_38;
  }
  v9 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, _DWORD *))(*(_QWORD *)a2 + 40LL))(
         a2,
         v19);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_40;
    LODWORD(v16) = 267;
    goto LABEL_38;
  }
  v12 = operator new[](v19[0], (const struct std::nothrow_t *)&std::nothrow);
  v5 = v12;
  if ( !v12 )
  {
    v8 = -2147024882;
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_40;
    v16 = 0x8007000E0000010FuLL;
LABEL_39:
    v17 = (__int64)"SpatialAudioDevicePropertyWriter::AddMetadataFormat";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019D4B0,
      byte_18016D305,
      v10,
      v11,
      (const CHAR **)&v17,
      (__int64)&v16,
      (__int64)&v16 + 4);
    goto LABEL_40;
  }
  v9 = (*(__int64 (__fastcall **)(struct ISpatialAudioMetadataDictionaryData *, LPVOID, _QWORD))(*(_QWORD *)a2 + 48LL))(
         a2,
         v12,
         v19[0]);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_40;
    LODWORD(v16) = 274;
    goto LABEL_38;
  }
  v13 = *((_QWORD *)this + 11);
  memset(&v19[1], 0, 24);
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, _DWORD *))(*(_QWORD *)v13 + 40LL))(
         v13,
         &PKEY_SpatialAudio_Metadata_Count,
         &v19[1]);
  v8 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_40;
    LODWORD(v16) = 280;
LABEL_38:
    HIDWORD(v16) = v9;
    goto LABEL_39;
  }
  if ( LOWORD(v19[1]) == 2 )
  {
    v14 = SLOWORD(v19[3]);
    v22 = v18[0];
    v21 = v23;
    *(_QWORD *)&v19[5] = &v21;
    v20.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Id_Array;
    *(_OWORD *)&v19[1] = 0LL;
    LOWORD(v19[1]) = 65;
    v19[3] = 18;
    v20.pid = v14 + 2;
    v9 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v20, (struct tagPROPVARIANT *)&v19[1]);
    v8 = v9;
    if ( v9 >= 0 )
    {
      *(_QWORD *)&v19[5] = v5;
      v20.pid = v14 + 2;
      *(_OWORD *)&v19[1] = 0LL;
      LOWORD(v19[1]) = 65;
      v19[3] = v19[0];
      v20.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Dictionary_Array;
      v9 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v20, (struct tagPROPVARIANT *)&v19[1]);
      v8 = v9;
      if ( v9 >= 0 )
      {
        memset(&v19[1], 0, 24);
        v20.fmtid = (GUID)PKEY_SpatialAudio_Metadata_Count;
        LOWORD(v19[1]) = 2;
        LOWORD(v19[3]) = v14 + 1;
        v20.pid = 2;
        v9 = SpatialAudioDevicePropertyWriter::SetPropertyValue(this, &v20, (struct tagPROPVARIANT *)&v19[1]);
        v8 = v9;
        if ( v9 >= 0 || (unsigned int)dword_18019D4B0 <= 2 )
          goto LABEL_40;
        LODWORD(v16) = 311;
      }
      else
      {
        if ( (unsigned int)dword_18019D4B0 <= 2 )
          goto LABEL_40;
        LODWORD(v16) = 304;
      }
    }
    else
    {
      if ( (unsigned int)dword_18019D4B0 <= 2 )
        goto LABEL_40;
      LODWORD(v16) = 294;
    }
    goto LABEL_38;
  }
  if ( (unsigned int)dword_18019D4B0 > 2 )
  {
    v17 = (__int64)"SpatialAudioDevicePropertyWriter::AddMetadataFormat";
    v16 = 0x8000FFFF00000119uLL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019D4B0,
      byte_18016D2CB,
      v10,
      v11,
      (const CHAR **)&v17,
      (__int64)&v16,
      (__int64)&v16 + 4);
  }
  v8 = -2147418113;
LABEL_40:
  operator delete(v5);
  return v8;
}
