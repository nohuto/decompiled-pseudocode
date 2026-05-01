/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18014711C
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18002ADC0 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18002F340 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$5 @ 0x180102E00 (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--dtor$5.c)
 *     _CClassicWindow::GetApplicationId_::_1_::dtor$0 @ 0x180103DF5 (_CClassicWindow--GetApplicationId_--_1_--dtor$0.c)
 *     _Win32ApplicationViewHelpers::GetWindowImageName_::_1_::dtor$1 @ 0x180103E61 (_Win32ApplicationViewHelpers--GetWindowImageName_--_1_--dtor$1.c)
 *     _CApplicationManager::UncloakWindow_::_1_::dtor$0 @ 0x1801542FA (_CApplicationManager--UncloakWindow_--_1_--dtor$0.c)
 *     _CStartExperienceManager::OnEventQueued_::_1_::dtor$5 @ 0x1801D3FC2 (_CStartExperienceManager--OnEventQueued_--_1_--dtor$5.c)
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$4 @ 0x180219FE8 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$4.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$0 @ 0x18022015D (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$0.c)
 *     _TabViewManager::CreateDwmSharedThumbnailVisual_::_1_::dtor$2 @ 0x18026CD56 (_TabViewManager--CreateDwmSharedThumbnailVisual_--_1_--dtor$2.c)
 *     _TitleBarController::ConnectTitleBarToSharedVisual_::_1_::dtor$0 @ 0x18028682D (_TitleBarController--ConnectTitleBarToSharedVisual_--_1_--dtor$0.c)
 *     _TitleBarController::DisconnectTitleBarFromSharedVisual_::_1_::dtor$0 @ 0x1802868C5 (_TitleBarController--DisconnectTitleBarFromSharedVisual_--_1_--dtor$0.c)
 *     _IsShellInfraHostRunning_::_1_::dtor$0 @ 0x1802BEDFF (_IsShellInfraHostRunning_--_1_--dtor$0.c)
 *     __lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator()_::_1_::dtor$2 @ 0x1802C9F19 (__lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--operator()_--_1_--dtor$2.c)
 *     __lambda_1c848fc40f8d66460ef5049a4e343f17_::operator()_::_1_::dtor$2 @ 0x1802DAD2E (__lambda_1c848fc40f8d66460ef5049a4e343f17_--operator()_--_1_--dtor$2.c)
 *     _TouchKeyboardExperienceManager::GetForegroundAppId_::_1_::dtor$1 @ 0x18034A6A2 (_TouchKeyboardExperienceManager--GetForegroundAppId_--_1_--dtor$1.c)
 *     _TryGetProcessExePathAndAppId_::_1_::dtor$2 @ 0x18045F3EC (_TryGetProcessExePathAndAppId_--_1_--dtor$2.c)
 *     _TryGetProcessCommandLine_::_1_::dtor$0 @ 0x18045FAE3 (_TryGetProcessCommandLine_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
