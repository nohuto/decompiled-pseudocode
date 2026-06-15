/*
 * XREFs of ?_Free@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@CAXPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@I@Z @ 0x1400281DC
 * Callers:
 *     ?Clear@?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x140022200 (-Clear@-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualityPr.c)
 *     ?_EraseAll@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAPEAUIBuffer@Streams@Storage@5@PEAI@Z @ 0x14002816C (-_EraseAll@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer.c)
 *     ?Clear@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x140055C80 (-Clear@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Str.c)
 * Callees:
 *     ??$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x14001F1E0 (--$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XW.c)
 */

void __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::_Free(
        __int64 *Block,
        unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( Block )
  {
    if ( a2 )
    {
      v3 = Block;
      v4 = a2;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(v3++);
        --v4;
      }
      while ( v4 );
    }
    free(Block);
  }
}
