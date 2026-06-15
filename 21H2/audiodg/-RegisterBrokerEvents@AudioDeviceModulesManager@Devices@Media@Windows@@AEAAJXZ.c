/*
 * XREFs of ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x140011A48
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140012D10 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBroker____Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____::_)(Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____lambda_511023af88e174782ac1e7ddac964c62___ @ 0x14001182C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--.c)
 *     ??1?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x140011970 (--1-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Window.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400198D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-38h]
  Windows::Media::Devices::AudioDeviceModulesManager *v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)&v7 = Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged;
  DWORD2(v7) = 0;
  v8 = this;
  v9 = v7;
  v2 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBroker____Windows::Foundation::Internal::AggregateType_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____::___Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker___Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____lambda_511023af88e174782ac1e7ddac964c62___1_Windows::Media::Devices::Internal::IAudioDeviceBroker___Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs_____lambda_511023af88e174782ac1e7ddac964c62___(
         &v11,
         (__int64)&v8);
  v3 = *v2;
  v12 = *v2;
  *v2 = 0LL;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::Release();
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 12) + 64LL))(
         *((_QWORD *)this + 12),
         v3,
         (char *)this + 112);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_BYTE *)this + 120) = 1;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x208,
      (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v4,
      (int)Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>(&v12);
  return v5;
}
