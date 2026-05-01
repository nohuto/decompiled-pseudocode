/*
 * XREFs of ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x180147740
 * Callers:
 *     _CApplicationManager::_HandleSelectTargetViewForNavigationRequest_::_1_::dtor$3 @ 0x180101242 (_CApplicationManager--_HandleSelectTargetViewForNavigationRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$2 @ 0x18010177F (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$2.c)
 *     _CImmersiveApp::GetUniqueId_::_1_::dtor$0 @ 0x180102EA4 (_CImmersiveApp--GetUniqueId_--_1_--dtor$0.c)
 *     _CApplicationManager::_AnalyzeShellNotification_::_1_::dtor$1 @ 0x180103370 (_CApplicationManager--_AnalyzeShellNotification_--_1_--dtor$1.c)
 *     _CApplicationViewManager::ApplicationChanged_::_1_::dtor$2 @ 0x1801033D0 (_CApplicationViewManager--ApplicationChanged_--_1_--dtor$2.c)
 *     _CApplicationViewManager::GetViewForApplication_::_1_::dtor$0 @ 0x180103430 (_CApplicationViewManager--GetViewForApplication_--_1_--dtor$0.c)
 *     _CApplicationViewManager::WindowOccludedChanged_::_1_::dtor$0 @ 0x180103470 (_CApplicationViewManager--WindowOccludedChanged_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplicationByWindow_::_1_::dtor$0 @ 0x18010360D (_CApplicationManager--GetApplicationByWindow_--_1_--dtor$0.c)
 *     _CImmersiveApp::GetPersistingStateName_::_1_::dtor$0 @ 0x1801057BC (_CImmersiveApp--GetPersistingStateName_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplication_::_1_::dtor$0 @ 0x180105A1A (_CApplicationManager--GetApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::GetAllApplicationsByAppID_::_1_::dtor$0 @ 0x18014A675 (_CApplicationManager--GetAllApplicationsByAppID_--_1_--dtor$0.c)
 *     _CApplicationManager::GetForegroundApplication_::_1_::dtor$0 @ 0x18014B7E9 (_CApplicationManager--GetForegroundApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::GetImmersiveApplicationArray_::_1_::dtor$0 @ 0x18014B9E6 (_CApplicationManager--GetImmersiveApplicationArray_--_1_--dtor$0.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$0 @ 0x18014C184 (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$0.c)
 *     _CApplicationManager::GetSizeConstraintOverrides_::_1_::dtor$0 @ 0x18014C38B (_CApplicationManager--GetSizeConstraintOverrides_--_1_--dtor$0.c)
 *     _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$2 @ 0x18014CB4A (_CApplicationManager--HandleFrameWindowGhosted_--_1_--dtor$2.c)
 *     _CApplicationManager::QueryObjectForWindow_::_1_::dtor$0 @ 0x18014F039 (_CApplicationManager--QueryObjectForWindow_--_1_--dtor$0.c)
 *     _CImmersiveApp::IsApplicationWindowPresented_::_1_::dtor$0 @ 0x18017ED88 (_CImmersiveApp--IsApplicationWindowPresented_--_1_--dtor$0.c)
 *     _CImmersiveApp::ShouldShowBackButton_::_1_::dtor$0 @ 0x180181D32 (_CImmersiveApp--ShouldShowBackButton_--_1_--dtor$0.c)
 *     __lambda_0d2ae2ebb58457bb6356c5e49aa852a2_::operator()_::_1_::dtor$0 @ 0x18018DC02 (__lambda_0d2ae2ebb58457bb6356c5e49aa852a2_--operator()_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetApplicationViewsById_::_1_::dtor$1 @ 0x18018E92B (_CApplicationViewManager--GetApplicationViewsById_--_1_--dtor$1.c)
 *     _CApplicationViewManager::GetViewForAppUserModelId_::_1_::dtor$0 @ 0x18018EC37 (_CApplicationViewManager--GetViewForAppUserModelId_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetViews_::_1_::dtor$1 @ 0x18018EDA8 (_CApplicationViewManager--GetViews_--_1_--dtor$1.c)
 *     _CApplicationViewManager::GetViewsByZOrder_::_1_::dtor$1 @ 0x18018EF02 (_CApplicationViewManager--GetViewsByZOrder_--_1_--dtor$1.c)
 *     _CApplicationViewManager::HandleWindowReplaced_::_1_::dtor$0 @ 0x18018F080 (_CApplicationViewManager--HandleWindowReplaced_--_1_--dtor$0.c)
 *     _CApplicationViewManager::ProcessEntepriseIdChanged_::_1_::dtor$0 @ 0x18018F39F (_CApplicationViewManager--ProcessEntepriseIdChanged_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::GetViewForHwnd_::_1_::dtor$0 @ 0x180191389 (_ApplicationViewManagerVisibilityDebouncer--GetViewForHwnd_--_1_--dtor$0.c)
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
