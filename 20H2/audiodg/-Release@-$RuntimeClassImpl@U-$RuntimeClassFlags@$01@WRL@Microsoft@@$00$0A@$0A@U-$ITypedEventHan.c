/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140019900
 * Callers:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBroker____Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____::_)(Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____lambda_511023af88e174782ac1e7ddac964c62___ @ 0x14001185C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--.c)
 *     ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x140011A78 (-RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ.c)
 *     ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x14001524C (--1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@567@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140018EDC (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVAudioDevi.c)
 *     ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x140019DFC (--1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140020C08 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@PEAVAudioDe.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@567@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140020C30 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVectorView@PEAVAudio.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140020C58 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Inte.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140054A7C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperation@PEAVM.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001EBA8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::Release(
        __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = ATL::SafeDecrementReferenceMultiThread((int *)(a1 + 12));
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, v1 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
