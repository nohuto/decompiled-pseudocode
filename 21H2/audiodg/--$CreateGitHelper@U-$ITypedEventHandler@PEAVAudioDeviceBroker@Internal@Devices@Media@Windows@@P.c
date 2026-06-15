/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x140011658
 * Callers:
 *     ?add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x140010B30 (-add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU-$ITy.c)
 * Callees:
 *     ??$Make@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@@12@XZ @ 0x140011764 (--$Make@U-$GitInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Wi.c)
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x14001ADD4 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  int AgileReference; // edi
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+40h] BYREF
  __int64 v15; // [rsp+68h] [rbp+48h] BYREF

  *a2 = 0LL;
  v4 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>,2>,>(&v13);
  v5 = 0LL;
  v6 = 0LL;
  if ( &v14 != v4 )
  {
    v5 = (_QWORD *)*v4;
    *v4 = 0LL;
    v6 = v5;
  }
  v7 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v6 )
  {
    v15 = 0LL;
    v8 = v5 + 6;
    v9 = v5[6];
    v5[6] = 0LL;
    v14 = v9;
    Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v15);
    v10 = v5[6];
    AgileReference = 0;
    if ( a1 )
    {
      if ( v10 )
      {
        *v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      AgileReference = RoGetAgileReference(0LL, &GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef, a1, v5 + 6);
    }
    else
    {
      v15 = 0LL;
      *v8 = 0LL;
      v14 = v10;
      Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v15);
    }
    if ( AgileReference >= 0 )
      AgileReference = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v5)(
                         v5,
                         &GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef,
                         a2);
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)AgileReference;
}
