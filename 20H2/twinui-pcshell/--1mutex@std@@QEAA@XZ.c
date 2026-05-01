/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x1802EFB48
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp_::_1_::dtor$3 @ 0x1802EF766 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--XamlExplorerHostAp_ea_1802EF766.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
