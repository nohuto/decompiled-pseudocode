/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_dd8f4aabae2ca26411facba6a281aa4a_@@@details@wil@@QEAA@XZ @ 0x18022A70C
 * Callers:
 *     _Windows::Internal::ComposableShell::TreeNodeBase::AddChild_::_1_::dtor$0 @ 0x18022B6B9 (_Windows--Internal--ComposableShell--TreeNodeBase--AddChild_--_1_--dtor$0.c)
 * Callees:
 *     ??R_lambda_dd8f4aabae2ca26411facba6a281aa4a_@@QEBAXXZ @ 0x18022ADAC (--R_lambda_dd8f4aabae2ca26411facba6a281aa4a_@@QEBAXXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn<_lambda_dd8f4aabae2ca26411facba6a281aa4a_>::~ScopeExitFn<_lambda_dd8f4aabae2ca26411facba6a281aa4a_>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return _lambda_dd8f4aabae2ca26411facba6a281aa4a_::operator()();
  }
  return result;
}
