/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800125E8
 * Callers:
 *     _SetRelatedProcessesToGameConfigStore_::_1_::dtor$1 @ 0x1800463EF (_SetRelatedProcessesToGameConfigStore_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadIsGameModeEnabled_::_1_::dtor$0 @ 0x180046425 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_LoadIsGameModeEnabled.c)
 *     __lambda_a569043095cd2854b0f9a8a791add160_::operator()_::_1_::dtor$4 @ 0x180046449 (__lambda_a569043095cd2854b0f9a8a791add160_--operator()_--_1_--dtor$4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$17 @ 0x1800464AF (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_1800464AF.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig_::_1_::dtor$5 @ 0x1800464C1 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_AttachGameModeConfig_--_1_--d.c)
 *     __lambda_a569043095cd2854b0f9a8a791add160_::operator()_::_1_::dtor$1 @ 0x1800464D3 (__lambda_a569043095cd2854b0f9a8a791add160_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$9 @ 0x180046728 (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFi_ea_180046728.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$0 @ 0x180046815 (_SerializeRelatedProcessArray_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$1 @ 0x180046827 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGameConfigStore.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$5 @ 0x180046839 (_SerializeRelatedProcessArray_--_1_--dtor$5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$8 @ 0x1800469FB (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_1800469FB.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_1_::dtor$1 @ 0x180046D6E (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeCatego_ea_180046D6E.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$1 @ 0x180046DA4 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDisplayInfo_--_1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetAllLastRunProcessPaths_::_1_::dtor$1 @ 0x180046DB6 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetAllLastRunProcessPa.c)
 *     __lambda_a3795b8e063e319a63f5a3b15bc55068_::operator()_::_1_::dtor$6 @ 0x180046DFE (__lambda_a3795b8e063e319a63f5a3b15bc55068_--operator()_--_1_--dtor$6.c)
 *     __lambda_a3795b8e063e319a63f5a3b15bc55068_::operator()_::_1_::dtor$5 @ 0x180046E22 (__lambda_a3795b8e063e319a63f5a3b15bc55068_--operator()_--_1_--dtor$5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$13 @ 0x180046E7C (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180046E7C.c)
 *     __lambda_2d796ec39c4cc1ad3399d6c724543242_::operator()_::_1_::dtor$0 @ 0x180046EC4 (__lambda_2d796ec39c4cc1ad3399d6c724543242_--operator()_--_1_--dtor$0.c)
 *     __lambda_2d796ec39c4cc1ad3399d6c724543242_::operator()_::_1_::dtor$3 @ 0x180046EE8 (__lambda_2d796ec39c4cc1ad3399d6c724543242_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
