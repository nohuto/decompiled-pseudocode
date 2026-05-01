/*
 * XREFs of wil::details::ScopeExitFn__lambda_16b2729c4ca1e6616f2a62f33a09629a___::_ScopeExitFn__lambda_16b2729c4ca1e6616f2a62f33a09629a___ @ 0x1802C9B34
 * Callers:
 *     __lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator()_::_1_::dtor$0 @ 0x1802C9F01 (__lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_16b2729c4ca1e6616f2a62f33a09629a_::operator() @ 0x1802C9B84 (_lambda_16b2729c4ca1e6616f2a62f33a09629a_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_16b2729c4ca1e6616f2a62f33a09629a___::_ScopeExitFn__lambda_16b2729c4ca1e6616f2a62f33a09629a___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_16b2729c4ca1e6616f2a62f33a09629a_::operator()();
  }
  return result;
}
