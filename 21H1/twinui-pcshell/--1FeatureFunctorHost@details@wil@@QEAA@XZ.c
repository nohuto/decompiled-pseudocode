/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x180093B40
 * Callers:
 *     _wil::details::RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b__&__::_1_::dtor$0 @ 0x180093A91 (_wil--details--RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b__-__--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::TerminateApplication_::_1_::dtor$0 @ 0x1800A90C1 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--TerminateApplication_--_1_--.c)
 *     _CDesktopPositioner::_GetLaunchPosition_::_1_::dtor$8 @ 0x1800DDA42 (_CDesktopPositioner--_GetLaunchPosition_--_1_--dtor$8.c)
 *     _CortanaDesktopExperienceView::GetActivateArgs_::_1_::dtor$2 @ 0x1801E8D85 (_CortanaDesktopExperienceView--GetActivateArgs_--_1_--dtor$2.c)
 *     _TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener_::_1_::dtor$2 @ 0x180429BAF (_TwinUI--Lighting--AssistantLightWNFListener--AssistantLightWNFListener_--_1_--dtor$2.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$15 @ 0x18042A9E7 (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$15.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps_::_1_::dtor$0 @ 0x18043091A (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetActiveApps_--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppDisplayName_::_1_::dtor$0 @ 0x180430A36 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--GetAppDisplayName_--_1_--dto.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::IsAppActive_::_1_::dtor$0 @ 0x180431C56 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--IsAppActive_--_1_--dtor$0.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::StartUsageTracking_::_1_::dtor$0 @ 0x180432C1D (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--StartUsageTracking_--_1_--dt.c)
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::StopUsageTracking_::_1_::dtor$0 @ 0x180432DBD (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--StopUsageTracking_--_1_--dto.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
