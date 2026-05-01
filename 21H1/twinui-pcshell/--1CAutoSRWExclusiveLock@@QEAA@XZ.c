/*
 * XREFs of ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1801231A8
 * Callers:
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1800251E0 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _CApplicationViewManager::AddWin32ApplicationView_::_1_::dtor$1 @ 0x1800DAF5E (_CApplicationViewManager--AddWin32ApplicationView_--_1_--dtor$1.c)
 *     _CApplicationViewManager::AddWinRTApplicationView_::_1_::dtor$1 @ 0x1800DB0A4 (_CApplicationViewManager--AddWinRTApplicationView_--_1_--dtor$1.c)
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$8 @ 0x1800DB5DC (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$8.c)
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$12 @ 0x1800DB5EE (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$12.c)
 *     __lambda_34e39aef9b6af58545d6992c86a4e9be_::operator()_::_1_::dtor$4 @ 0x1800DB880 (__lambda_34e39aef9b6af58545d6992c86a4e9be_--operator()_--_1_--dtor$4.c)
 *     _CApplicationManager::ApplyOperation_::_1_::dtor$2 @ 0x1800DC900 (_CApplicationManager--ApplyOperation_--_1_--dtor$2.c)
 *     _CApplicationFrameService::OnCommand_::_1_::dtor$4 @ 0x1800DDA0C (_CApplicationFrameService--OnCommand_--_1_--dtor$4.c)
 *     _CAppViewManager::_InvokePresentedWindowCallbackTriggers_::_1_::dtor$1 @ 0x1800DEF8E (_CAppViewManager--_InvokePresentedWindowCallbackTriggers_--_1_--dtor$1.c)
 *     _CAppViewManager::OnTitleUpdated_::_1_::dtor$0 @ 0x1800DF114 (_CAppViewManager--OnTitleUpdated_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$0 @ 0x1800DF408 (_ApplicationViewManagerVisibilityDebouncer--HandleApplicationViewChangeSync_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$2 @ 0x1800DF41A (_ApplicationViewManagerVisibilityDebouncer--HandleApplicationViewChangeSync_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleUniversalFrameChangeRequest_::_1_::dtor$3 @ 0x1801328FB (_CApplicationManager--_HandleUniversalFrameChangeRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest_::_1_::dtor$3 @ 0x180132BA3 (_CApplicationManager--_HandleUniversalTitleBarVisibilityChangeRequest_--_1_--dtor$3.c)
 *     __lambda_3a58774b2403835eabbd2227e376bc7e_::operator()_::_1_::dtor$0 @ 0x180143A16 (__lambda_3a58774b2403835eabbd2227e376bc7e_--operator()_--_1_--dtor$0.c)
 *     __lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()_::_1_::dtor$0 @ 0x180143E64 (__lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_--operator()_--_1_--dtor$0.c)
 *     _CAppViewManager::AcquireForegroundRightForApp_::_1_::dtor$1 @ 0x1801441E9 (_CAppViewManager--AcquireForegroundRightForApp_--_1_--dtor$1.c)
 *     _CAppViewManager::AddUnghostWindowCallbackTrigger_::_1_::dtor$0 @ 0x180144313 (_CAppViewManager--AddUnghostWindowCallbackTrigger_--_1_--dtor$0.c)
 *     _CAppViewManager::CollapseAllViewsForApp_::_1_::dtor$2 @ 0x18014483D (_CAppViewManager--CollapseAllViewsForApp_--_1_--dtor$2.c)
 *     _CAppViewManager::ConsolidateView_::_1_::dtor$6 @ 0x180144BE5 (_CAppViewManager--ConsolidateView_--_1_--dtor$6.c)
 *     _CAppViewManager::SplitView_::_1_::dtor$4 @ 0x1801484DA (_CAppViewManager--SplitView_--_1_--dtor$4.c)
 *     _CAppViewManager::StealForegroundActivateGlom_::_1_::dtor$1 @ 0x180149291 (_CAppViewManager--StealForegroundActivateGlom_--_1_--dtor$1.c)
 *     _CAppViewManager::_ContinueSwitchAsyncWorker_::_1_::dtor$3 @ 0x18014BD48 (_CAppViewManager--_ContinueSwitchAsyncWorker_--_1_--dtor$3.c)
 *     _CAppViewManager::_GetViewForSwitchInternal_::_1_::dtor$2 @ 0x18014C92F (_CAppViewManager--_GetViewForSwitchInternal_--_1_--dtor$2.c)
 *     _CAppViewManager::_ObliterateOperation_::_1_::dtor$0 @ 0x18014CD1D (_CAppViewManager--_ObliterateOperation_--_1_--dtor$0.c)
 *     _CAppViewManager::_PrepareToSwitchAsyncWorker_::_1_::dtor$2 @ 0x18014CEF3 (_CAppViewManager--_PrepareToSwitchAsyncWorker_--_1_--dtor$2.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$1 @ 0x18014E82D (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$1.c)
 *     _CAppViewManager::_TransferAllWindowsToNextGlom_::_1_::dtor$0 @ 0x18014E93F (_CAppViewManager--_TransferAllWindowsToNextGlom_--_1_--dtor$0.c)
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$1 @ 0x18014EDE5 (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$1.c)
 *     _Windows::Internal::Shell::Chaining::ChainLink_ObjectWithIamLock_::AppendChainLink_::_1_::dtor$1 @ 0x180156C68 (_Windows--Internal--Shell--Chaining--ChainLink_ObjectWithIamLock_--AppendChainLink_--_1_--dtor$1.c)
 *     _CImmersiveApp::AppendChainLink_::_1_::dtor$1 @ 0x180156D91 (_CImmersiveApp--AppendChainLink_--_1_--dtor$1.c)
 *     _CImmersiveApp::EnableSystemVisualAnimation_::_1_::dtor$0 @ 0x180157A21 (_CImmersiveApp--EnableSystemVisualAnimation_--_1_--dtor$0.c)
 *     _CImmersiveApp::SetWindowingEnvironmentConfig_::_1_::dtor$0 @ 0x18015DFAA (_CImmersiveApp--SetWindowingEnvironmentConfig_--_1_--dtor$0.c)
 *     _CApplicationViewManager::AddApplicationView_::_1_::dtor$1 @ 0x18016A958 (_CApplicationViewManager--AddApplicationView_--_1_--dtor$1.c)
 *     _CApplicationViewManager::RemoveApplicationView_::_1_::dtor$1 @ 0x18016BB27 (_CApplicationViewManager--RemoveApplicationView_--_1_--dtor$1.c)
 *     _ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView_::_1_::dtor$0 @ 0x18016D5FE (_ApplicationViewManagerVisibilityDebouncer--ClearCachedAppView_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *this;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
