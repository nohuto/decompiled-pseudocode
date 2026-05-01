/*
 * XREFs of wil::details::lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___::_lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___ @ 0x1801679FC
 * Callers:
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$0 @ 0x180173379 (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$0.c)
 * Callees:
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180171090 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___::_lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return CAppViewManager::_ObliterateOperation(*(CAppViewManager **)a1, *(const struct _GUID **)(a1 + 8));
  }
  return result;
}
