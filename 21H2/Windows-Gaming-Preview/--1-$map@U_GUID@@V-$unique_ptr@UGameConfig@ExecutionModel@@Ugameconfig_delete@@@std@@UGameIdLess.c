/*
 * XREFs of ??1?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x18001DF28
 * Callers:
 *     _lambda_95a85cc3153b2a32da5e8f8bf20a59f3_::operator() @ 0x18001D938 (_lambda_95a85cc3153b2a32da5e8f8bf20a59f3_--operator().c)
 *     __lambda_95a85cc3153b2a32da5e8f8bf20a59f3_::operator()_::_1_::dtor$7 @ 0x180046BF6 (__lambda_95a85cc3153b2a32da5e8f8bf20a59f3_--operator()_--_1_--dtor$7.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@@Z @ 0x18001F1F8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$unique_ptr@UGameConfig@Executio.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180044AD8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::map<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>::~map<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>(
        _QWORD **a1)
{
  _QWORD *v2; // rcx
  __int64 *v3; // rbx
  const struct std::nothrow_t *v4; // rdx
  _QWORD *v5; // rsi
  void *v6; // rcx

  v2 = *a1;
  v3 = (__int64 *)v2[1];
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *>>>(
        a1,
        a1,
        v3[2]);
      v5 = v3;
      v3 = (__int64 *)*v3;
      v6 = (void *)v5[6];
      if ( v6 )
        operator delete(v6, v4);
      operator delete(v5, (const struct std::nothrow_t *)0x38);
    }
    while ( !*((_BYTE *)v3 + 25) );
    v2 = *a1;
  }
  operator delete(v2, (const struct std::nothrow_t *)0x38);
}
