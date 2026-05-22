/*
 * XREFs of ??$emplace@AEAKUPointerCache@DragNDropProcessor@@@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUPointerCache@DragNDropProcessor@@@Z @ 0x1800F7AA0
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FA400 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??$_Insert@AEAKUPointerCache@DragNDropProcessor@@@?$list@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAK$$QEAUPointerCache@DragNDropProcessor@@@Z @ 0x1800F6A48 (--$_Insert@AEAKUPointerCache@DragNDropProcessor@@@-$list@U-$pair@$$CBKUPointerCache@DragNDropPro.c)
 *     ??$_Insert_unverified@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKUPointerCache@DragNDropProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@1@@Z @ 0x1800F706C (--$_Insert_unverified@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V-$_List_unchecked_it.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>,0>>::emplace<unsigned long &,DragNDropProcessor::PointerCache>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 ***v4; // rbx

  v4 = (__int64 ***)(a1 + 8);
  std::list<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>::_Insert<unsigned long &,DragNDropProcessor::PointerCache>(
    a1 + 8,
    **(_QWORD **)(a1 + 8),
    a3,
    a4);
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>,0>>::_Insert_unverified<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>>>>(
    a1,
    a2,
    (const unsigned __int8 *)**v4 + 16,
    **v4);
  return a2;
}
