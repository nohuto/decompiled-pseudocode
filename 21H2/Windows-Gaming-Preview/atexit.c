/*
 * XREFs of atexit @ 0x180044AB8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001170 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001190 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     Windows::Internal::Details::_dynamic_initializer_for___git__ @ 0x180001260 (Windows--Internal--Details--_dynamic_initializer_for___git__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001280 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001310 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__Microsoft::WRL::Details::StaticStorage_Microsoft::WRL::Details::DefaultModule_1__0_int_::instance___ @ 0x180001400 (_dynamic_initializer_for__Microsoft--WRL--Details--StaticStorage_Microsoft--WRL--Details--Defaul.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__Id__ @ 0x180001420 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Id__.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__TileId__ @ 0x180001460 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__TileId.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__FullTileId__ @ 0x1800014A0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__FullTi.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__GameConfigIds__ @ 0x1800014E0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__GameCo.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__PhoneProductId__ @ 0x180001520 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__PhoneP.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__PackageFamilyName__ @ 0x180001560 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Packag.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__AumId__ @ 0x1800015A0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__AumId_.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__MFURank__ @ 0x1800015E0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__MFURan.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__DateInstalled__ @ 0x180001620 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__DateIn.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__DesktopAppPath__ @ 0x180001660 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Deskto.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__ProcessExeFullPaths__ @ 0x1800016A0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Proces.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__LastLaunched__ @ 0x1800016E0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__LastLa.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__GameModeSystemDefaults__ @ 0x180001720 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__GameMo.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__KglGameModeDefaults__ @ 0x180001760 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__KglGam.c)
 *     _dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance__ @ 0x1800017A0 (_dynamic_initializer_for__Windows--Gaming--Preview--GamesEnumeration--KglDefaults--_instance__.c)
 *     _dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock__ @ 0x1800017C0 (_dynamic_initializer_for__Windows--Gaming--Preview--GamesEnumeration--KglDefaults--_initializeLo.c)
 *     _dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_readyEvent__ @ 0x180001800 (_dynamic_initializer_for__Windows--Gaming--Preview--GamesEnumeration--KglDefaults--_readyEvent__.c)
 *     _dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance__ @ 0x180001820 (_dynamic_initializer_for__Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--_instance_.c)
 *     _dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock__ @ 0x180001840 (_dynamic_initializer_for__Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--_initializ.c)
 *     _dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_readyEvent__ @ 0x180001880 (_dynamic_initializer_for__Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--_readyEven.c)
 *     ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027C58 (-_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     __scrt_initialize_thread_safe_statics @ 0x180044C10 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x180044A60 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
