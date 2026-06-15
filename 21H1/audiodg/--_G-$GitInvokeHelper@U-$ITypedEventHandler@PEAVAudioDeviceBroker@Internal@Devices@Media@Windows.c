/*
 * XREFs of ??_G?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@UEAAPEAXI@Z @ 0x14001A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x14001AB54 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>,2>::`scalar deleting destructor'(
        _DWORD *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(Block + 12);
  Block[11] = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(Block + 8);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
