/*
 * XREFs of _lambda_7d6f68d31115486fe66f015c3efdf151_::operator() @ 0x1400214C8
 * Callers:
 *     Windows::Foundation::Collections::Internal::SimpleVectorIterator_EventRegistrationToken_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::PodLifetimeTraits_XWinRT::IntVersionTag_0_::_DoWithInvalidationCheck__lambda_7d6f68d31115486fe66f015c3efdf151___lambda_cdc67ce79880dc59329b171674cbd71c___ @ 0x1400200DC (Windows--Foundation--Collections--Internal--SimpleVectorIterator_EventRegistrationT_ea_1400200DC.c)
 * Callees:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_7183e9ae03d95d0d634d64af3f4c35bb___lambda_cdc67ce79880dc59329b171674cbd71c___ @ 0x14001EEF8 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_7183e9ae03d95d0d634d64af3f4c35bb___lambda_cd.c)
 *     _lambda_de5abcad9a268955ca8a59b56c59c282_::operator() @ 0x140021454 (_lambda_de5abcad9a268955ca8a59b56c59c282_--operator().c)
 */

__int64 __fastcall lambda_7d6f68d31115486fe66f015c3efdf151_::operator()(__int64 *a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  volatile signed __int32 *v3; // rcx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v5[0] = &v6;
  v5[1] = a1[1];
  v5[2] = a1[2];
  v5[3] = a1[3];
  v2 = a1[4];
  v3 = (volatile signed __int32 *)(v1 + 40);
  v6 = v1;
  if ( *(_BYTE *)(v1 + 56) )
    return lambda_de5abcad9a268955ca8a59b56c59c282_::operator()((__int64)v5, *(unsigned int *)v3, (_DWORD *)(v1 + 40));
  else
    return XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_7183e9ae03d95d0d634d64af3f4c35bb___lambda_cdc67ce79880dc59329b171674cbd71c___(
             v3,
             (__int64)v5,
             v2);
}
