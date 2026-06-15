/*
 * XREFs of ??0AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x140020968
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001FE90 (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1400110D8 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *__fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::AudioDeviceBrokerDevice(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *result; // rax

  v1 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>((__int64)this + 8);
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 7) = 1LL;
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *v1 = &Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 2) = &Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 11) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  *((_BYTE *)this + 136) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 20);
  InitializeSRWLock((PSRWLOCK)this + 21);
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  *((_QWORD *)this + 27) = 0LL;
  result = this;
  *((_BYTE *)this + 224) = 0;
  return result;
}
