/*
 * XREFs of _lambda_e0774cbc35ab04c06dd6c99a10e6839d_::operator() @ 0x1801118D8
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_e0774cbc35ab04c06dd6c99a10e6839d___lambda_a0cda285280cf77a5f4fdd8a40eba148___ @ 0x18010D928 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_e0774cbc35ab04c06dd6c99a10e6839d___lambda_a0.c)
 *     _lambda_f813e42821691754fe37a5d1c3b7107b_::operator() @ 0x180111A1C (_lambda_f813e42821691754fe37a5d1c3b7107b_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_e0774cbc35ab04c06dd6c99a10e6839d_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  ***(_BYTE ***)a1 = 0;
  if ( a2 >= *(_DWORD *)(**(_QWORD **)(a1 + 8) + 44LL) )
  {
    RoOriginateError(2147483659LL, 0LL);
    return 2147483659LL;
  }
  else
  {
    *a3 = a2 + 1;
    result = 0LL;
    ***(_BYTE ***)a1 = a2 + 1 < *(_DWORD *)(**(_QWORD **)(a1 + 8) + 44LL);
  }
  return result;
}
