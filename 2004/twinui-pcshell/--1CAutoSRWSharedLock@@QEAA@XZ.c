/*
 * XREFs of ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x180147884
 * Callers:
 *     _CApplicationManager::_HandleSelectTargetViewForNavigationRequest_::_1_::dtor$3 @ 0x1800FFC32 (_CApplicationManager--_HandleSelectTargetViewForNavigationRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$2 @ 0x1801000BF (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$2.c)
 *     _CImmersiveApp::GetUniqueId_::_1_::dtor$0 @ 0x180101D14 (_CImmersiveApp--GetUniqueId_--_1_--dtor$0.c)
 *     _CApplicationManager::_AnalyzeShellNotification_::_1_::dtor$1 @ 0x1801021E0 (_CApplicationManager--_AnalyzeShellNotification_--_1_--dtor$1.c)
 *     _CApplicationViewManager::ApplicationChanged_::_1_::dtor$2 @ 0x180102240 (_CApplicationViewManager--ApplicationChanged_--_1_--dtor$2.c)
 *     _CApplicationViewManager::GetViewForApplication_::_1_::dtor$0 @ 0x180102280 (_CApplicationViewManager--GetViewForApplication_--_1_--dtor$0.c)
 *     _CApplicationViewManager::WindowOccludedChanged_::_1_::dtor$0 @ 0x1801022C0 (_CApplicationViewManager--WindowOccludedChanged_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplicationByWindow_::_1_::dtor$0 @ 0x18010245D (_CApplicationManager--GetApplicationByWindow_--_1_--dtor$0.c)
 *     _CImmersiveApp::GetPersistingStateName_::_1_::dtor$0 @ 0x18010426E (_CImmersiveApp--GetPersistingStateName_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplication_::_1_::dtor$0 @ 0x180104454 (_CApplicationManager--GetApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::GetAllApplicationsByAppID_::_1_::dtor$0 @ 0x18014A825 (_CApplicationManager--GetAllApplicationsByAppID_--_1_--dtor$0.c)
 *     _CApplicationManager::GetForegroundApplication_::_1_::dtor$0 @ 0x18014B999 (_CApplicationManager--GetForegroundApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::GetImmersiveApplicationArray_::_1_::dtor$0 @ 0x18014BB96 (_CApplicationManager--GetImmersiveApplicationArray_--_1_--dtor$0.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$0 @ 0x18014C334 (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$0.c)
 *     _CApplicationManager::GetSizeConstraintOverrides_::_1_::dtor$0 @ 0x18014C53B (_CApplicationManager--GetSizeConstraintOverrides_--_1_--dtor$0.c)
 *     _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$2 @ 0x18014CCFA (_CApplicationManager--HandleFrameWindowGhosted_--_1_--dtor$2.c)
 *     _CApplicationManager::QueryObjectForWindow_::_1_::dtor$0 @ 0x18014F1E9 (_CApplicationManager--QueryObjectForWindow_--_1_--dtor$0.c)
 *     _CImmersiveApp::IsApplicationWindowPresented_::_1_::dtor$0 @ 0x18017F178 (_CImmersiveApp--IsApplicationWindowPresented_--_1_--dtor$0.c)
 *     _CImmersiveApp::ShouldShowBackButton_::_1_::dtor$0 @ 0x180182122 (_CImmersiveApp--ShouldShowBackButton_--_1_--dtor$0.c)
 *     __lambda_0d2ae2ebb58457bb6356c5e49aa852a2_::operator()_::_1_::dtor$0 @ 0x18018E012 (__lambda_0d2ae2ebb58457bb6356c5e49aa852a2_--operator()_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetApplicationViewsById_::_1_::dtor$1 @ 0x18018ED3B (_CApplicationViewManager--GetApplicationViewsById_--_1_--dtor$1.c)
 *     _CApplicationViewManager::GetViewForAppUserModelId_::_1_::dtor$0 @ 0x18018F047 (_CApplicationViewManager--GetViewForAppUserModelId_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetViews_::_1_::dtor$1 @ 0x18018F1B8 (_CApplicationViewManager--GetViews_--_1_--dtor$1.c)
 *     _CApplicationViewManager::GetViewsByZOrder_::_1_::dtor$1 @ 0x18018F312 (_CApplicationViewManager--GetViewsByZOrder_--_1_--dtor$1.c)
 *     _CApplicationViewManager::HandleWindowReplaced_::_1_::dtor$0 @ 0x18018F490 (_CApplicationViewManager--HandleWindowReplaced_--_1_--dtor$0.c)
 *     _CApplicationViewManager::ProcessEntepriseIdChanged_::_1_::dtor$0 @ 0x18018F7AF (_CApplicationViewManager--ProcessEntepriseIdChanged_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::GetViewForHwnd_::_1_::dtor$0 @ 0x180191799 (_ApplicationViewManagerVisibilityDebouncer--GetViewForHwnd_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoSRWSharedLock::~CAutoSRWSharedLock(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *this;
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
