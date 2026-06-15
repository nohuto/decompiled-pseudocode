/*
 * XREFs of ?LoadDeviceSettings@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x18001C200
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18001D640 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::LoadDeviceSettings(SpatialAudioDevicePropertyReader *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // esi
  unsigned int v5; // ebx
  bool v6; // zf
  _OWORD *v7; // rax
  int v8; // eax
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  void *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int64 v20; // [rsp+40h] [rbp+7h] BYREF
  __int64 v21; // [rsp+48h] [rbp+Fh] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp+17h] BYREF
  _OWORD *v23; // [rsp+60h] [rbp+27h]
  __int128 v24; // [rsp+68h] [rbp+2Fh] BYREF
  unsigned int v25; // [rsp+78h] [rbp+3Fh]

  v23 = 0LL;
  v2 = *((_QWORD *)this + 51);
  *(_OWORD *)pvar = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_SpatialAudio_Endpoint_Settings,
         pvar);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v20 = (unsigned int)v3 | 0x16400000000LL;
      v21 = (__int64)"SpatialAudioDevicePropertyReader::LoadDeviceSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v21,
        (__int64)&v20 + 4,
        (__int64)&v20);
    }
    goto LABEL_17;
  }
  v4 = -2004286463;
  v5 = 0;
  v6 = LOWORD(pvar[0]) == 65;
  *((_DWORD *)this + 128) = 0;
  if ( !v6
    || LODWORD(pvar[1]) != 76
    || (v7 = v23,
        *(_OWORD *)((char *)this + 428) = *v23,
        *(_OWORD *)((char *)this + 444) = v7[1],
        *(_OWORD *)((char *)this + 460) = v7[2],
        *(_OWORD *)((char *)this + 476) = v7[3],
        *(_QWORD *)((char *)this + 492) = *((_QWORD *)v7 + 8),
        *((_DWORD *)this + 125) = *((_DWORD *)v7 + 18),
        *((_DWORD *)this + 107) != 1509949441) )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_17;
    v20 = 0x8889040100000173uLL;
    goto LABEL_36;
  }
  *((_DWORD *)this + 128) = 1;
  PropVariantClear(pvar);
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
         *((_QWORD *)this + 51),
         &PKEY_SpatialAudio_EncoderDescriptor_Count,
         pvar);
  v4 = v8;
  if ( v8 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_17;
    HIDWORD(v20) = v8;
    LODWORD(v20) = 376;
LABEL_36:
    v21 = (__int64)"SpatialAudioDevicePropertyReader::LoadDeviceSettings";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_18019D4B0,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v20 + 4);
    goto LABEL_17;
  }
  if ( LOWORD(pvar[0]) != 2 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v20) = 378;
LABEL_28:
      v21 = (__int64)"SpatialAudioDevicePropertyReader::LoadDeviceSettings";
      HIDWORD(v20) = -2147024809;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v20 + 4);
    }
LABEL_29:
    v4 = -2147024809;
    goto LABEL_17;
  }
  v9 = SLOWORD(pvar[1]);
  if ( (unsigned int)SLOWORD(pvar[1]) > 8 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v20) = 379;
      goto LABEL_28;
    }
    goto LABEL_29;
  }
  *((_DWORD *)this + 106) = SLOWORD(pvar[1]);
  v11 = v9;
  v10 = 834LL * v9;
  if ( !is_mul_ok(v11, 0x342uLL) )
    v10 = -1LL;
  v12 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  *((_QWORD *)this + 63) = v12;
  if ( !v12 )
  {
    v4 = -2147024882;
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_17;
    v20 = 0x8007000E00000180uLL;
    goto LABEL_36;
  }
  v4 = 0;
  if ( *((_DWORD *)this + 106) )
  {
    while ( 1 )
    {
      v13 = *((_QWORD *)this + 51);
      v25 = v5 + 2;
      v24 = PKEY_SpatialAudio_EncoderDescriptor_Array;
      v14 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(v13, &v24, pvar);
      v4 = v14;
      if ( v14 < 0 )
        break;
      if ( LOWORD(pvar[0]) != 65 )
      {
        if ( (unsigned int)dword_18019D4B0 <= 2 )
          goto LABEL_29;
        LODWORD(v20) = 395;
        goto LABEL_28;
      }
      v15 = 6LL;
      v16 = v23;
      v17 = *((_QWORD *)this + 63) + 834LL * v5;
      do
      {
        v17 += 128LL;
        v18 = *v16;
        v16 += 8;
        *(_OWORD *)(v17 - 128) = v18;
        *(_OWORD *)(v17 - 112) = *(v16 - 7);
        *(_OWORD *)(v17 - 96) = *(v16 - 6);
        *(_OWORD *)(v17 - 80) = *(v16 - 5);
        *(_OWORD *)(v17 - 64) = *(v16 - 4);
        *(_OWORD *)(v17 - 48) = *(v16 - 3);
        *(_OWORD *)(v17 - 32) = *(v16 - 2);
        *(_OWORD *)(v17 - 16) = *(v16 - 1);
        --v15;
      }
      while ( v15 );
      *(_OWORD *)v17 = *v16;
      *(_OWORD *)(v17 + 16) = v16[1];
      *(_OWORD *)(v17 + 32) = v16[2];
      *(_OWORD *)(v17 + 48) = v16[3];
      *(_WORD *)(v17 + 64) = *((_WORD *)v16 + 32);
      PropVariantClear(pvar);
      if ( ++v5 >= *((_DWORD *)this + 106) )
        goto LABEL_17;
    }
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_17;
    HIDWORD(v20) = v14;
    LODWORD(v20) = 393;
    goto LABEL_36;
  }
LABEL_17:
  PropVariantClear(pvar);
  return v4;
}
