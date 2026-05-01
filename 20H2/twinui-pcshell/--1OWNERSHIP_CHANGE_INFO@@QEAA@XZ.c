/*
 * XREFs of ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x180146CFC
 * Callers:
 *     _CApplicationManager::_HandleWindowChangedOwner_::_1_::dtor$0 @ 0x180105DA8 (_CApplicationManager--_HandleWindowChangedOwner_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowBecameOwned_::_1_::dtor$0 @ 0x180105DF6 (_CApplicationManager--_HandleWindowBecameOwned_--_1_--dtor$0.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$2 @ 0x18014C19C (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleWindowBecameUnowned_::_1_::dtor$0 @ 0x180157210 (_CApplicationManager--_HandleWindowBecameUnowned_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$3 @ 0x180157D8A (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$4 @ 0x180157D96 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$4.c)
 *     _CImmersiveWindowManager::Set_::_1_::dtor$1 @ 0x18015F179 (_CImmersiveWindowManager--Set_--_1_--dtor$1.c)
 *     _TabViewManager::GetNumTabsInGroupForView_::_1_::dtor$2 @ 0x18026FCCD (_TabViewManager--GetNumTabsInGroupForView_--_1_--dtor$2.c)
 *     _TabViewManager::GetNumTabsInGroupForView_::_1_::dtor$3 @ 0x18026FCD9 (_TabViewManager--GetNumTabsInGroupForView_--_1_--dtor$3.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$2 @ 0x18027FE16 (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$2.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$3 @ 0x18027FE22 (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$3.c)
 *     _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$0 @ 0x1802B25CA (_WindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$0.c)
 *     _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$1 @ 0x1802B25D6 (_WindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$27 @ 0x1802B433E (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$27.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$28 @ 0x1802B434A (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$28.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8____::_1_::dtor$0 @ 0x1802F4506 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$9 @ 0x18033D9BE (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$9.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$10 @ 0x18033D9CA (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$10.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$12 @ 0x18033D9E2 (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$12.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$13 @ 0x18033D9EE (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$13.c)
 *     _CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup_::_1_::dtor$4 @ 0x1803EB90D (_CDesktopPositioner--EnsureViewIsInViewGroupForTabGroup_--_1_--dtor$4.c)
 *     _CDesktopPositioner::UnsubscribeFromServices_::_1_::dtor$1 @ 0x1803EE4D3 (_CDesktopPositioner--UnsubscribeFromServices_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(OWNERSHIP_CHANGE_INFO *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
