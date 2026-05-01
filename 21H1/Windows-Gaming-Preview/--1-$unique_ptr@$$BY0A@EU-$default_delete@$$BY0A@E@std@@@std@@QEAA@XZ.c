/*
 * XREFs of ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ @ 0x18001882C
 * Callers:
 *     _GetGameFromGameConfigStore_::_1_::dtor$0 @ 0x18004654A (_GetGameFromGameConfigStore_--_1_--dtor$0.c)
 *     _DoWorkOnGameConfigStore_::_1_::dtor$0 @ 0x18004655C (_DoWorkOnGameConfigStore_--_1_--dtor$0.c)
 *     _DoWorkOnGameConfigStore_::_1_::dtor$2 @ 0x180046580 (_DoWorkOnGameConfigStore_--_1_--dtor$2.c)
 *     _GetRelatedProcessesFromGameConfigStore_::_1_::dtor$0 @ 0x18004665B (_GetRelatedProcessesFromGameConfigStore_--_1_--dtor$0.c)
 *     _GetGlobalRelatedProcessesFromGameConfigStore_::_1_::dtor$0 @ 0x18004667F (_GetGlobalRelatedProcessesFromGameConfigStore_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry_::_1_::dtor$0 @ 0x180046976 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_AddGameConfigsToGameLis.c)
 *     __lambda_95a85cc3153b2a32da5e8f8bf20a59f3_::operator()_::_1_::dtor$10 @ 0x180046A2A (__lambda_95a85cc3153b2a32da5e8f8bf20a59f3_--operator()_--_1_--dtor$10.c)
 *     _CQueryKnownGameList::GetGameEntryFromGameConfig_::_1_::dtor$0 @ 0x180046F8D (_CQueryKnownGameList--GetGameEntryFromGameConfig_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$0 @ 0x180046FB1 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<unsigned char [0]>::~unique_ptr<unsigned char [0]>(
        void **a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2, a2);
}
