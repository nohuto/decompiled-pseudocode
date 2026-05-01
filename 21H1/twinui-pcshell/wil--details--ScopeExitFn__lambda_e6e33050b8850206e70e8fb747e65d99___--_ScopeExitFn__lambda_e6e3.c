/*
 * XREFs of wil::details::ScopeExitFn__lambda_e6e33050b8850206e70e8fb747e65d99___::_ScopeExitFn__lambda_e6e33050b8850206e70e8fb747e65d99___ @ 0x1801C425C
 * Callers:
 *     _CScreenClippingExperienceManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1801C7404 (_CScreenClippingExperienceManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@CScreenClippingExperienceManager@@EEAAJXZ @ 0x1801C4B20 (-Close@CScreenClippingExperienceManager@@EEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_e6e33050b8850206e70e8fb747e65d99___::_ScopeExitFn__lambda_e6e33050b8850206e70e8fb747e65d99___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return CScreenClippingExperienceManager::Close((CScreenClippingExperienceManager *)(*(_QWORD *)a1 + 16LL));
  }
  return result;
}
