/*
 * XREFs of ?StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x18042BC9C
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_e3a97466454155837bd5f0bc0e9aabcb__&_::Run @ 0x18042BC60 (wil--details--functor_wrapper_void__lambda_e3a97466454155837bd5f0bc0e9aabcb__-_--Run.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::IDeviceWatcher____Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceInformation___Windows::Devices::Enumeration::IDeviceInformation_____::_)(Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformation__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformation_____lambda_56008a67ac3c8425e2b06e425c0b3f19___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformation___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformation_____lambda_56008a67ac3c8425e2b06e425c0b3f19___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformation___ @ 0x18042A740 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18042A740.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::IDeviceWatcher____Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceInformationUpdate___Windows::Devices::Enumeration::IDeviceInformationUpdate_____::_)(Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformationUpdate_____lambda_6daaf3e22a1891bd5f0977291f8d7dfd___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformationUpdate_____lambda_6daaf3e22a1891bd5f0977291f8d7dfd___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate___ @ 0x18042A7AC (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18042A7AC.c)
 */

__int64 __fastcall TwinUI::Lighting::AssistantLightManager::StartWatching(
        TwinUI::Lighting::AssistantLightManager *this)
{
  __int64 v2; // rbx
  int ActivationFactory; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbx
  _QWORD *v7; // r15
  void *v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // edi
  void *v12; // rax
  __int64 updated; // rdi
  int v14; // eax
  int v15; // esi
  void *v16; // rax
  __int64 v17; // rsi
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v21; // [rsp+20h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-28h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v21 = 0LL;
  v23 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Devices.Enumeration.DeviceInformation",
    0x2Eu,
    0x2Du);
  v2 = v23;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  ActivationFactory = RoGetActivationFactory(v2, &GUID_c17f100e_3a46_4a78_8013_769dc9b97390, &v21);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 61LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_40;
  }
  v6 = v21;
  v7 = (_QWORD *)((char *)this + 72);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  v23 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"System.Devices.InterfaceClassGuid:=\"{4D1E55B2-F16F-11CF-88CB-001111000030}\" AND System.Devices.InterfaceEnabled:=S"
     "ystem.StructuredQueryType.Boolean#True AND System.DeviceInterface.Hid.UsagePage:=89 AND System.DeviceInterface.Hid.UsageId:=1",
    0xF0u,
    0xEFu);
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v6 + 112LL))(
                        v6,
                        v23,
                        (char *)this + 72);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v5 = 62LL;
    goto LABEL_5;
  }
  hstringHeader.Reserved.Reserved1 = this;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = TwinUI::Lighting::AssistantLightManager::OnDeviceAdded;
  v8 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v8 )
    v9 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::IDeviceWatcher____Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceInformation___Windows::Devices::Enumeration::IDeviceInformation_____::___Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformation____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformation_____lambda_56008a67ac3c8425e2b06e425c0b3f19___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformation___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformation_____lambda_56008a67ac3c8425e2b06e425c0b3f19___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformation___(
           (__int64)v8,
           (__int128 *)&hstringHeader);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v7 + 48LL))(*v7, v9, (char *)this + 80);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v4 = v11;
    goto LABEL_40;
  }
  hstringHeader.Reserved.Reserved1 = this;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = TwinUI::Lighting::AssistantLightManager::OnDeviceRemoved;
  v12 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  updated = 0LL;
  if ( v12 )
    updated = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::IDeviceWatcher____Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceInformationUpdate___Windows::Devices::Enumeration::IDeviceInformationUpdate_____::___Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformationUpdate_____lambda_6daaf3e22a1891bd5f0977291f8d7dfd___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformationUpdate_____lambda_6daaf3e22a1891bd5f0977291f8d7dfd___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate___(
                (__int64)v12,
                (__int128 *)&hstringHeader);
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v7 + 80LL))(*v7, updated, (char *)this + 88);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v14);
    if ( updated )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)updated + 16LL))(updated);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v4 = v15;
    goto LABEL_40;
  }
  hstringHeader.Reserved.Reserved1 = this;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = TwinUI::Lighting::AssistantLightManager::OnDeviceUpdated;
  v16 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = 0LL;
  if ( v16 )
    v17 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::IDeviceWatcher____Windows::Foundation::Internal::AggregateType_Windows::Devices::Enumeration::DeviceInformationUpdate___Windows::Devices::Enumeration::IDeviceInformationUpdate_____::___Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformationUpdate_____lambda_6daaf3e22a1891bd5f0977291f8d7dfd___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Devices::Enumeration::DeviceWatcher___Windows::Devices::Enumeration::DeviceInformationUpdate_____lambda_6daaf3e22a1891bd5f0977291f8d7dfd___1_Windows::Devices::Enumeration::IDeviceWatcher___Windows::Devices::Enumeration::IDeviceInformationUpdate___(
            (__int64)v16,
            (__int128 *)&hstringHeader);
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v7 + 64LL))(*v7, v17, (char *)this + 96);
  if ( v18 < 0 )
  {
    v19 = 71LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v18);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( updated )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)updated + 16LL))(updated);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v4 = v18;
    goto LABEL_40;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 136LL))(*v7);
  if ( v18 < 0 )
  {
    v19 = 73LL;
    goto LABEL_24;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( updated )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)updated + 16LL))(updated);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v4 = 0;
LABEL_40:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return v4;
}
