/*
 * XREFs of wil::details::ScopeExitFn__lambda_f40ca06b5209bc822bca3482a137ffe5___::_ScopeExitFn__lambda_f40ca06b5209bc822bca3482a137ffe5___ @ 0x18027EE58
 * Callers:
 *     __lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator()_::_1_::dtor$1 @ 0x18027FB9F (__lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z @ 0x18027D734 (--$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z.c)
 */

ULONG __fastcall wil::details::ScopeExitFn__lambda_f40ca06b5209bc822bca3482a137ffe5___::_ScopeExitFn__lambda_f40ca06b5209bc822bca3482a137ffe5___(
        __int64 a1)
{
  ULONG result; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(
             *(int **)a1,
             *(int **)(a1 + 8),
             *(int **)(a1 + 16));
  }
  return result;
}
