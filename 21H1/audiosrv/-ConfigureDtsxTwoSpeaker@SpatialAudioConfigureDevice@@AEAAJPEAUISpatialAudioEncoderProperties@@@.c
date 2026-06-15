/*
 * XREFs of ?ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012AAD0
 * Callers:
 *     ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180068020 (-ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSetti.c)
 *     ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x18012ACD0 (-ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 *     Create_MetadataDictionaryData @ 0x18012D1E8 (Create_MetadataDictionaryData.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureDtsxTwoSpeaker(
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
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v18[160]; // [rsp+68h] [rbp-A0h] BYREF

  v17[1] = -2LL;
  v17[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
  v7 = v4;
  if ( v4 >= 0 )
  {
    MetadataDictionaryData = (*(__int64 (__fastcall **)(struct ISpatialAudioEncoderProperties *, _BYTE *))(*(_QWORD *)a2 + 24LL))(
                               a2,
                               v18);
    v7 = MetadataDictionaryData;
    if ( MetadataDictionaryData >= 0 )
    {
      MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 11) + 56LL))(
                                 *((_QWORD *)this + 11),
                                 v18);
      v7 = MetadataDictionaryData;
      if ( MetadataDictionaryData >= 0 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v17);
        MetadataDictionaryData = Create_MetadataDictionaryData(v11, &DTSX_SPEAKERS_METADATA_V1_0, v12, v17);
        v7 = MetadataDictionaryData;
        if ( MetadataDictionaryData >= 0 )
        {
          MetadataDictionaryData = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
                                     *((_QWORD *)this + 11),
                                     v17[0]);
          v7 = MetadataDictionaryData;
          if ( MetadataDictionaryData >= 0 || (unsigned int)dword_18019D4B0 <= 2 )
            goto LABEL_17;
          v14 = 451;
        }
        else
        {
          if ( (unsigned int)dword_18019D4B0 <= 2 )
            goto LABEL_17;
          v14 = 448;
        }
      }
      else
      {
        if ( (unsigned int)dword_18019D4B0 <= 2 )
          goto LABEL_17;
        v14 = 445;
      }
    }
    else
    {
      if ( (unsigned int)dword_18019D4B0 <= 2 )
        goto LABEL_17;
      v14 = 442;
    }
    v15 = MetadataDictionaryData;
    v16 = (__int64)"SpatialAudioConfigureDevice::ConfigureDtsxTwoSpeaker";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019D4B0,
      byte_18016D2CE,
      v9,
      v10,
      (const CHAR **)&v16,
      (__int64)&v14,
      (__int64)&v15);
    goto LABEL_17;
  }
  if ( (unsigned int)dword_18019D4B0 > 2 )
  {
    v14 = v4;
    v15 = 439;
    v16 = (__int64)"SpatialAudioConfigureDevice::ConfigureDtsxTwoSpeaker";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019D4B0,
      byte_18016D2CE,
      v5,
      v6,
      (const CHAR **)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
LABEL_17:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v17);
  return v7;
}
