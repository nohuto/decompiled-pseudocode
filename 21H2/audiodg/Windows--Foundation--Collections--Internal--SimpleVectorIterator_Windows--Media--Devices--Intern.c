/*
 * XREFs of Windows::Foundation::Collections::Internal::SimpleVectorIterator_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_4718a3093fe00335c339b2b2fb133f28___lambda_2994aaaa7734e700a95c78f8012e8556___ @ 0x140020038
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@PEAI@Z @ 0x140023380 (-GetMany@-$SimpleVectorIterator@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V-$V.c)
 * Callees:
 *     _lambda_a9ede7db147a0808aca1dff73a0535ec_::operator() @ 0x140021334 (_lambda_a9ede7db147a0808aca1dff73a0535ec_--operator().c)
 *     _lambda_4718a3093fe00335c339b2b2fb133f28_::operator() @ 0x1400213EC (_lambda_4718a3093fe00335c339b2b2fb133f28_--operator().c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_4718a3093fe00335c339b2b2fb133f28___lambda_2994aaaa7734e700a95c78f8012e8556___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // ebx
  __int64 v5; // rbp
  int v7; // eax

  v3 = *(_DWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v3 >= 0 )
  {
    v7 = lambda_4718a3093fe00335c339b2b2fb133f28_::operator()(a2);
    v3 = v7;
    if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v5 + 88) )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        lambda_a9ede7db147a0808aca1dff73a0535ec_::operator()(a3);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
