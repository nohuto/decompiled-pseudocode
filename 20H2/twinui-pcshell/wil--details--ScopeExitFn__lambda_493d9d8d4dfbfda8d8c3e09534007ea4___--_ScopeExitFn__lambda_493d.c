/*
 * XREFs of wil::details::ScopeExitFn__lambda_493d9d8d4dfbfda8d8c3e09534007ea4___::_ScopeExitFn__lambda_493d9d8d4dfbfda8d8c3e09534007ea4___ @ 0x1802DA984
 * Callers:
 *     __lambda_1c848fc40f8d66460ef5049a4e343f17_::operator()_::_1_::dtor$0 @ 0x1802DAD16 (__lambda_1c848fc40f8d66460ef5049a4e343f17_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_493d9d8d4dfbfda8d8c3e09534007ea4_::operator() @ 0x1802DADA0 (_lambda_493d9d8d4dfbfda8d8c3e09534007ea4_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_493d9d8d4dfbfda8d8c3e09534007ea4___::_ScopeExitFn__lambda_493d9d8d4dfbfda8d8c3e09534007ea4___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_493d9d8d4dfbfda8d8c3e09534007ea4_::operator()();
  }
  return result;
}
