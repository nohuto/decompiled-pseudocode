/*
 * XREFs of ??1TabWrapper@@QEAA@XZ @ 0x1800AB8E0
 * Callers:
 *     _AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_8a554fbb7eeadbc5b1f812b57a7003ed____::_1_::dtor$1 @ 0x1800AF224 (_AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Intern_ea_1800AF224.c)
 *     _AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__lambda_d6b8a9b1aa1c57c7c343e283d3e0fd07____::_1_::dtor$1 @ 0x1800AF317 (_AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Intern_ea_1800AF317.c)
 *     _AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__lambda_bad564a0731865a81e67c1ef81fa054c____::_1_::dtor$1 @ 0x1800AF404 (_AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Intern_ea_1800AF404.c)
 *     ?_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_KV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x180253AAC (-_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@.c)
 *     _Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_FirePresentationReadinessOrRetryAfterDelay_::_1_::dtor$1 @ 0x180253BF6 (_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem--_FirePresentationR_ea_180253BF6.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$19 @ 0x180269609 (_TabViewManager--TabViewManager_--_1_--dtor$19.c)
 *     _TabViewManager::TryGetLastSelectedTabForView_::_1_::dtor$1 @ 0x18027E291 (_TabViewManager--TryGetLastSelectedTabForView_--_1_--dtor$1.c)
 *     _TabViewManager::TryRemoveViewFromTabGroup_::_1_::dtor$6 @ 0x18027EDE3 (_TabViewManager--TryRemoveViewFromTabGroup_--_1_--dtor$6.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$0 @ 0x18027FDFE (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$0.c)
 *     _TabTransferManager::PrepareTabAndViewForDrag_::_1_::dtor$2 @ 0x18028FDB3 (_TabTransferManager--PrepareTabAndViewForDrag_--_1_--dtor$2.c)
 *     _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$30 @ 0x18044B90E (_VirtualDesktopGroupedViewsEventListener--RuntimeClassInitialize_--_1_--dtor$30.c)
 *     _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::dtor$8 @ 0x18044B926 (_VirtualDesktopGroupedViewsEventListener--RuntimeClassInitialize_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall TabWrapper::~TabWrapper(__int64 *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(this);
}
