/*
 * XREFs of ??0SpatialAudioDeviceStateReader@@QEAA@XZ @ 0x180055A98
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180055B2C (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioDeviceStateReader@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800559E0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioDeviceStateReader@@VFtmB.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 */

SpatialAudioDeviceStateReader *__fastcall SpatialAudioDeviceStateReader::SpatialAudioDeviceStateReader(
        SpatialAudioDeviceStateReader *this)
{
  memset_0((char *)this + 8, 0, 0x208uLL);
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *(_QWORD *)this = &SpatialAudioStateIO::`vftable';
  *((_OWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>((__int64)this + 568);
  *(_QWORD *)this = &SpatialAudioDeviceStateReader::`vftable';
  *((_QWORD *)this + 71) = &SpatialAudioDeviceStateReader::`vftable'{for `ISpatialAudioDeviceStateReader'};
  *((_QWORD *)this + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
