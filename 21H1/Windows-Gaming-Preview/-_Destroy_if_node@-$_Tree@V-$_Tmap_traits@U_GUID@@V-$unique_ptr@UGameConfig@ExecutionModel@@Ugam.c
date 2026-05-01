/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@Z @ 0x18003B4A4
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@1@1@Z @ 0x18003B4D4 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delet.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__Windows::Gaming::Preview::GamesEnumeration::GameIdLess_std::allocator_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete______0___::_Insert_nohint_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete____&_std::_Tree_node_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete____void_______::_1_::catch$1 @ 0x180046E55 (_std--_Tree_std--_Tmap_traits__GUID_std--unique_ptr_ExecutionModel--GameConfig_gameconfig_delete.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Destroy_if_node(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)a2 + 6);
  if ( v2 )
    operator delete(v2, a2);
  operator delete(a2, (const struct std::nothrow_t *)0x38);
}
