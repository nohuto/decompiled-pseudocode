/*
 * XREFs of _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_scalar_deleting_destructor_ @ 0x1802F0024
 * Callers:
 *     std::unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___::_unique_ptr__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_std::default_delete__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData___ @ 0x1802EF958 (std--unique_ptr__WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2.c)
 *     _lambda_05f458ff3b283a3e9a9130333ab0a931_::operator() @ 0x1802EFB5C (_lambda_05f458ff3b283a3e9a9130333ab0a931_--operator().c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x1802EF790 (_lambda_d1cc878f49256a12ed651bb70f914db7_--__lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1802EFE30 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 */

_BYTE *__fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_scalar_deleting_destructor_(
        _BYTE *a1)
{
  if ( a1[48] )
  {
    a1[48] = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()((_QWORD *)a1 + 3);
  }
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_((_QWORD *)a1 + 3);
  operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
