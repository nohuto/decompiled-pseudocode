/*
 * XREFs of ??0SpatialAudioEncoderProperties@@QEAA@XZ @ 0x18012A64C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderProperties@@AEBU_GUID@@AEAH@Z @ 0x18012A4C4 (--$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioEncoderProperties@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18012A584 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioEncoderProperties@@VFtmB.c)
 */

SpatialAudioEncoderProperties *__fastcall SpatialAudioEncoderProperties::SpatialAudioEncoderProperties(
        SpatialAudioEncoderProperties *this)
{
  SpatialAudioEncoderProperties *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioEncoderProperties,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioEncoderProperties,Microsoft::WRL::FtmBase>((__int64)this);
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &SpatialAudioEncoderProperties::`vftable'{for `ISpatialAudioEncoderProperties'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioEncoderProperties,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 56), 0, 0);
  *((_QWORD *)this + 67) = 0LL;
  result = this;
  *((_DWORD *)this + 136) = 0;
  return result;
}
