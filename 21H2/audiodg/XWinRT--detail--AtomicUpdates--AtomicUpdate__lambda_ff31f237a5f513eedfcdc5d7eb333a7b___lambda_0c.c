/*
 * XREFs of XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_ff31f237a5f513eedfcdc5d7eb333a7b___lambda_0cfc5fd44ccd4c79b3f4a5312d4a07b3___ @ 0x14001EFD0
 * Callers:
 *     _lambda_a16af002d07ace4fe9b089da77d4d3b3_::operator() @ 0x140021394 (_lambda_a16af002d07ace4fe9b089da77d4d3b3_--operator().c)
 * Callees:
 *     _lambda_ff31f237a5f513eedfcdc5d7eb333a7b_::operator() @ 0x1400215F0 (_lambda_ff31f237a5f513eedfcdc5d7eb333a7b_--operator().c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_ff31f237a5f513eedfcdc5d7eb333a7b___lambda_0cfc5fd44ccd4c79b3f4a5312d4a07b3___(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  unsigned __int32 v3; // ebx
  bool v7; // zf
  signed __int32 v8; // eax
  int v9; // r9d
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v9 = lambda_ff31f237a5f513eedfcdc5d7eb333a7b_::operator()(a2, v3, &v11);
    if ( v9 < 0 )
      break;
    v8 = _InterlockedCompareExchange(a1, v11, v3);
    v7 = v3 == v8;
    v3 = v8;
    if ( v7 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v9;
}
