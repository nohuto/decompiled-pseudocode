/*
 * XREFs of _AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__lambda_bad564a0731865a81e67c1ef81fa054c____::_1_::dtor$3 @ 0x18009F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C1498 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__lambda_bad564a0731865a81e67c1ef81fa054c____::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD *)(a2 + 104));
  }
  return result;
}
