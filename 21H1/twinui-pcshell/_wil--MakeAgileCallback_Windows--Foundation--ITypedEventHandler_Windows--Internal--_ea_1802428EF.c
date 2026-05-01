/*
 * XREFs of _wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerRectEventArgs____TabViewManager___long_(__cdecl_TabViewManager::_)(Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs__)__::_1_::dtor$0 @ 0x1802428EF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C1498 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController___Windows::Internal::ComposableShell::Tabs::TabControllerRectEventArgs____TabViewManager___long____cdecl_TabViewManager::___Windows::Internal::ComposableShell::Tabs::ITabController___Windows::Internal::ComposableShell::Tabs::ITabControllerRectEventArgs_____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD **)(a2 + 80));
  }
  return result;
}
