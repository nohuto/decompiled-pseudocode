/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x140025040
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Foundation::Collections::Internal::SimpleVectorIterator_EventRegistrationToken_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::PodLifetimeTraits_XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_a16af002d07ace4fe9b089da77d4d3b3___lambda_e7f9a9833f543183a86b640d7a18f225___ @ 0x14001FEB4 (Windows--Foundation--Collections--Internal--SimpleVectorIterator_EventRegistrationToken_Windows-.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::MoveNext(
        __int64 a1,
        _BYTE *a2)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE **v4; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0;
  v4 = &v5;
  v3[0] = a1;
  v3[1] = &v5;
  v3[2] = &v4;
  return Windows::Foundation::Collections::Internal::SimpleVectorIterator_EventRegistrationToken_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::PodLifetimeTraits_XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_a16af002d07ace4fe9b089da77d4d3b3___lambda_e7f9a9833f543183a86b640d7a18f225___(
           a1,
           (__int64)v3,
           &v4);
}
