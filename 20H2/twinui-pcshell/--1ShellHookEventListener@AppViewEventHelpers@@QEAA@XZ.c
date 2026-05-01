/*
 * XREFs of ??1ShellHookEventListener@AppViewEventHelpers@@QEAA@XZ @ 0x18033B030
 * Callers:
 *     _AppViewDataSourceAdapterBase::AppViewDataSourceAdapterBase_::_1_::dtor$9 @ 0x18033A9D9 (_AppViewDataSourceAdapterBase--AppViewDataSourceAdapterBase_--_1_--dtor$9.c)
 *     _AppViewDataSourceAdapterBase::AppViewDataSourceAdapterBase_::_1_::dtor$10 @ 0x18033A9E9 (_AppViewDataSourceAdapterBase--AppViewDataSourceAdapterBase_--_1_--dtor$10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x18033FD94 (-Unregister@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VAppli.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AppViewEventHelpers::ShellHookEventListener::~ShellHookEventListener(
        AppViewEventHelpers::ShellHookEventListener *this)
{
  __int64 v2; // rcx

  AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::Unregister(this);
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
