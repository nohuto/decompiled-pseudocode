/*
 * XREFs of ?add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x140010D60
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x140010E00 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Wi.c)
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x140011648 (--$CreateGitHelper@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@P.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::add_ModuleNotificationReceived(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v8 = 0LL;
    v6 = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>>(
           a2,
           &v8);
    if ( v6 >= 0 )
    {
      if ( v8 )
        v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
               a1 + 128,
               v8,
               *(_QWORD *)(*(_QWORD *)a2 + 24LL),
               a3);
      else
        v6 = -2147024809;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v6;
}
