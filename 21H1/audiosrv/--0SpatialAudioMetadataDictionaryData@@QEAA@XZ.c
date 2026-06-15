/*
 * XREFs of ??0SpatialAudioMetadataDictionaryData@@QEAA@XZ @ 0x18012CD14
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionaryData@@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Z @ 0x18012CBA4 (--$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioMetadataDictionaryData@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18012CC4C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioMetadataDictionaryData@@.c)
 */

SpatialAudioMetadataDictionaryData *__fastcall SpatialAudioMetadataDictionaryData::SpatialAudioMetadataDictionaryData(
        SpatialAudioMetadataDictionaryData *this)
{
  SpatialAudioMetadataDictionaryData *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &SpatialAudioMetadataDictionaryData::`vftable'{for `ISpatialAudioMetadataDictionaryData'};
  *((_QWORD *)this + 1) = &SpatialAudioMetadataDictionaryData::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 48), 0, 0);
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_WORD *)this + 50) = 0;
  result = this;
  *(GUID *)((char *)this + 104) = GUID_00000000_0000_0000_0000_000000000000;
  return result;
}
