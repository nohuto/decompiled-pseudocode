/*
 * XREFs of ??$emplace@AEAKUTargetingInfo@ButtonProcessor@@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUTargetingInfo@ButtonProcessor@@@Z @ 0x180049CD0
 * Callers:
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180187B70 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Insert@AEAKUTargetingInfo@ButtonProcessor@@@?$list@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAK$$QEAUTargetingInfo@ButtonProcessor@@@Z @ 0x180049A58 (--$_Insert@AEAKUTargetingInfo@ButtonProcessor@@@-$list@U-$pair@$$CBKUTargetingInfo@ButtonProcess.c)
 *     ??$_Insert_unverified@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@1@@Z @ 0x180049B38 (--$_Insert_unverified@U-$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@V-$_List_unchecked_iter.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::emplace<unsigned long &,ButtonProcessor::TargetingInfo>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 **v4; // rbx

  v4 = (__int64 **)(a1 + 8);
  std::list<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>::_Insert<unsigned long &,ButtonProcessor::TargetingInfo>(
    a1 + 8,
    **(_QWORD **)(a1 + 8),
    a3,
    a4);
  std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::_Insert_unverified<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>>>>(
    a1,
    a2,
    (const unsigned __int8 *)(**v4 + 16),
    **v4);
  return a2;
}
