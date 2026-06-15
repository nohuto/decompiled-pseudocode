/*
 * XREFs of wil::details::ScopeExitFn__lambda_cd148d54ce56489cd5cdf39912ac388d___::_ScopeExitFn__lambda_cd148d54ce56489cd5cdf39912ac388d___ @ 0x1800D5988
 * Callers:
 *     _CAudioSessionStore::Commit_::_1_::dtor$4 @ 0x180075C74 (_CAudioSessionStore--Commit_--_1_--dtor$4.c)
 *     _CAudioSessionStore::OpenSessionKey_::_1_::dtor$0 @ 0x18007C47D (_CAudioSessionStore--OpenSessionKey_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::ScopeExitFn__lambda_cd148d54ce56489cd5cdf39912ac388d___::_ScopeExitFn__lambda_cd148d54ce56489cd5cdf39912ac388d___(
        __int64 a1)
{
  _DWORD *v1; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_DWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    if ( !*v1 )
      LODWORD(v1) = RpcRevertToSelf();
  }
  return (int)v1;
}
