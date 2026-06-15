/*
 * XREFs of Windows::Foundation::Collections::Internal::SimpleVectorIterator_EventRegistrationToken_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::PodLifetimeTraits_XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_a16af002d07ace4fe9b089da77d4d3b3___lambda_e7f9a9833f543183a86b640d7a18f225___ @ 0x14001FEB4
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x140025040 (-MoveNext@-$SimpleVectorIterator@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEv.c)
 * Callees:
 *     _lambda_a16af002d07ace4fe9b089da77d4d3b3_::operator() @ 0x1400212A8 (_lambda_a16af002d07ace4fe9b089da77d4d3b3_--operator().c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator_EventRegistrationToken_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::PodLifetimeTraits_XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_a16af002d07ace4fe9b089da77d4d3b3___lambda_e7f9a9833f543183a86b640d7a18f225___(
        __int64 a1,
        __int64 a2,
        _BYTE ***a3)
{
  int v3; // ebx
  __int64 v5; // rbp
  int v7; // eax

  v3 = *(_DWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v3 >= 0 )
  {
    v7 = lambda_a16af002d07ace4fe9b089da77d4d3b3_::operator()(a2);
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
        ***a3 = 0;
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
