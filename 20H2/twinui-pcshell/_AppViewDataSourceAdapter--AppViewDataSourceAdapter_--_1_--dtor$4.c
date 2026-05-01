/*
 * XREFs of _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$4 @ 0x18033A848
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::~unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>(*(_QWORD *)(a2 + 48) + 288LL);
}
