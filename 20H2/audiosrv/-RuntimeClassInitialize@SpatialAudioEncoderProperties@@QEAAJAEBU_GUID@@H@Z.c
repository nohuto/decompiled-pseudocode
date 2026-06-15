/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18012B630
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderProperties@@AEBU_GUID@@AEAH@Z @ 0x18012A4C4 (--$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     Create_SpatialAudioPositionCalc @ 0x180029B50 (Create_SpatialAudioPositionCalc.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012A778 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012A900 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012AA88 (-ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012AB9C (-ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012ACAC (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012B39C (-QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::RuntimeClassInitialize(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2,
        int a3)
{
  _QWORD *v3; // r15
  int v7; // ebp
  int v8; // r12d
  int SpatialAudioPositionCalc; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  int RegisterForOverrides; // esi
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ebx
  void *v22; // rax
  __int64 v23; // rax
  float v24; // xmm4_4
  __int64 v25; // rcx
  __int64 v26; // rdx
  __m128 v27; // xmm3
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __m128 v30; // xmm0
  __m128 v31; // xmm1
  __int64 v33; // [rsp+40h] [rbp-48h] BYREF
  __int64 v34; // [rsp+90h] [rbp+8h] BYREF
  __int64 v35; // [rsp+A8h] [rbp+20h] BYREF

  v3 = (_QWORD *)((char *)this + 536);
  v7 = 0;
  v8 = 0;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 67);
  SpatialAudioPositionCalc = Create_SpatialAudioPositionCalc(v3);
  RegisterForOverrides = SpatialAudioPositionCalc;
  v13 = 2;
  if ( SpatialAudioPositionCalc >= 0 )
  {
    v14 = *(_QWORD *)&a2->Data1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
    if ( *(_QWORD *)&a2->Data1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
      v14 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
    if ( v14 )
    {
      v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data1 )
        v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)DOLBY_ATMOS_MAT_SPATIAL_ENCODER.Data4;
      if ( v15 )
      {
        v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data1 )
          v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER.Data4;
        if ( !v16 )
          goto LABEL_15;
        v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
          v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER.Data4;
        if ( v17 )
        {
          v18 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER.Data1 )
            v18 = *(_QWORD *)a2->Data4 - *(_QWORD *)DTSX_HEADPHONES_SPATIAL_ENCODER.Data4;
          if ( !v18 )
            goto LABEL_22;
          v19 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data1 )
            v19 = *(_QWORD *)a2->Data4 - *(_QWORD *)DTSX_TWOSPEAKER_SPATIAL_ENCODER.Data4;
          if ( v19 )
          {
            v20 = *(_QWORD *)&a2->Data1 - MULTICHANNEL_SPATIAL_ENCODER;
            if ( *(_QWORD *)&a2->Data1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
              v20 = *(_QWORD *)a2->Data4 - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
            if ( !v20 )
            {
              v8 = 1;
              SpatialAudioEncoderProperties::ConfigureMultiChannel(this, a2);
            }
          }
          else
          {
LABEL_22:
            SpatialAudioEncoderProperties::ConfigureDtsxHeadphones(this, a2);
          }
        }
        else
        {
LABEL_15:
          v7 = 1;
          SpatialAudioEncoderProperties::ConfigureDolbyAtmosHeadphonesEncoder(this, a2);
        }
      }
      else
      {
        v7 = 1;
        SpatialAudioEncoderProperties::ConfigureDolbyAtmosMATEncoder(this, a2);
      }
    }
    else
    {
      SpatialAudioEncoderProperties::ConfigureSpatialAudioHrtfEncoder(this, a2);
    }
    RegisterForOverrides = SpatialAudioEncoderProperties::QueryRegisterForOverrides(
                             this,
                             (const struct _GUID *)((char *)this + 100));
  }
  else if ( (unsigned int)dword_18019C480 > 2 )
  {
    LODWORD(v34) = SpatialAudioPositionCalc;
    LODWORD(v35) = 149;
    v33 = (__int64)"SpatialAudioEncoderProperties::RuntimeClassInitialize";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019C480,
      byte_18016C02A,
      v10,
      v11,
      (const CHAR **)&v33,
      (__int64)&v35,
      (__int64)&v34);
  }
  v21 = 17;
  if ( RegisterForOverrides >= 0 )
  {
    if ( a3 )
    {
      RegisterForOverrides = -2147024882;
      v22 = _aligned_malloc(0x110uLL, 0x10uLL);
      *((_QWORD *)this + 6) = v22;
      if ( v22 )
      {
        RegisterForOverrides = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(*(_QWORD *)*v3 + 24LL))(
                                 *v3,
                                 (char *)this + 272,
                                 v22,
                                 272LL);
        if ( v7 || v8 )
        {
          v23 = 0LL;
          v24 = *((float *)this + 69) * 0.5;
          v25 = 17LL;
          do
          {
            v26 = *((_QWORD *)this + 6);
            v27 = *(__m128 *)(v23 + v26);
            if ( v7 )
            {
              v28 = _mm_shuffle_ps(v27, v27, 255);
              v29 = _mm_shuffle_ps(v27, v27, 170);
              v30 = _mm_shuffle_ps(v27, v27, 85);
              v29.m128_f32[0] = v29.m128_f32[0] + v24;
              v27.m128_f32[0] = v27.m128_f32[0] + v24;
              *(__m128 *)(v23 + v26) = _mm_unpacklo_ps(_mm_unpacklo_ps(v27, v30), _mm_unpacklo_ps(v29, v28));
            }
            else
            {
              v31 = _mm_shuffle_ps(v27, v27, 198);
              v31.m128_i32[0] = _mm_shuffle_ps(v27, v27, 170).m128_u32[0] ^ _xmm;
              *(__m128 *)(v23 + v26) = _mm_shuffle_ps(v31, v31, 198);
            }
            v23 += 16LL;
            --v25;
          }
          while ( v25 );
        }
      }
    }
  }
  *((_DWORD *)this + 136) = 0;
  if ( RegisterForOverrides >= 0 )
  {
    do
    {
      --v21;
      if ( (v13 & *((_DWORD *)this + 29)) != 0 )
        ++*((_DWORD *)this + 136);
      v13 *= 2;
    }
    while ( v21 );
  }
  return (unsigned int)RegisterForOverrides;
}
