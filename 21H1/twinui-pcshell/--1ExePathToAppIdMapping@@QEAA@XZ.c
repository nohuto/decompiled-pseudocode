/*
 * XREFs of ??1ExePathToAppIdMapping@@QEAA@XZ @ 0x18043880C
 * Callers:
 *     _Win32AppStateManager::Win32AppStateManager_::_1_::dtor$4 @ 0x1804386F1 (_Win32AppStateManager--Win32AppStateManager_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x18043757C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trai_ea_18043757C.c)
 */

void __fastcall ExePathToAppIdMapping::~ExePathToAppIdMapping(ExePathToAppIdMapping *this)
{
  void **v1; // rbx

  v1 = (void **)((char *)this + 8);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *>>>(
    (__int64)this + 8,
    (__int64)this + 8,
    *(__int64 **)(*((_QWORD *)this + 1) + 8LL));
  std::_Deallocate<16,0>(*v1, (const struct std::nothrow_t *)0x60);
}
