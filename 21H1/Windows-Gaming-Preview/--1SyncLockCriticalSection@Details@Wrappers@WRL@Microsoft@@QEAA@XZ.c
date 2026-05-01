/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800388CC
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId_::_1_::dtor$0 @ 0x180046B90 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeTitleId_--_1_--dtor.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName_::_1_::dtor$0 @ 0x180046BA2 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializePackageFamilyName_-.c)
 *     __lambda_a3795b8e063e319a63f5a3b15bc55068_::operator()_::_1_::dtor$4 @ 0x180046C20 (__lambda_a3795b8e063e319a63f5a3b15bc55068_--operator()_--_1_--dtor$4.c)
 *     __lambda_de700cff19afa60d1ddedf7e1b11adba_::operator()_::_1_::dtor$2 @ 0x180046CC2 (__lambda_de700cff19afa60d1ddedf7e1b11adba_--operator()_--_1_--dtor$2.c)
 *     __lambda_2d796ec39c4cc1ad3399d6c724543242_::operator()_::_1_::dtor$1 @ 0x180046CE6 (__lambda_2d796ec39c4cc1ad3399d6c724543242_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$0 @ 0x180046E43 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGa_ea_180046E43.c)
 *     __lambda_a569043095cd2854b0f9a8a791add160_::operator()_::_1_::dtor$0 @ 0x180046E7E (__lambda_a569043095cd2854b0f9a8a791add160_--operator()_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync_::_1_::dtor$0 @ 0x180046EA2 (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateAsync_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
