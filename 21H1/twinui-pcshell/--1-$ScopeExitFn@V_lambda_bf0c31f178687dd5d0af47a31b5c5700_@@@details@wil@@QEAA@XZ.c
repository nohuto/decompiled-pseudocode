/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@@details@wil@@QEAA@XZ @ 0x18043E548
 * Callers:
 *     _winrt::immersive_shell_component::PublishServices_::_1_::dtor$4 @ 0x180440D2C (_winrt--immersive_shell_component--PublishServices_--_1_--dtor$4.c)
 * Callees:
 *     ??R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBAXXZ @ 0x18043E888 (--R_lambda_bf0c31f178687dd5d0af47a31b5c5700_@@QEBAXXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn<_lambda_bf0c31f178687dd5d0af47a31b5c5700_>::~ScopeExitFn<_lambda_bf0c31f178687dd5d0af47a31b5c5700_>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return _lambda_bf0c31f178687dd5d0af47a31b5c5700_::operator()();
  }
  return result;
}
