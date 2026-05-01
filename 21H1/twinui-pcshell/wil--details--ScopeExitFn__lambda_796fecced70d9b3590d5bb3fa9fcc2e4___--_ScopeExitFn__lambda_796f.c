/*
 * XREFs of wil::details::ScopeExitFn__lambda_796fecced70d9b3590d5bb3fa9fcc2e4___::_ScopeExitFn__lambda_796fecced70d9b3590d5bb3fa9fcc2e4___ @ 0x1802EE438
 * Callers:
 *     __lambda_fac65b3379140ccb2da51a4d302d8ccb_::operator()_::_1_::dtor$3 @ 0x1802EEEC4 (__lambda_fac65b3379140ccb2da51a4d302d8ccb_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     _lambda_796fecced70d9b3590d5bb3fa9fcc2e4_::operator() @ 0x1802EE83C (_lambda_796fecced70d9b3590d5bb3fa9fcc2e4_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_796fecced70d9b3590d5bb3fa9fcc2e4___::_ScopeExitFn__lambda_796fecced70d9b3590d5bb3fa9fcc2e4___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_796fecced70d9b3590d5bb3fa9fcc2e4_::operator()();
  }
  return result;
}
