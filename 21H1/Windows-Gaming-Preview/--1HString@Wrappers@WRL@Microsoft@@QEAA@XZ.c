/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800125E8
 * Callers:
 *     _SetRelatedProcessesToGameConfigStore_::_1_::dtor$1 @ 0x1800461FF (_SetRelatedProcessesToGameConfigStore_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadIsGameModeEnabled_::_1_::dtor$0 @ 0x180046235 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_LoadIsGameModeEnabled.c)
 *     __lambda_a569043095cd2854b0f9a8a791add160_::operator()_::_1_::dtor$4 @ 0x180046259 (__lambda_a569043095cd2854b0f9a8a791add160_--operator()_--_1_--dtor$4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$17 @ 0x1800462BF (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_1800462BF.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig_::_1_::dtor$5 @ 0x1800462D1 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_AttachGameModeConfig_--_1_--d.c)
 *     __lambda_a569043095cd2854b0f9a8a791add160_::operator()_::_1_::dtor$1 @ 0x1800462E3 (__lambda_a569043095cd2854b0f9a8a791add160_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$9 @ 0x180046538 (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFi_ea_180046538.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$0 @ 0x180046625 (_SerializeRelatedProcessArray_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$1 @ 0x180046637 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGameConfigStore.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$5 @ 0x180046649 (_SerializeRelatedProcessArray_--_1_--dtor$5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$8 @ 0x18004680B (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_18004680B.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_1_::dtor$1 @ 0x180046B7E (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeCatego_ea_180046B7E.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$1 @ 0x180046BB4 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDisplayInfo_--_1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetAllLastRunProcessPaths_::_1_::dtor$1 @ 0x180046BC6 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetAllLastRunProcessPa.c)
 *     __lambda_a3795b8e063e319a63f5a3b15bc55068_::operator()_::_1_::dtor$6 @ 0x180046C0E (__lambda_a3795b8e063e319a63f5a3b15bc55068_--operator()_--_1_--dtor$6.c)
 *     __lambda_a3795b8e063e319a63f5a3b15bc55068_::operator()_::_1_::dtor$5 @ 0x180046C32 (__lambda_a3795b8e063e319a63f5a3b15bc55068_--operator()_--_1_--dtor$5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$13 @ 0x180046C8C (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180046C8C.c)
 *     __lambda_2d796ec39c4cc1ad3399d6c724543242_::operator()_::_1_::dtor$0 @ 0x180046CD4 (__lambda_2d796ec39c4cc1ad3399d6c724543242_--operator()_--_1_--dtor$0.c)
 *     __lambda_2d796ec39c4cc1ad3399d6c724543242_::operator()_::_1_::dtor$3 @ 0x180046CF8 (__lambda_2d796ec39c4cc1ad3399d6c724543242_--operator()_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
