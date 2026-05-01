/*
 * XREFs of _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_ThreadData @ 0x1802F02C4
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$8 @ 0x1802F0E70 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_1_--dtor$8.c)
 * Callees:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1802F0720 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_ThreadData(
        __int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(a1 + 24);
  }
  return lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v1);
}
