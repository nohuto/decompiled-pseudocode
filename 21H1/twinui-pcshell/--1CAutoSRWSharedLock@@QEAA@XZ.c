/*
 * XREFs of ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1801231CC
 * Callers:
 *     _CApplicationManager::_HandleSelectTargetViewForNavigationRequest_::_1_::dtor$3 @ 0x1800DADE2 (_CApplicationManager--_HandleSelectTargetViewForNavigationRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$2 @ 0x1800DB26F (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$2.c)
 *     _CImmersiveApp::GetUniqueId_::_1_::dtor$0 @ 0x1800DCE74 (_CImmersiveApp--GetUniqueId_--_1_--dtor$0.c)
 *     _CApplicationManager::_AnalyzeShellNotification_::_1_::dtor$1 @ 0x1800DD330 (_CApplicationManager--_AnalyzeShellNotification_--_1_--dtor$1.c)
 *     _CApplicationViewManager::ApplicationChanged_::_1_::dtor$2 @ 0x1800DD350 (_CApplicationViewManager--ApplicationChanged_--_1_--dtor$2.c)
 *     _CApplicationViewManager::GetViewForApplication_::_1_::dtor$0 @ 0x1800DD390 (_CApplicationViewManager--GetViewForApplication_--_1_--dtor$0.c)
 *     _CApplicationViewManager::WindowOccludedChanged_::_1_::dtor$0 @ 0x1800DD3B0 (_CApplicationViewManager--WindowOccludedChanged_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplicationByWindow_::_1_::dtor$0 @ 0x1800DD56D (_CApplicationManager--GetApplicationByWindow_--_1_--dtor$0.c)
 *     _CImmersiveApp::GetPersistingStateName_::_1_::dtor$0 @ 0x1800DF36C (_CImmersiveApp--GetPersistingStateName_--_1_--dtor$0.c)
 *     _CApplicationManager::GetApplication_::_1_::dtor$0 @ 0x1800DF52E (_CApplicationManager--GetApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::GetAllApplicationsByAppID_::_1_::dtor$0 @ 0x1801260E5 (_CApplicationManager--GetAllApplicationsByAppID_--_1_--dtor$0.c)
 *     _CApplicationManager::GetForegroundApplication_::_1_::dtor$0 @ 0x180127259 (_CApplicationManager--GetForegroundApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::GetImmersiveApplicationArray_::_1_::dtor$0 @ 0x180127456 (_CApplicationManager--GetImmersiveApplicationArray_--_1_--dtor$0.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$0 @ 0x180127BF4 (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$0.c)
 *     _CApplicationManager::GetSizeConstraintOverrides_::_1_::dtor$0 @ 0x180127DFB (_CApplicationManager--GetSizeConstraintOverrides_--_1_--dtor$0.c)
 *     _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$2 @ 0x1801285BA (_CApplicationManager--HandleFrameWindowGhosted_--_1_--dtor$2.c)
 *     _CApplicationManager::QueryObjectForWindow_::_1_::dtor$0 @ 0x18012AAF9 (_CApplicationManager--QueryObjectForWindow_--_1_--dtor$0.c)
 *     _CImmersiveApp::IsApplicationWindowPresented_::_1_::dtor$0 @ 0x18015ADC8 (_CImmersiveApp--IsApplicationWindowPresented_--_1_--dtor$0.c)
 *     _CImmersiveApp::ShouldShowBackButton_::_1_::dtor$0 @ 0x18015E032 (_CImmersiveApp--ShouldShowBackButton_--_1_--dtor$0.c)
 *     __lambda_0d2ae2ebb58457bb6356c5e49aa852a2_::operator()_::_1_::dtor$0 @ 0x18016A0A2 (__lambda_0d2ae2ebb58457bb6356c5e49aa852a2_--operator()_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetApplicationViewsById_::_1_::dtor$1 @ 0x18016ADCB (_CApplicationViewManager--GetApplicationViewsById_--_1_--dtor$1.c)
 *     _CApplicationViewManager::GetViewForAppUserModelId_::_1_::dtor$0 @ 0x18016B0D7 (_CApplicationViewManager--GetViewForAppUserModelId_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetViews_::_1_::dtor$1 @ 0x18016B248 (_CApplicationViewManager--GetViews_--_1_--dtor$1.c)
 *     _CApplicationViewManager::GetViewsByZOrder_::_1_::dtor$1 @ 0x18016B3A2 (_CApplicationViewManager--GetViewsByZOrder_--_1_--dtor$1.c)
 *     _CApplicationViewManager::HandleWindowReplaced_::_1_::dtor$0 @ 0x18016B520 (_CApplicationViewManager--HandleWindowReplaced_--_1_--dtor$0.c)
 *     _CApplicationViewManager::ProcessEntepriseIdChanged_::_1_::dtor$0 @ 0x18016B83F (_CApplicationViewManager--ProcessEntepriseIdChanged_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::GetViewForHwnd_::_1_::dtor$0 @ 0x18016D829 (_ApplicationViewManagerVisibilityDebouncer--GetViewForHwnd_--_1_--dtor$0.c)
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
