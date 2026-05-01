/*
 * XREFs of _lambda_16b2729c4ca1e6616f2a62f33a09629a_::operator() @ 0x1802C9B84
 * Callers:
 *     wil::details::ScopeExitFn__lambda_16b2729c4ca1e6616f2a62f33a09629a___::_ScopeExitFn__lambda_16b2729c4ca1e6616f2a62f33a09629a___ @ 0x1802C9B34 (wil--details--ScopeExitFn__lambda_16b2729c4ca1e6616f2a62f33a09629a___--_ScopeExitFn__lambda_16b2.c)
 *     _lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator() @ 0x1802C9BF8 (_lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--operator().c)
 * Callees:
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802CF558 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_16b2729c4ca1e6616f2a62f33a09629a_::operator()(__int64 a1)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(*(_QWORD *)a1 + 176LL) + 280LL);
  AcquireSRWLockExclusive(v2);
  ViewWrapperBase::NavigateInternal(*(_QWORD *)a1 + 8LL, 0LL);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
