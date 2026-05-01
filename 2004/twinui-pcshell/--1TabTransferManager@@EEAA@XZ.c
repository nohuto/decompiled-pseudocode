/*
 * XREFs of ??1TabTransferManager@@EEAA@XZ @ 0x18028DA1C
 * Callers:
 *     ??_ETabTransferManager@@EEAAPEAXI@Z @ 0x18028E9D0 (--_ETabTransferManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAXXZ @ 0x180291CF0 (-reset@-$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows.c)
 */

void __fastcall TabTransferManager::~TabTransferManager(TabTransferManager *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 34);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 33);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 32);
  wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::reset((char *)this + 168);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 22);
  wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::reset((char *)this + 144);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 19);
  wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::reset((char *)this + 120);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 16);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 10);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 8);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
}
