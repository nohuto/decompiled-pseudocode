/*
 * XREFs of ??$emplace@AEAKUResultInfo@DragNDropProcessor@@@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUResultInfo@DragNDropProcessor@@@Z @ 0x1800F7728
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FA030 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??$_Insert@AEAKUResultInfo@DragNDropProcessor@@@?$list@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAK$$QEAUResultInfo@DragNDropProcessor@@@Z @ 0x1800F6734 (--$_Insert@AEAKUResultInfo@DragNDropProcessor@@@-$list@U-$pair@$$CBKUResultInfo@DragNDropProcess.c)
 *     ??$_Insert_unverified@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKUResultInfo@DragNDropProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@1@@Z @ 0x1800F6E30 (--$_Insert_unverified@U-$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@V-$_List_unchecked_iter.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::emplace<unsigned long &,DragNDropProcessor::ResultInfo>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 ***v4; // rbx

  v4 = (__int64 ***)(a1 + 8);
  std::list<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>::_Insert<unsigned long &,DragNDropProcessor::ResultInfo>(
    a1 + 8,
    **(_QWORD **)(a1 + 8),
    a3,
    a4);
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::_Insert_unverified<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>>>>(
    a1,
    a2,
    (const unsigned __int8 *)**v4 + 16,
    **v4);
  return a2;
}
