/*
 * XREFs of ??_E?$RuntimeClass@U?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@234@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140021750
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@567@@Details@WRL@Microsoft@@UEAA@XZ @ 0x140020D10 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVectorView@PEAVAudio.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
