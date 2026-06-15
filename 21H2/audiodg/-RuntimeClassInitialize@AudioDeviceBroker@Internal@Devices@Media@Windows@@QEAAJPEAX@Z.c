/*
 * XREFs of ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140012BC4
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x140012B44 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002164 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x140011970 (--1-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@VAudioDeviceBroker@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerDevice@5673@PEAUIAudioDeviceBrokerChangedEventArgs@5673@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@01@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@P834567@EAAJPEAUIAudioDeviceBrokerDevice@4567@PEAUIAudioDeviceBrokerChangedEventArgs@4567@@Z@Z @ 0x14001F040 (--$Callback@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PE.c)
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001FE90 (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 *     ??I?$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@XZ @ 0x14002124C (--I-$com_ptr_t@UIAudioDeviceModule@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA.c)
 *     ?Make@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x140024F9C (-Make@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualityPre.c)
 *     ?Make@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x140024FF0 (-Make@-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Wind.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        void *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  void **v10; // rax
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  *(_QWORD *)&v12 = Windows::Media::Devices::Internal::AudioDeviceBroker::OnModuleChanged;
  DWORD2(v12) = 0;
  v13 = v12;
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>(
    &v16,
    this,
    &v13);
  if ( a2 )
  {
    v7 = wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&((char *)this + 64);
    v8 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::Make(v7);
    v4 = v8;
    if ( v8 >= 0 )
    {
      v9 = wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&((char *)this + 72);
      v8 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::Make(v9);
      v4 = v8;
      if ( v8 >= 0 )
      {
        v10 = (void **)wil::com_ptr_t<Windows::Media::Devices::IAudioDeviceModule,wil::err_returncode_policy>::operator&(&v15);
        v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,void * &>(v10);
        v4 = v8;
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v15 + 64LL))(v15, v16, &v12);
          v4 = v8;
          if ( v8 >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 104LL))(*((_QWORD *)this + 8), v15);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 104LL))(*((_QWORD *)this + 9), v12);
            v4 = 0;
            goto LABEL_14;
          }
          v6 = 1437LL;
        }
        else
        {
          v6 = 1436LL;
        }
      }
      else
      {
        v6 = 1435LL;
      }
    }
    else
    {
      v6 = 1434LL;
    }
    v5 = (unsigned int)v8;
  }
  else
  {
    v4 = -2147467261;
    v5 = 2147500035LL;
    v6 = 1433LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v5,
    v12);
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>(&v16);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v15);
  return v4;
}
