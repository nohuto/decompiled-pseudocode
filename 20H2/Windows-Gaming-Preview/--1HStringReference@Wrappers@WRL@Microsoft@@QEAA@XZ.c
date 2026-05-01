/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800125D8
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$0 @ 0x1800466E0 (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFileDescription.c)
 *     _JsonDocumentFromGameConfigValues_::_1_::dtor$15 @ 0x180046881 (_JsonDocumentFromGameConfigValues_--_1_--dtor$15.c)
 *     __lambda_ad7bd321257e919ed278c75d322da1b6_::operator()_::_1_::dtor$2 @ 0x180046B1E (__lambda_ad7bd321257e919ed278c75d322da1b6_--operator()_--_1_--dtor$2.c)
 *     __lambda_ad7bd321257e919ed278c75d322da1b6_::operator()_::_1_::dtor$6 @ 0x180046B42 (__lambda_ad7bd321257e919ed278c75d322da1b6_--operator()_--_1_--dtor$6.c)
 *     __lambda_95a85cc3153b2a32da5e8f8bf20a59f3_::operator()_::_1_::dtor$1 @ 0x180046BAE (__lambda_95a85cc3153b2a32da5e8f8bf20a59f3_--operator()_--_1_--dtor$1.c)
 *     __lambda_95a85cc3153b2a32da5e8f8bf20a59f3_::operator()_::_1_::dtor$3 @ 0x180046BC0 (__lambda_95a85cc3153b2a32da5e8f8bf20a59f3_--operator()_--_1_--dtor$3.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath_::_1_::dtor$2 @ 0x180046E34 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_CreateStorageFil_ea_180046E34.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$5 @ 0x180046E58 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_180046E58.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
