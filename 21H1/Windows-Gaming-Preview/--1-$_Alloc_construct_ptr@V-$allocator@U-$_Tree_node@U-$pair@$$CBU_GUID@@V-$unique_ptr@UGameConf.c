/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18003B7E0
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig_::_1_::dtor$6 @ 0x180046BD8 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_AttachGameModeCo_ea_180046BD8.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180046E0D (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--RuntimeClassInitialize.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x38);
}
