/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800098D0
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180004264 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@U.c)
 *     ?RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z @ 0x180013C50 (-RemoveInputSinkFromParentList@InputSiteHierarchyManager@@AEAAX_K0@Z.c)
 *     ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015650 (-UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rdx
  unsigned __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // r11
  _QWORD *i; // rcx
  _QWORD *v11; // rax

  v5 = a1[3];
  v6 = (_QWORD *)a1[1];
  v7 = 2
     * ((0x100000001B3LL
       * (a3[7] ^ (0x100000001B3LL
                 * (a3[6] ^ (0x100000001B3LL
                           * (a3[5] ^ (0x100000001B3LL
                                     * (a3[4] ^ (0x100000001B3LL
                                               * (a3[3] ^ (0x100000001B3LL
                                                         * (a3[2] ^ (0x100000001B3LL
                                                                   * (a3[1] ^ (0x100000001B3LL
                                                                             * (*a3 ^ 0xCBF29CE484222325uLL)))))))))))))))) & a1[6]);
  v8 = *(_QWORD **)(v5 + 8 * v7);
  v9 = v5 + 8 * v7;
  for ( i = v8; ; i = (_QWORD *)*i )
  {
    v11 = v8 == v6 ? v6 : **(_QWORD ***)(v9 + 8);
    if ( i == v11 )
      break;
    if ( i[2] == *(_QWORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = v6;
  return a2;
}
