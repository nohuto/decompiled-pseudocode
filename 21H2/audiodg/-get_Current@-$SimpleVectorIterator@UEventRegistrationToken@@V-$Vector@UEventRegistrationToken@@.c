/*
 * XREFs of ?get_Current@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAUEventRegistrationToken@@@Z @ 0x1400283E0
 * Callers:
 *     <none>
 * Callees:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::IntVersionTag_::Do__lambda_a1abafb90744ae9b01c4cbc40f730f27___lambda_db410fc95b55691920d4e5837927db01___ @ 0x14001F920 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_14001F920.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::get_Current(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdx
  _QWORD *v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD **v5; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v4[0] = (_QWORD *)a1;
  *a2 = 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v5 = &v6;
  v4[1] = &v6;
  return XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::IntVersionTag_::Do__lambda_a1abafb90744ae9b01c4cbc40f730f27___lambda_db410fc95b55691920d4e5837927db01___(
           (unsigned int *)(a1 + 48),
           v2,
           v4,
           &v5);
}
