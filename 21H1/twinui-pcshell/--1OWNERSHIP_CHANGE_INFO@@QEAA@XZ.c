/*
 * XREFs of ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x180122758
 * Callers:
 *     _CApplicationManager::_HandleWindowChangedOwner_::_1_::dtor$0 @ 0x1800DF896 (_CApplicationManager--_HandleWindowChangedOwner_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowBecameOwned_::_1_::dtor$0 @ 0x1800DF8E4 (_CApplicationManager--_HandleWindowBecameOwned_--_1_--dtor$0.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$2 @ 0x180127C0C (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleWindowBecameUnowned_::_1_::dtor$0 @ 0x180132DD0 (_CApplicationManager--_HandleWindowBecameUnowned_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$3 @ 0x18013394A (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$4 @ 0x180133956 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$4.c)
 *     _CImmersiveWindowManager::Set_::_1_::dtor$1 @ 0x18013AD99 (_CImmersiveWindowManager--Set_--_1_--dtor$1.c)
 *     _TabViewManager::GetNumTabsInGroupForView_::_1_::dtor$2 @ 0x18024E93D (_TabViewManager--GetNumTabsInGroupForView_--_1_--dtor$2.c)
 *     _TabViewManager::GetNumTabsInGroupForView_::_1_::dtor$3 @ 0x18024E949 (_TabViewManager--GetNumTabsInGroupForView_--_1_--dtor$3.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$2 @ 0x18025EA86 (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$2.c)
 *     _TabViewManager::UpdateViewAnimationStateForTab_::_1_::dtor$3 @ 0x18025EA92 (_TabViewManager--UpdateViewAnimationStateForTab_--_1_--dtor$3.c)
 *     _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$0 @ 0x18029127A (_WindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$0.c)
 *     _WindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$1 @ 0x180291286 (_WindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$27 @ 0x180292FEE (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$27.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$28 @ 0x180292FFA (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$28.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8____::_1_::dtor$0 @ 0x1802D3256 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$9 @ 0x18031C84E (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$9.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$10 @ 0x18031C85A (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$10.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$12 @ 0x18031C872 (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$12.c)
 *     _AppViewDataSourceAdapter::InitializeItems_::_1_::dtor$13 @ 0x18031C87E (_AppViewDataSourceAdapter--InitializeItems_--_1_--dtor$13.c)
 *     _CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup_::_1_::dtor$4 @ 0x1803CB1ED (_CDesktopPositioner--EnsureViewIsInViewGroupForTabGroup_--_1_--dtor$4.c)
 *     _CDesktopPositioner::UnsubscribeFromServices_::_1_::dtor$1 @ 0x1803CDDB3 (_CDesktopPositioner--UnsubscribeFromServices_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(OWNERSHIP_CHANGE_INFO *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
