/*
 * XREFs of _lambda_cdc67ce79880dc59329b171674cbd71c_::operator() @ 0x1400215B8
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_7183e9ae03d95d0d634d64af3f4c35bb___lambda_cdc67ce79880dc59329b171674cbd71c___ @ 0x14001EEF8 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_7183e9ae03d95d0d634d64af3f4c35bb___lambda_cd.c)
 *     Windows::Foundation::Collections::Internal::SimpleVectorIterator_EventRegistrationToken_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::PodLifetimeTraits_XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_7d6f68d31115486fe66f015c3efdf151___lambda_cdc67ce79880dc59329b171674cbd71c___ @ 0x1400200DC (Windows--Foundation--Collections--Internal--SimpleVectorIterator_EventRegistrationT_ea_1400200DC.c)
 * Callees:
 *     <none>
 */

_DWORD **__fastcall lambda_cdc67ce79880dc59329b171674cbd71c_::operator()(_QWORD **a1)
{
  _DWORD **result; // rax
  __int64 v2; // r9
  _DWORD *v3; // rdx

  result = (_DWORD **)*a1;
  v2 = 0LL;
  v3 = (_DWORD *)**a1;
  if ( *v3 )
  {
    do
    {
      *(_QWORD *)(*a1[1] + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      result = (_DWORD **)*a1;
      v3 = (_DWORD *)**a1;
    }
    while ( (unsigned int)v2 < *v3 );
  }
  *v3 = 0;
  return result;
}
