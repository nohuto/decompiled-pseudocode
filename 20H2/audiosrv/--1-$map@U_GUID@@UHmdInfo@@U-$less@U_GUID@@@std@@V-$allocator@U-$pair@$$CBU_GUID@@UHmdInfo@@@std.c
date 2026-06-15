/*
 * XREFs of ??1?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@QEAA@XZ @ 0x180105870
 * Callers:
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$5 @ 0x180105787 (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$5.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x180105490 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@-.c)
 */

void __fastcall std::map<_GUID,HmdInfo>::~map<_GUID,HmdInfo>(void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x48);
}
