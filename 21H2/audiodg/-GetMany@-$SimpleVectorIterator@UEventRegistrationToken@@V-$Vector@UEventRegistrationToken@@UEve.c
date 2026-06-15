/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUEventRegistrationToken@@PEAI@Z @ 0x140023410
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Foundation::Collections::Internal::SimpleVectorIterator_EventRegistrationToken_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::PodLifetimeTraits_XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_7d6f68d31115486fe66f015c3efdf151___lambda_cdc67ce79880dc59329b171674cbd71c___ @ 0x1400200DC (Windows--Foundation--Collections--Internal--SimpleVectorIterator_EventRegistrationT_ea_1400200DC.c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  __int64 v2; // r8
  _QWORD v4[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v5[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v6; // [rsp+78h] [rbp+18h] BYREF
  __int64 v7; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+20h]
  _DWORD *v9; // [rsp+88h] [rbp+28h] BYREF
  va_list va1; // [rsp+88h] [rbp+28h]
  va_list va2; // [rsp+90h] [rbp+30h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v7 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v9 = va_arg(va2, _DWORD *);
  v6 = a2;
  v2 = 0LL;
  for ( *v9 = 0; (unsigned int)v2 < v6; v2 = (unsigned int)(v2 + 1) )
    *(_QWORD *)(v7 + 8 * v2) = 0LL;
  v5[0] = a1;
  va_copy((va_list)v4, va1);
  va_copy((va_list)&v4[1], va);
  v5[1] = &v6;
  va_copy((va_list)&v5[2], va);
  va_copy((va_list)&v5[3], va1);
  v5[4] = v4;
  return Windows::Foundation::Collections::Internal::SimpleVectorIterator_EventRegistrationToken_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::PodLifetimeTraits_XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_7d6f68d31115486fe66f015c3efdf151___lambda_cdc67ce79880dc59329b171674cbd71c___(
           a1,
           (__int64)v5,
           (__int64)v4);
}
