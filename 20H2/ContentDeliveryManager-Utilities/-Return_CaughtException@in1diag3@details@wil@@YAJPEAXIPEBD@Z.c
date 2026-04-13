/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180005DB4
 * Callers:
 *     _ContentManagement::NotificationManager::LaunchToastNotification_::_1_::catch$2 @ 0x1800CEBE4 (_ContentManagement--NotificationManager--LaunchToastNotification_--_1_--catch$2.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerFactory::ActivateInstance_::_1_::catch$1 @ 0x1800CF744 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerFactory--ActivateInstance_--_1.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEvent_::_1_::catch$12 @ 0x1800CFB37 (_ContentManagement--ContentManagementService--ProcessCreativeEvent_--_1_--catch$12.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize_::_1_::catch$5 @ 0x1800D0A94 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RuntimeClassInitialize_-.c)
 *     __lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_::operator()_::_1_::catch$0 @ 0x1800D0B2B (__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_--operator()_--_1_--catch$0.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::catch$28 @ 0x1800D0B64 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800D0B64.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription_::_1_::catch$3 @ 0x1800D0CBA (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--UnregisterSubscription_-.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::PartialTrustGetSubscriptionAsync_::_1_::catch$1 @ 0x1800D0D08 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--PartialTrustGetSubscript.c)
 *     _ToastNotification::NotificationsTargetedContentClient::ActivateHelper_::_1_::catch$14 @ 0x1800D1540 (_ToastNotification--NotificationsTargetedContentClient--ActivateHelper_--_1_--catch$14.c)
 *     __lambda_59b29f73bafad90ed73b9c1b0cf40ac2_::operator()_::_1_::catch$3 @ 0x1800D1A0D (__lambda_59b29f73bafad90ed73b9c1b0cf40ac2_--operator()_--_1_--catch$3.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction_::_1_::catch$17 @ 0x1800D1C79 (_Windows--Services--TargetedContent--Internal--TargetedContentActionStatics--CreateAction_--_1_-.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::RuntimeClassInitialize_::_1_::catch$26 @ 0x1800D1D24 (_Windows--Services--TargetedContent--Internal--TargetedContentActionInternalImpl--RuntimeClassIn.c)
 *     __lambda_b7df6605325939df64e4896ead66165a_::operator()_::_1_::catch$4 @ 0x1800D1DBD (__lambda_b7df6605325939df64e4896ead66165a_--operator()_--_1_--catch$4.c)
 *     __lambda_ade65b3910699df78508c17998720da4_::operator()_::_1_::catch$4 @ 0x1800D1E0B (__lambda_ade65b3910699df78508c17998720da4_--operator()_--_1_--catch$4.c)
 *     __lambda_fb6889284f8c6875beea5ab05f2a2ddf_::operator()_::_1_::catch$4 @ 0x1800D1E59 (__lambda_fb6889284f8c6875beea5ab05f2a2ddf_--operator()_--_1_--catch$4.c)
 *     __lambda_5733d5035a874d27ce3bcb89134ebdd6_::operator()_::_1_::catch$4 @ 0x1800D1EA7 (__lambda_5733d5035a874d27ce3bcb89134ebdd6_--operator()_--_1_--catch$4.c)
 *     __lambda_c3bf47982beeb92429b0310f4e2c5f50_::operator()_::_1_::catch$4 @ 0x1800D1EF5 (__lambda_c3bf47982beeb92429b0310f4e2c5f50_--operator()_--_1_--catch$4.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize_::_1_::catch$0 @ 0x1800D241E (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerImpl--RuntimeClassInitializ.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::RuntimeClassInitialize_::_1_::catch$0 @ 0x1800D2469 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerStateTransitionImpl--Runtim.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal_::_1_::catch$15 @ 0x1800D27A8 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics--RegisterTri.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::UnregisterTriggerInternal_::_1_::catch$10 @ 0x1800D2862 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800D2862.c)
 *     __lambda_b59dbdfd0007f2d89c20db91cc7697cd_::operator()_::_1_::catch$18 @ 0x1800D2940 (__lambda_b59dbdfd0007f2d89c20db91cc7697cd_--operator()_--_1_--catch$18.c)
 *     _Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_25fdd0f24a46fb884595cc4fd71754f0____::_1_::catch$7 @ 0x1800D2AF3 (_Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_25fdd0f24a46fb8845.c)
 *     _Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6____::_1_::catch$7 @ 0x1800D2B56 (_Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_cbb39659d92f3de839.c)
 *     _Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873____::_1_::catch$7 @ 0x1800D2B95 (_Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3d.c)
 *     _Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db____::_1_::catch$7 @ 0x1800D2BD4 (_Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a1_ea_1800D2BD4.c)
 *     _Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_9989ec116c7a722ef409e952aab4eb08____::_1_::catch$7 @ 0x1800D2C5B (_Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_9989ec116c7a722ef4.c)
 *     _Windows::Services::TargetedContent::Internal::RegisterWnfTrigger_::_1_::catch$11 @ 0x1800D30D4 (_Windows--Services--TargetedContent--Internal--RegisterWnfTrigger_--_1_--catch$11.c)
 *     _Windows::Services::TargetedContent::Internal::RegisterTimerTrigger_::_1_::catch$7 @ 0x1800D317C (_Windows--Services--TargetedContent--Internal--RegisterTimerTrigger_--_1_--catch$7.c)
 *     _Windows::Services::TargetedContent::Internal::GetFeatureIdAndReportingIdForTrigger_::_1_::catch$4 @ 0x1800D326C (_Windows--Services--TargetedContent--Internal--GetFeatureIdAndReportingIdForTrigger_--_1_--catch.c)
 *     _Windows::Services::TargetedContent::Internal::SubscribeToFeatureReportingUsage_::_1_::catch$2 @ 0x1800D32E7 (_Windows--Services--TargetedContent--Internal--SubscribeToFeatureReportingUsage_--_1_--catch$2.c)
 *     _Windows::Services::TargetedContent::Internal::UnsubscribeFromFeatureReportingUsage_::_1_::catch$2 @ 0x1800D3344 (_Windows--Services--TargetedContent--Internal--UnsubscribeFromFeatureReportingUsage_--_1_--catch.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting_::_1_::catch$8 @ 0x1800D386C (_Windows--Services--TargetedContent--Internal--GetTriggerStateTransitionsFromSetting_--_1_--catc.c)
 *     _Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting_::_1_::catch$10 @ 0x1800D38F0 (_Windows--Services--TargetedContent--Internal--CreateTriggerRegistrationFromSetting_--_1_--catch.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggeredRegistration_::_1_::catch$9 @ 0x1800D3965 (_Windows--Services--TargetedContent--Internal--GetTriggeredRegistration_--_1_--catch$9.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::catch$16 @ 0x1800D39EC (_Windows--Services--TargetedContent--Internal--SetTriggerStateTransitions_--_1_--catch$16.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerRegistration_::_1_::catch$15 @ 0x1800D3B0B (_Windows--Services--TargetedContent--Internal--SetTriggerRegistration_--_1_--catch$15.c)
 *     _Windows::Services::TargetedContent::Internal::UpdateTriggerStateIfNeeded_::_1_::catch$4 @ 0x1800D3C22 (_Windows--Services--TargetedContent--Internal--UpdateTriggerStateIfNeeded_--_1_--catch$4.c)
 *     _CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys_::_1_::catch$5 @ 0x1800D60EC (_CreativeFramework--Actions--SetLockScreenHotspotsService--DeleteLockScreenRegistryKeys_--_1_--c.c)
 *     _EdgeTileUtils::RemoveTelemetryQueryParams_::_1_::catch$14 @ 0x1800D61FC (_EdgeTileUtils--RemoveTelemetryQueryParams_--_1_--catch$14.c)
 *     _CopyFaviconToEdge_::_1_::catch$15 @ 0x1800D6358 (_CopyFaviconToEdge_--_1_--catch$15.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_DisplayInfo_::_1_::catch$0 @ 0x1800D6996 (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppInfo--get_DisplayInfo.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::SetBoundedLayoutType_::_1_::catch$0 @ 0x1800D6C88 (_CreativeFramework--TargetedContentLayoutHelpers--Settings--SetBoundedLayoutType_--_1_--catch$0.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::Settings::SetChosenLayoutType_::_1_::catch$0 @ 0x1800D6CC1 (_CreativeFramework--TargetedContentLayoutHelpers--Settings--SetChosenLayoutType_--_1_--catch$0.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180005C4C (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
