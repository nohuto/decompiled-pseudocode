/*
 * XREFs of _lambda_a9ede7db147a0808aca1dff73a0535ec_::operator() @ 0x140021334
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_de5abcad9a268955ca8a59b56c59c282___lambda_2994aaaa7734e700a95c78f8012e8556___ @ 0x14001EF64 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_de5abcad9a268955ca8a59b56c59c282___lambda_29.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer______XWinRT::IntVersionTag_::Do__lambda_ac3beea330571e42c38df3f7f9b88514___lambda_56213c9095e2d0ec17d12af2ecfb5d02___ @ 0x14001F5D4 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_14001F5D4.c)
 *     Windows::Foundation::Collections::Internal::SimpleVectorIterator_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_4718a3093fe00335c339b2b2fb133f28___lambda_2994aaaa7734e700a95c78f8012e8556___ @ 0x140020038 (Windows--Foundation--Collections--Internal--SimpleVectorIterator_Windows--Media--Devices--Intern.c)
 *     ?GetMany@?$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceModule@Devices@Media@5@PEAI@Z @ 0x140057150 (-GetMany@-$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V-$Vector@PEAVAudio.c)
 * Callees:
 *     ??$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x14001F1E0 (--$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XW.c)
 */

_DWORD **__fastcall lambda_a9ede7db147a0808aca1dff73a0535ec_::operator()(_QWORD **a1)
{
  _DWORD **result; // rax
  __int64 v2; // rsi
  _DWORD *v4; // rdx

  result = (_DWORD **)*a1;
  v2 = 0LL;
  v4 = (_DWORD *)**a1;
  if ( *v4 )
  {
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>((__int64 *)(*a1[1] + 8 * v2));
      *(_QWORD *)(*a1[1] + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      result = (_DWORD **)*a1;
      v4 = (_DWORD *)**a1;
    }
    while ( (unsigned int)v2 < *v4 );
  }
  *v4 = 0;
  return result;
}
