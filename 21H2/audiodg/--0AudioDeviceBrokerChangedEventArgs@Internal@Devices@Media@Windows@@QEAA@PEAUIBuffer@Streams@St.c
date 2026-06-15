/*
 * XREFs of ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x1400546D0
 * Callers:
 *     ?ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x140027A40 (-ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1400118D0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400211C8 (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *__fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::AudioDeviceBrokerChangedEventArgs(
        Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *this,
        struct Windows::Storage::Streams::IBuffer *a2)
{
  _QWORD *v2; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *)((char *)this + 16));
  v5 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 1LL;
  if ( v5 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this + 8, (__int64)a2);
  return this;
}
