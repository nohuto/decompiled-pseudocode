/*
 * XREFs of ??1?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAA@XZ @ 0x180319BE4
 * Callers:
 *     _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$3 @ 0x1803196CD (_AppViewDataSourceAdapter--AppViewDataSourceAdapter_--_1_--dtor$3.c)
 *     _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$4 @ 0x1803196E0 (_AppViewDataSourceAdapter--AppViewDataSourceAdapter_--_1_--dtor$4.c)
 *     _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$5 @ 0x1803196F3 (_AppViewDataSourceAdapter--AppViewDataSourceAdapter_--_1_--dtor$5.c)
 * Callees:
 *     ?reset@?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAXXZ @ 0x18031FABC (-reset@-$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@.c)
 */

__int64 __fastcall wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::~unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>(
        __int64 a1)
{
  wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::reset();
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
