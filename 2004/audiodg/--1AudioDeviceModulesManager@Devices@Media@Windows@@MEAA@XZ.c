/*
 * XREFs of ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x140013190
 * Callers:
 *     ??_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140013240 (--_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140010FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400198F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Media::Devices::AudioDeviceModulesManager::~AudioDeviceModulesManager(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( *((_BYTE *)this + 120) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 12) + 72LL))(
      *((_QWORD *)this + 12),
      *((_QWORD *)this + 14));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 104);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 96);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v2);
  }
  WindowsDeleteString(*((HSTRING *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  if ( *((__int64 *)this + 7) < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::Release(2LL * *((_QWORD *)this + 7));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 40);
}
