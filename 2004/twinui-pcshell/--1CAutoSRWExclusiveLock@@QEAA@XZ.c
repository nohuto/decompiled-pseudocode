/*
 * XREFs of ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180147860
 * Callers:
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180025A10 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _CApplicationViewManager::AddWin32ApplicationView_::_1_::dtor$1 @ 0x1800FFDAE (_CApplicationViewManager--AddWin32ApplicationView_--_1_--dtor$1.c)
 *     _CApplicationViewManager::AddWinRTApplicationView_::_1_::dtor$1 @ 0x1800FFEF4 (_CApplicationViewManager--AddWinRTApplicationView_--_1_--dtor$1.c)
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$8 @ 0x18010044C (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$8.c)
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$12 @ 0x18010045E (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$12.c)
 *     __lambda_34e39aef9b6af58545d6992c86a4e9be_::operator()_::_1_::dtor$4 @ 0x1801006F0 (__lambda_34e39aef9b6af58545d6992c86a4e9be_--operator()_--_1_--dtor$4.c)
 *     _CApplicationManager::ApplyOperation_::_1_::dtor$2 @ 0x180102630 (_CApplicationManager--ApplyOperation_--_1_--dtor$2.c)
 *     _CApplicationFrameService::OnCommand_::_1_::dtor$4 @ 0x18010293C (_CApplicationFrameService--OnCommand_--_1_--dtor$4.c)
 *     _CAppViewManager::_InvokePresentedWindowCallbackTriggers_::_1_::dtor$1 @ 0x180103E90 (_CAppViewManager--_InvokePresentedWindowCallbackTriggers_--_1_--dtor$1.c)
 *     _CAppViewManager::OnTitleUpdated_::_1_::dtor$0 @ 0x180104016 (_CAppViewManager--OnTitleUpdated_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$0 @ 0x18010431C (_ApplicationViewManagerVisibilityDebouncer--HandleApplicationViewChangeSync_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$2 @ 0x18010432E (_ApplicationViewManagerVisibilityDebouncer--HandleApplicationViewChangeSync_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleUniversalFrameChangeRequest_::_1_::dtor$3 @ 0x180156EEB (_CApplicationManager--_HandleUniversalFrameChangeRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest_::_1_::dtor$3 @ 0x180157193 (_CApplicationManager--_HandleUniversalTitleBarVisibilityChangeRequest_--_1_--dtor$3.c)
 *     __lambda_3a58774b2403835eabbd2227e376bc7e_::operator()_::_1_::dtor$0 @ 0x180167F96 (__lambda_3a58774b2403835eabbd2227e376bc7e_--operator()_--_1_--dtor$0.c)
 *     __lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()_::_1_::dtor$0 @ 0x1801683E4 (__lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_--operator()_--_1_--dtor$0.c)
 *     _CAppViewManager::AcquireForegroundRightForApp_::_1_::dtor$1 @ 0x180168769 (_CAppViewManager--AcquireForegroundRightForApp_--_1_--dtor$1.c)
 *     _CAppViewManager::AddUnghostWindowCallbackTrigger_::_1_::dtor$0 @ 0x180168893 (_CAppViewManager--AddUnghostWindowCallbackTrigger_--_1_--dtor$0.c)
 *     _CAppViewManager::CollapseAllViewsForApp_::_1_::dtor$2 @ 0x180168DBD (_CAppViewManager--CollapseAllViewsForApp_--_1_--dtor$2.c)
 *     _CAppViewManager::ConsolidateView_::_1_::dtor$6 @ 0x180169165 (_CAppViewManager--ConsolidateView_--_1_--dtor$6.c)
 *     _CAppViewManager::SplitView_::_1_::dtor$4 @ 0x18016CA7A (_CAppViewManager--SplitView_--_1_--dtor$4.c)
 *     _CAppViewManager::StealForegroundActivateGlom_::_1_::dtor$1 @ 0x18016D831 (_CAppViewManager--StealForegroundActivateGlom_--_1_--dtor$1.c)
 *     _CAppViewManager::_ContinueSwitchAsyncWorker_::_1_::dtor$3 @ 0x1801702E8 (_CAppViewManager--_ContinueSwitchAsyncWorker_--_1_--dtor$3.c)
 *     _CAppViewManager::_GetViewForSwitchInternal_::_1_::dtor$2 @ 0x180170ECF (_CAppViewManager--_GetViewForSwitchInternal_--_1_--dtor$2.c)
 *     _CAppViewManager::_ObliterateOperation_::_1_::dtor$0 @ 0x1801712BD (_CAppViewManager--_ObliterateOperation_--_1_--dtor$0.c)
 *     _CAppViewManager::_PrepareToSwitchAsyncWorker_::_1_::dtor$2 @ 0x180171493 (_CAppViewManager--_PrepareToSwitchAsyncWorker_--_1_--dtor$2.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$1 @ 0x180172DCD (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$1.c)
 *     _CAppViewManager::_TransferAllWindowsToNextGlom_::_1_::dtor$0 @ 0x180172EDF (_CAppViewManager--_TransferAllWindowsToNextGlom_--_1_--dtor$0.c)
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$1 @ 0x180173385 (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$1.c)
 *     _Windows::Internal::Shell::Chaining::ChainLink_ObjectWithIamLock_::AppendChainLink_::_1_::dtor$1 @ 0x18017B088 (_Windows--Internal--Shell--Chaining--ChainLink_ObjectWithIamLock_--AppendChainLink_--_1_--dtor$1.c)
 *     _CImmersiveApp::AppendChainLink_::_1_::dtor$1 @ 0x18017B1B1 (_CImmersiveApp--AppendChainLink_--_1_--dtor$1.c)
 *     _CImmersiveApp::EnableSystemVisualAnimation_::_1_::dtor$0 @ 0x18017BE41 (_CImmersiveApp--EnableSystemVisualAnimation_--_1_--dtor$0.c)
 *     _CImmersiveApp::SetWindowingEnvironmentConfig_::_1_::dtor$0 @ 0x18018209A (_CImmersiveApp--SetWindowingEnvironmentConfig_--_1_--dtor$0.c)
 *     _CApplicationViewManager::AddApplicationView_::_1_::dtor$1 @ 0x18018E8C8 (_CApplicationViewManager--AddApplicationView_--_1_--dtor$1.c)
 *     _CApplicationViewManager::RemoveApplicationView_::_1_::dtor$1 @ 0x18018FA97 (_CApplicationViewManager--RemoveApplicationView_--_1_--dtor$1.c)
 *     _ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView_::_1_::dtor$0 @ 0x18019156E (_ApplicationViewManagerVisibilityDebouncer--ClearCachedAppView_--_1_--dtor$0.c)
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
