/*
 * XREFs of wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::_ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x1802F00E0
 * Callers:
 *     __lambda_05f458ff3b283a3e9a9130333ab0a931_::operator()_::_1_::dtor$0 @ 0x1802F067D (__lambda_05f458ff3b283a3e9a9130333ab0a931_--operator()_--_1_--dtor$0.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$6 @ 0x1802F0E64 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_1_--dtor$6.c)
 * Callees:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1802F0720 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::_ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()();
  }
  return lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_((_QWORD *)a1);
}
