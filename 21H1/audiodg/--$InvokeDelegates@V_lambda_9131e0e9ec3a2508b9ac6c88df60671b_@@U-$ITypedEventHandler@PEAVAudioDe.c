/*
 * XREFs of ??$InvokeDelegates@V_lambda_9131e0e9ec3a2508b9ac6c88df60671b_@@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_9131e0e9ec3a2508b9ac6c88df60671b_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x140049C08
 * Callers:
 *     ??$DoInvoke@V_lambda_9131e0e9ec3a2508b9ac6c88df60671b_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9131e0e9ec3a2508b9ac6c88df60671b_@@@Z @ 0x1400499F4 (--$DoInvoke@V_lambda_9131e0e9ec3a2508b9ac6c88df60671b_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140010FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x140013080 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x14004B3B0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_9131e0e9ec3a2508b9ac6c88df60671b_,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // esi
  unsigned int v6; // edi
  __int64 v7; // rbx
  _QWORD *v8; // r15
  struct IUnknown **i; // r14
  unsigned int v10; // eax
  int MatchingRestrictedErrorInfo; // ebx
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v6 = 0;
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v13);
  v7 = v13[0];
  v8 = *(_QWORD **)(v13[0] + 32LL);
  for ( i = *(struct IUnknown ***)(v13[0] + 16LL); i != *(struct IUnknown ***)(v7 + 24); ++i )
  {
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))(*i)->lpVtbl[1].QueryInterface)(*i, **a1, *a1[1]);
    v6 = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError(v10, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
      v6 = 0;
    }
    if ( (v6 & 0x80000000) != 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v13[1] = *v8;
        v14 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v6, &v14);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v14);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        if ( MatchingRestrictedErrorInfo < 0 )
          v5 = v6;
        v6 = v5;
        v7 = v13[0];
        break;
      }
      RoTransformError(v6, 0LL, 0LL);
      v6 = 0;
    }
    ++v8;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  return v6;
}
