/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice______XWinRT::IntVersionTag_::Do__lambda_4a90a79258a77635d72c96230399505b___lambda_1cd4920708ca81c26048cc439c36debe___ @ 0x14001F6A8
 * Callers:
 *     ?get_Current@?$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAUIBuffer@Streams@Storage@5@@Z @ 0x140028390 (-get_Current@-$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V-$Vector@PEAUIBuffer@S.c)
 * Callees:
 *     ??$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x14001F1E0 (--$Destroy@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@InterfaceLifetimeTraits@XW.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice______XWinRT::IntVersionTag_::Do__lambda_4a90a79258a77635d72c96230399505b___lambda_1cd4920708ca81c26048cc439c36debe___(
        unsigned int *a1,
        __int64 a2,
        _QWORD **a3,
        __int64 ***a4)
{
  unsigned int v4; // ebx
  int v8; // eax

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a3)[4] + 48LL))(
           (*a3)[4],
           *((unsigned int *)*a3 + 10),
           *a3[1]);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice>(**a4);
        ***a4 = 0LL;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
