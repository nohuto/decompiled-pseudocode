/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::IDeviceWatcher____Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceInformationUpdate___Windows::Devices::Enumeration::IDeviceInformationUpdate_____::_)(Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformationUpdate_____lambda_6daaf3e22a1891bd5f0977291f8d7dfd___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformationUpdate_____lambda_6daaf3e22a1891bd5f0977291f8d7dfd___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate___ @ 0x18042A7AC
 * Callers:
 *     ?StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x18042BC9C (-StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::IDeviceWatcher____Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceInformationUpdate___Windows::Devices::Enumeration::IDeviceInformationUpdate_____::___Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformationUpdate_____lambda_6daaf3e22a1891bd5f0977291f8d7dfd___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformationUpdate_____lambda_6daaf3e22a1891bd5f0977291f8d7dfd___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate___(
        __int64 a1,
        __int128 *a2)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher *,Windows::Devices::Enumeration::DeviceInformationUpdate *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v4 = *a2;
  *(_QWORD *)a1 = off_1804A8020;
  result = a1;
  *(_OWORD *)(a1 + 16) = v4;
  return result;
}
