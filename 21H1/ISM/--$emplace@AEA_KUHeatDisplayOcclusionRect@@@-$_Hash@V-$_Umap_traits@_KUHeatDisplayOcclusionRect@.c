/*
 * XREFs of ??$emplace@AEA_KUHeatDisplayOcclusionRect@@@?$_Hash@V?$_Umap_traits@_KUHeatDisplayOcclusionRect@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAUHeatDisplayOcclusionRect@@@Z @ 0x18012BEF0
 * Callers:
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x18012C990 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ??$_Insert@AEA_KUHeatDisplayOcclusionRect@@@?$list@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEA_K$$QEAUHeatDisplayOcclusionRect@@@Z @ 0x18012B26C (--$_Insert@AEA_KUHeatDisplayOcclusionRect@@@-$list@U-$pair@$$CB_KUHeatDisplayOcclusionRect@@@std.c)
 *     ??$_Insert_unverified@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUHeatDisplayOcclusionRect@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CB_KUHeatDisplayOcclusionRect@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@1@@Z @ 0x18012B718 (--$_Insert_unverified@U-$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@V-$_List_unchecked_iterator.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,HeatDisplayOcclusionRect,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>,0>>::emplace<unsigned __int64 &,HeatDisplayOcclusionRect>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 ***v4; // rbx

  v4 = (__int64 ***)(a1 + 8);
  std::list<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>::_Insert<unsigned __int64 &,HeatDisplayOcclusionRect>(
    a1 + 8,
    **(_QWORD **)(a1 + 8),
    a3,
    a4);
  std::_Hash<std::_Umap_traits<unsigned __int64,HeatDisplayOcclusionRect,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>>>>(
    a1,
    a2,
    (const unsigned __int8 *)**v4 + 16,
    **v4);
  return a2;
}
