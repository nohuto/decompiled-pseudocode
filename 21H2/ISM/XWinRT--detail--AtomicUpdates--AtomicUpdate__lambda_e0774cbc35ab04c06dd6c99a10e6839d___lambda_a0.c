/*
 * XREFs of XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_e0774cbc35ab04c06dd6c99a10e6839d___lambda_a0cda285280cf77a5f4fdd8a40eba148___ @ 0x18010DD88
 * Callers:
 *     _lambda_f813e42821691754fe37a5d1c3b7107b_::operator() @ 0x180111ED8 (_lambda_f813e42821691754fe37a5d1c3b7107b_--operator().c)
 * Callees:
 *     _lambda_e0774cbc35ab04c06dd6c99a10e6839d_::operator() @ 0x180111D94 (_lambda_e0774cbc35ab04c06dd6c99a10e6839d_--operator().c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_e0774cbc35ab04c06dd6c99a10e6839d___lambda_a0cda285280cf77a5f4fdd8a40eba148___(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  unsigned __int32 v3; // edi
  int v7; // r9d
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v7 = lambda_e0774cbc35ab04c06dd6c99a10e6839d_::operator()(a2, v3, &v11);
    if ( v7 < 0 )
      break;
    v9 = _InterlockedCompareExchange(a1, v11, v3);
    v8 = v3 == v9;
    v3 = v9;
    if ( v8 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v7;
}
