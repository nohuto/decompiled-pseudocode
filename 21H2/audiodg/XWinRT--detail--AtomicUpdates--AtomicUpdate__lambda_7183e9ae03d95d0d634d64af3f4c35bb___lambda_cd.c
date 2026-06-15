/*
 * XREFs of XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_7183e9ae03d95d0d634d64af3f4c35bb___lambda_cdc67ce79880dc59329b171674cbd71c___ @ 0x14001EEF8
 * Callers:
 *     _lambda_7d6f68d31115486fe66f015c3efdf151_::operator() @ 0x1400214C8 (_lambda_7d6f68d31115486fe66f015c3efdf151_--operator().c)
 * Callees:
 *     _lambda_de5abcad9a268955ca8a59b56c59c282_::operator() @ 0x140021454 (_lambda_de5abcad9a268955ca8a59b56c59c282_--operator().c)
 *     _lambda_cdc67ce79880dc59329b171674cbd71c_::operator() @ 0x1400215B8 (_lambda_cdc67ce79880dc59329b171674cbd71c_--operator().c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_7183e9ae03d95d0d634d64af3f4c35bb___lambda_cdc67ce79880dc59329b171674cbd71c___(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // ebx
  bool v7; // zf
  signed __int32 v8; // eax
  int v9; // r9d
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v9 = lambda_de5abcad9a268955ca8a59b56c59c282_::operator()(a2, v3, &v11);
    if ( v9 < 0 )
      break;
    v8 = _InterlockedCompareExchange(a1, v11, v3);
    v7 = v3 == v8;
    v3 = v8;
    if ( v7 )
      break;
    lambda_cdc67ce79880dc59329b171674cbd71c_::operator()(a3);
  }
  return (unsigned int)v9;
}
