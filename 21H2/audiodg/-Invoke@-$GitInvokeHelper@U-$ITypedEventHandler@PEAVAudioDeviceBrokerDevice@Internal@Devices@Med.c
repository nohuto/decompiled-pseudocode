/*
 * XREFs of ?Invoke@?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUIAudioDeviceBrokerDevice@3Devices@Media@4@PEAUIAudioDeviceBrokerChangedEventArgs@3674@@Z @ 0x140024A90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012E2C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>,2>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  v6 = *(_QWORD *)(a1 + 48);
  v9 = 0LL;
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
           v6,
           &GUID_26b3f929_7275_5554_8092_5102d037ae06,
           &v9);
    v6 = v9;
  }
  else
  {
    v7 = -2147024809;
  }
  if ( v7 >= 0 )
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, a2, a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  return (unsigned int)v7;
}
