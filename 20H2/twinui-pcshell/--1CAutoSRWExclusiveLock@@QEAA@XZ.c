/*
 * XREFs of ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18014771C
 * Callers:
 *     ?SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18001DB70 (-SetViewInFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _CApplicationViewManager::AddWin32ApplicationView_::_1_::dtor$1 @ 0x180101408 (_CApplicationViewManager--AddWin32ApplicationView_--_1_--dtor$1.c)
 *     _CApplicationViewManager::AddWinRTApplicationView_::_1_::dtor$1 @ 0x1801015B4 (_CApplicationViewManager--AddWinRTApplicationView_--_1_--dtor$1.c)
 *     _CApplicationManager::ApplyOperation_::_1_::dtor$2 @ 0x1801037E0 (_CApplicationManager--ApplyOperation_--_1_--dtor$2.c)
 *     _CApplicationFrameService::OnCommand_::_1_::dtor$4 @ 0x180103AEC (_CApplicationFrameService--OnCommand_--_1_--dtor$4.c)
 *     __lambda_34e39aef9b6af58545d6992c86a4e9be_::operator()_::_1_::dtor$4 @ 0x180103EC0 (__lambda_34e39aef9b6af58545d6992c86a4e9be_--operator()_--_1_--dtor$4.c)
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$8 @ 0x180103ED2 (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$8.c)
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$12 @ 0x180103F3E (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$12.c)
 *     _CAppViewManager::_InvokePresentedWindowCallbackTriggers_::_1_::dtor$1 @ 0x1801053BA (_CAppViewManager--_InvokePresentedWindowCallbackTriggers_--_1_--dtor$1.c)
 *     _CAppViewManager::OnTitleUpdated_::_1_::dtor$0 @ 0x180105540 (_CAppViewManager--OnTitleUpdated_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$0 @ 0x1801058A0 (_ApplicationViewManagerVisibilityDebouncer--HandleApplicationViewChangeSync_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$2 @ 0x1801058B2 (_ApplicationViewManagerVisibilityDebouncer--HandleApplicationViewChangeSync_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleUniversalFrameChangeRequest_::_1_::dtor$3 @ 0x180156D3B (_CApplicationManager--_HandleUniversalFrameChangeRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleUniversalTitleBarVisibilityChangeRequest_::_1_::dtor$3 @ 0x180156FE3 (_CApplicationManager--_HandleUniversalTitleBarVisibilityChangeRequest_--_1_--dtor$3.c)
 *     __lambda_3a58774b2403835eabbd2227e376bc7e_::operator()_::_1_::dtor$0 @ 0x180167D7A (__lambda_3a58774b2403835eabbd2227e376bc7e_--operator()_--_1_--dtor$0.c)
 *     __lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_::operator()_::_1_::dtor$0 @ 0x1801681C8 (__lambda_c1a7ac69e9e62a8a18c5910db6fc25e8_--operator()_--_1_--dtor$0.c)
 *     _CAppViewManager::AcquireForegroundRightForApp_::_1_::dtor$1 @ 0x180168549 (_CAppViewManager--AcquireForegroundRightForApp_--_1_--dtor$1.c)
 *     _CAppViewManager::AddUnghostWindowCallbackTrigger_::_1_::dtor$0 @ 0x180168673 (_CAppViewManager--AddUnghostWindowCallbackTrigger_--_1_--dtor$0.c)
 *     _CAppViewManager::CollapseAllViewsForApp_::_1_::dtor$2 @ 0x180168B9D (_CAppViewManager--CollapseAllViewsForApp_--_1_--dtor$2.c)
 *     _CAppViewManager::ConsolidateView_::_1_::dtor$6 @ 0x180168F45 (_CAppViewManager--ConsolidateView_--_1_--dtor$6.c)
 *     _CAppViewManager::SplitView_::_1_::dtor$4 @ 0x18016C85A (_CAppViewManager--SplitView_--_1_--dtor$4.c)
 *     _CAppViewManager::StealForegroundActivateGlom_::_1_::dtor$1 @ 0x18016D611 (_CAppViewManager--StealForegroundActivateGlom_--_1_--dtor$1.c)
 *     _CAppViewManager::_ContinueSwitchAsyncWorker_::_1_::dtor$3 @ 0x1801700C8 (_CAppViewManager--_ContinueSwitchAsyncWorker_--_1_--dtor$3.c)
 *     _CAppViewManager::_GetViewForSwitchInternal_::_1_::dtor$2 @ 0x180170CAF (_CAppViewManager--_GetViewForSwitchInternal_--_1_--dtor$2.c)
 *     _CAppViewManager::_ObliterateOperation_::_1_::dtor$0 @ 0x18017109D (_CAppViewManager--_ObliterateOperation_--_1_--dtor$0.c)
 *     _CAppViewManager::_PrepareToSwitchAsyncWorker_::_1_::dtor$2 @ 0x180171273 (_CAppViewManager--_PrepareToSwitchAsyncWorker_--_1_--dtor$2.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$1 @ 0x180172BAD (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$1.c)
 *     _CAppViewManager::_TransferAllWindowsToNextGlom_::_1_::dtor$0 @ 0x180172CBF (_CAppViewManager--_TransferAllWindowsToNextGlom_--_1_--dtor$0.c)
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$1 @ 0x180173165 (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$1.c)
 *     _Windows::Internal::Shell::Chaining::ChainLink_ObjectWithIamLock_::AppendChainLink_::_1_::dtor$1 @ 0x18017AC98 (_Windows--Internal--Shell--Chaining--ChainLink_ObjectWithIamLock_--AppendChainLink_--_1_--dtor$1.c)
 *     _CImmersiveApp::AppendChainLink_::_1_::dtor$1 @ 0x18017ADC1 (_CImmersiveApp--AppendChainLink_--_1_--dtor$1.c)
 *     _CImmersiveApp::EnableSystemVisualAnimation_::_1_::dtor$0 @ 0x18017BA51 (_CImmersiveApp--EnableSystemVisualAnimation_--_1_--dtor$0.c)
 *     _CImmersiveApp::SetWindowingEnvironmentConfig_::_1_::dtor$0 @ 0x180181CAA (_CImmersiveApp--SetWindowingEnvironmentConfig_--_1_--dtor$0.c)
 *     _CApplicationViewManager::AddApplicationView_::_1_::dtor$1 @ 0x18018E4B8 (_CApplicationViewManager--AddApplicationView_--_1_--dtor$1.c)
 *     _CApplicationViewManager::RemoveApplicationView_::_1_::dtor$1 @ 0x18018F687 (_CApplicationViewManager--RemoveApplicationView_--_1_--dtor$1.c)
 *     _ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView_::_1_::dtor$0 @ 0x18019115E (_ApplicationViewManagerVisibilityDebouncer--ClearCachedAppView_--_1_--dtor$0.c)
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
