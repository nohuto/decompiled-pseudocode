/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceBrokerDevice@2Devices@Media@5@PEAI@Z @ 0x140023380
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Foundation::Collections::Internal::SimpleVectorIterator_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_4718a3093fe00335c339b2b2fb133f28___lambda_2994aaaa7734e700a95c78f8012e8556___ @ 0x140020038 (Windows--Foundation--Collections--Internal--SimpleVectorIterator_Windows--Media--Devices--Intern.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  unsigned int i; // r8d
  __int64 v3; // rdx
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v6[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+18h] BYREF
  __int64 v8; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+20h]
  _DWORD *v10; // [rsp+88h] [rbp+28h] BYREF
  va_list va1; // [rsp+88h] [rbp+28h]
  va_list va2; // [rsp+90h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _DWORD *);
  v7 = a2;
  *v10 = 0;
  for ( i = 0; i < v7; *(_QWORD *)(v8 + 8 * v3) = 0LL )
    v3 = i++;
  v6[0] = a1;
  va_copy((va_list)v5, va1);
  va_copy((va_list)&v5[1], va);
  v6[1] = &v7;
  va_copy((va_list)&v6[2], va);
  va_copy((va_list)&v6[3], va1);
  v6[4] = v5;
  return Windows::Foundation::Collections::Internal::SimpleVectorIterator_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_4718a3093fe00335c339b2b2fb133f28___lambda_2994aaaa7734e700a95c78f8012e8556___(
           a1,
           (__int64)v6,
           (__int64)v5);
}
