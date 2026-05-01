/*
 * XREFs of _lambda_2aad9bc27b98765df586e5b2fc9f859e_::_lambda_invoker_cdecl_ @ 0x1800B7200
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_53f3455ee66d5917e81d6db14c30cb4c_::operator() @ 0x1800B77D8 (_lambda_53f3455ee66d5917e81d6db14c30cb4c_--operator().c)
 */

__int64 __fastcall lambda_2aad9bc27b98765df586e5b2fc9f859e_::_lambda_invoker_cdecl_(HWND a1, _QWORD *a2)
{
  char v4; // al
  unsigned int v5; // r8d

  v4 = lambda_53f3455ee66d5917e81d6db14c30cb4c_::operator()(a1, a1);
  v5 = 0;
  if ( v4 )
    *a2 = a1;
  else
    return 1;
  return v5;
}
