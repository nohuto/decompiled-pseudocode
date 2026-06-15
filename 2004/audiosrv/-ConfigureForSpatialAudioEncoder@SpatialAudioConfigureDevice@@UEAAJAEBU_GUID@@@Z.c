/*
 * XREFs of ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x18012A980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AC8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x180129DBC (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoder.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012A0AC (-ConfigureDolbyAtmosMATEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012A31C (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderPropert.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012A58C (-ConfigureDtsxHeadphones@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012A780 (-ConfigureDtsxTwoSpeaker@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@.c)
 *     ?ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012ABE8 (-ConfigureMultiChannel@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProperties@@@Z @ 0x18012AD24 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioConfigureDevice@@AEAAJPEAUISpatialAudioEncoderProp.c)
 *     Create_SpatialAudioEncoderProperties @ 0x18012C5D0 (Create_SpatialAudioEncoderProperties.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder(
        SpatialAudioConfigureDevice *this,
        const struct _GUID *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  struct ISpatialAudioEncoderProperties *v22; // [rsp+88h] [rbp+38h] BYREF

  v19[1] = -2LL;
  v22 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v4 )
    LeaveCriticalSection(v4);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11));
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v22);
  v6 = Create_SpatialAudioEncoderProperties(a2, v5, &v22);
  v9 = v6;
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v20) = v6;
      LODWORD(v21) = 138;
LABEL_38:
      v19[0] = (__int64)"SpatialAudioConfigureDevice::ConfigureForSpatialAudioEncoder";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D305,
        v7,
        v8,
        (const CHAR **)v19,
        (__int64)&v21,
        (__int64)&v20);
      goto LABEL_39;
    }
    goto LABEL_39;
  }
  v10 = *(_QWORD *)&a2->Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v10 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v10 )
  {
    v11 = SpatialAudioConfigureDevice::ConfigureSpatialAudioHrtfEncoder(this, v22);
LABEL_34:
    v9 = v11;
    goto LABEL_35;
  }
  v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1 )
    v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data4;
  if ( !v12 )
  {
    v11 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosMATEncoder(this, v22);
    goto LABEL_34;
  }
  v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1 )
    v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data4;
  if ( !v13 )
  {
    v11 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosHeadphonesEncoder(this, v22);
    goto LABEL_34;
  }
  v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
    v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data4;
  if ( !v14 )
  {
    v11 = SpatialAudioConfigureDevice::ConfigureDolbyAtmosTwoSpeaker(this, v22);
    goto LABEL_34;
  }
  v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1 )
    v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)DTSX_HEADPHONES_SPATIAL_ENCODER.Data4;
  if ( !v15 )
  {
    v11 = SpatialAudioConfigureDevice::ConfigureDtsxHeadphones(this, v22);
    goto LABEL_34;
  }
  v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
    v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data4;
  if ( !v16 )
  {
    v11 = SpatialAudioConfigureDevice::ConfigureDtsxTwoSpeaker(this, v22);
    goto LABEL_34;
  }
  v17 = *(_QWORD *)&a2->Data1 - MULTICHANNEL_SPATIAL_ENCODER;
  if ( *(_QWORD *)&a2->Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
    v17 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
  if ( !v17 )
  {
    v11 = SpatialAudioConfigureDevice::ConfigureMultiChannel(this, v22);
    goto LABEL_34;
  }
LABEL_35:
  if ( v9 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v20) = v9;
      LODWORD(v21) = 175;
      goto LABEL_38;
    }
LABEL_39:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 40LL))(*((_QWORD *)this + 11));
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11));
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v22);
  return (unsigned int)v9;
}
