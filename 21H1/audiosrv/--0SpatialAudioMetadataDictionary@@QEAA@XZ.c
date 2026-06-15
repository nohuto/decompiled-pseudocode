/*
 * XREFs of ??0SpatialAudioMetadataDictionary@@QEAA@XZ @ 0x18012D5C0
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@$$QEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x18012D324 (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioMetadataDictionary@@UISpatialAudioMetadataDictionaryData@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18012D4F0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioMetadataDictionary@@UISp.c)
 */

SpatialAudioMetadataDictionary *__fastcall SpatialAudioMetadataDictionary::SpatialAudioMetadataDictionary(
        SpatialAudioMetadataDictionary *this)
{
  SpatialAudioMetadataDictionary *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioMetadataDictionary,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioMetadataDictionary,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &SpatialAudioMetadataDictionary::`vftable';
  *((_QWORD *)this + 1) = &SpatialAudioMetadataDictionary::`vftable'{for `ISpatialAudioMetadataDictionaryData'};
  *((_QWORD *)this + 2) = &SpatialAudioMetadataDictionary::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 56), 0, 0);
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 60) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 16) = 0LL;
  result = this;
  *(GUID *)((char *)this + 104) = GUID_00000000_0000_0000_0000_000000000000;
  return result;
}
