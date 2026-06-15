/*
 * XREFs of ?OnModuleChanged@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUIAudioDeviceBrokerDevice@2345@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@Z @ 0x140025200
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140010F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x14001A65C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeDelegates@V_lambda_1f8eca39d9ab48643c25b0657f8b112d_@@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_1f8eca39d9ab48643c25b0657f8b112d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x14001FAF8 (--$InvokeDelegates@V_lambda_1f8eca39d9ab48643c25b0657f8b112d_@@U-$ITypedEventHandler@PEAVAudioDe.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x140054E74 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::OnModuleChanged(
        RTL_SRWLOCK *this,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *a2,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *a3)
{
  RTL_SRWLOCK *v3; // rdi
  int v4; // edi
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v7[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v9; // [rsp+50h] [rbp+10h] BYREF
  RTL_SRWLOCK *v10; // [rsp+60h] [rbp+20h] BYREF
  struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *v11; // [rsp+68h] [rbp+28h] BYREF

  v9 = 0LL;
  v7[0] = &v10;
  v3 = this + 10;
  v10 = this;
  v7[1] = &v11;
  v11 = a3;
  wil::srwlock::lock_exclusive(this + 11, &SRWLock);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, v3);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( !v9 )
    return 0LL;
  v4 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_1f8eca39d9ab48643c25b0657f8b112d_,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>(
         v7,
         v9,
         (__int64)v3);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9);
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x54E,
    (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
