/*
 * XREFs of ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180068020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012A10C (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoder.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012A3FC (-ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012A66C (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012A8DC (-ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012AAD0 (-ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@.c)
 *     ?ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012AF38 (-ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012B074 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProp.c)
 *     Create_SpatialAudioEncoderProperties @ 0x18012C920 (Create_SpatialAudioEncoderProperties.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings(
        SpatialAudioConfigureDevice *this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // [rsp+40h] [rbp-19h] BYREF
  struct ISpatialAudioEncoderProperties *v26; // [rsp+48h] [rbp-11h] BYREF
  __int64 v27; // [rsp+50h] [rbp-9h] BYREF
  int v28; // [rsp+58h] [rbp-1h] BYREF
  __int64 v29; // [rsp+60h] [rbp+7h]
  GUID v30; // [rsp+68h] [rbp+Fh] BYREF

  v29 = -2LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( !a2 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v25 = 0xC380070057LL;
      v26 = (struct ISpatialAudioEncoderProperties *)"SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v26,
        (__int64)&v25 + 4,
        (__int64)&v25);
    }
    v10 = -2147024809;
    goto LABEL_73;
  }
  v30 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_73;
    LODWORD(v25) = 201;
LABEL_17:
    HIDWORD(v25) = v9;
    v26 = (struct ISpatialAudioEncoderProperties *)"SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_18019D4B0,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v25 + 4);
    goto LABEL_73;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12), &v28);
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_73;
    LODWORD(v25) = 204;
    goto LABEL_17;
  }
  if ( v28 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)this + 12) + 48LL))(*((_QWORD *)this + 12), &v30);
    v10 = v9;
    if ( v9 < 0 )
    {
      if ( (unsigned int)dword_18019D4B0 > 2 )
      {
        LODWORD(v25) = 209;
        goto LABEL_17;
      }
LABEL_73:
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
      goto LABEL_11;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11));
  if ( !v28 && !*(_DWORD *)a2 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
    goto LABEL_10;
  }
  v26 = 0LL;
  v13 = *(_QWORD *)&v30.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v30.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v13 = *(_QWORD *)v30.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v13 )
    v30 = *(GUID *)((char *)a2 + 12);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v26);
  v15 = Create_SpatialAudioEncoderProperties(&v30, v14, &v26);
  v10 = v15;
  if ( v15 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      HIDWORD(v25) = v15;
      LODWORD(v25) = 229;
LABEL_71:
      v27 = (__int64)"SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v27,
        (__int64)&v25,
        (__int64)&v25 + 4);
      goto LABEL_72;
    }
    goto LABEL_72;
  }
  v16 = *(_QWORD *)&v30.Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v30.Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v16 = *(_QWORD *)v30.Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v16 )
  {
    v17 = SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(this, v26);
LABEL_59:
    v10 = v17;
    goto LABEL_64;
  }
  v18 = *(_QWORD *)&v30.Data1 - *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v30.Data1 == *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1 )
    v18 = *(_QWORD *)v30.Data4 - *(_QWORD *)DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data4;
  if ( !v18 )
  {
    v17 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder(this, v26);
    goto LABEL_59;
  }
  v19 = *(_QWORD *)&v30.Data1 - *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v30.Data1 == *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1 )
    v19 = *(_QWORD *)v30.Data4 - *(_QWORD *)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data4;
  if ( !v19 )
  {
    v17 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder(this, v26);
    goto LABEL_59;
  }
  v20 = *(_QWORD *)&v30.Data1 - *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v30.Data1 == *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
    v20 = *(_QWORD *)v30.Data4 - *(_QWORD *)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data4;
  if ( !v20 )
  {
    v17 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(this, v26);
    goto LABEL_59;
  }
  v21 = *(_QWORD *)&v30.Data1 - *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v30.Data1 == *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1 )
    v21 = *(_QWORD *)v30.Data4 - *(_QWORD *)DTSX_HEADPHONES_SPATIAL_ENCODER.Data4;
  if ( !v21 )
  {
    v17 = SpatialAudioConfigureDevice::ConfigureDtsxHeadphones(this, v26);
    goto LABEL_59;
  }
  v22 = *(_QWORD *)&v30.Data1 - *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&v30.Data1 == *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
    v22 = *(_QWORD *)v30.Data4 - *(_QWORD *)DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data4;
  if ( !v22 )
  {
    v17 = SpatialAudioConfigureDevice::ConfigureDtsxTwoSpeaker(this, v26);
    goto LABEL_59;
  }
  v23 = *(_QWORD *)&v30.Data1 - MULTICHANNEL_SPATIAL_ENCODER;
  if ( *(_QWORD *)&v30.Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
    v23 = *(_QWORD *)v30.Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
  if ( !v23 )
  {
    v17 = SpatialAudioConfigureDevice::ConfigureMultiChannel(this, v26);
    goto LABEL_59;
  }
  v24 = *(_QWORD *)&v30.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v30.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v24 = *(_QWORD *)v30.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v24 || *(_DWORD *)a2 )
  {
    v10 = -2147418113;
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v25 = 0x8000FFFF0000010CuLL;
      goto LABEL_71;
    }
LABEL_72:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v26);
    goto LABEL_73;
  }
LABEL_64:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v26);
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      HIDWORD(v25) = v10;
      LODWORD(v25) = 272;
      v27 = (__int64)"SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v27,
        (__int64)&v25,
        (__int64)&v25 + 4);
    }
    goto LABEL_73;
  }
LABEL_10:
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct SpatialAudioSettings *, struct SpatialAudioEncoderDescriptor *, _QWORD))(**((_QWORD **)this + 11) + 64LL))(
          *((_QWORD *)this + 11),
          a2,
          a3,
          a4);
  v10 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      HIDWORD(v25) = v11;
      LODWORD(v25) = 275;
      v27 = (__int64)"SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoderSettings";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v27,
        (__int64)&v25,
        (__int64)&v25 + 4);
    }
    goto LABEL_73;
  }
LABEL_11:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11));
  return (unsigned int)v10;
}
