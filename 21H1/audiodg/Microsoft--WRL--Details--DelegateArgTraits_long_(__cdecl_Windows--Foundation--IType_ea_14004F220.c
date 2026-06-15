/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBroker____Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____::_)(Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___::Invoke @ 0x14004F220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x14004C884 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBroker____Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____::___Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs___::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
