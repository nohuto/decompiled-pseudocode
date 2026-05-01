/*
 * XREFs of ??1?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAA@XZ @ 0x18033B7AC
 * Callers:
 *     _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$3 @ 0x18033B295 (_AppViewDataSourceAdapter--AppViewDataSourceAdapter_--_1_--dtor$3.c)
 *     _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$4 @ 0x18033B2A8 (_AppViewDataSourceAdapter--AppViewDataSourceAdapter_--_1_--dtor$4.c)
 *     _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$5 @ 0x18033B2BB (_AppViewDataSourceAdapter--AppViewDataSourceAdapter_--_1_--dtor$5.c)
 * Callees:
 *     ?reset@?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAXXZ @ 0x18034168C (-reset@-$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@.c)
 */

__int64 __fastcall wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::~unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>(
        __int64 a1)
{
  wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::reset();
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
