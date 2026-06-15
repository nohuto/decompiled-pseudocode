/*
 * XREFs of ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012968C
 * Callers:
 *     ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x1800677F0 (-ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSetti.c)
 *     ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x180129CF0 (-ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 *     Create_MetadataDictionaryData @ 0x18012C208 (Create_MetadataDictionaryData.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(
        SpatialAudioConfigureDevice *this,
        struct ISpatialAudioEncoderProperties *a2)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  int MetadataDictionaryData; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v20[160]; // [rsp+68h] [rbp-A0h] BYREF

  v19[1] = -2LL;
  v19[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
  v7 = v4;
  if ( v4 >= 0 )
  {
    MetadataDictionaryData = (*(__int64 (__fastcall **)(struct ISpatialAudioEncoderProperties *, _BYTE *))(*(_QWORD *)a2 + 24LL))(
                               a2,
                               v20);
    v7 = MetadataDictionaryData;
    if ( MetadataDictionaryData >= 0 )
    {
      MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 11) + 56LL))(
                                 *((_QWORD *)this + 11),
                                 v20);
      v7 = MetadataDictionaryData;
      if ( MetadataDictionaryData >= 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v19);
        MetadataDictionaryData = Create_MetadataDictionaryData(v11, &DOLBY_ATMOS_MEDIA_METADATA_V1_0, v12, v19);
        v7 = MetadataDictionaryData;
        if ( MetadataDictionaryData >= 0 )
        {
          MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
                                     *((_QWORD *)this + 11),
                                     v19[0]);
          v7 = MetadataDictionaryData;
          if ( MetadataDictionaryData >= 0 )
          {
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v19);
            MetadataDictionaryData = Create_MetadataDictionaryData(v13, &DOLBY_ATMOS_HOME_METADATA_V1_0, v14, v19);
            v7 = MetadataDictionaryData;
            if ( MetadataDictionaryData >= 0 )
            {
              MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
                                         *((_QWORD *)this + 11),
                                         v19[0]);
              v7 = MetadataDictionaryData;
              if ( MetadataDictionaryData >= 0 || (unsigned int)dword_18019C480 <= 2 )
                goto LABEL_23;
              v16 = 401;
            }
            else
            {
              if ( (unsigned int)dword_18019C480 <= 2 )
                goto LABEL_23;
              v16 = 398;
            }
          }
          else
          {
            if ( (unsigned int)dword_18019C480 <= 2 )
              goto LABEL_23;
            v16 = 395;
          }
        }
        else
        {
          if ( (unsigned int)dword_18019C480 <= 2 )
            goto LABEL_23;
          v16 = 392;
        }
      }
      else
      {
        if ( (unsigned int)dword_18019C480 <= 2 )
          goto LABEL_23;
        v16 = 389;
      }
    }
    else
    {
      if ( (unsigned int)dword_18019C480 <= 2 )
        goto LABEL_23;
      v16 = 386;
    }
    v17 = MetadataDictionaryData;
    v18 = (__int64)"SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019C480,
      byte_18016C02A,
      v9,
      v10,
      (const CHAR **)&v18,
      (__int64)&v16,
      (__int64)&v17);
    goto LABEL_23;
  }
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    v16 = v4;
    v17 = 383;
    v18 = (__int64)"SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019C480,
      byte_18016C02A,
      v5,
      v6,
      (const CHAR **)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
LABEL_23:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v19);
  return v7;
}
