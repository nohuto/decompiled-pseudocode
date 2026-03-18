/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEBVCResource@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEBVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180047F8C
 * Callers:
 *     ??$_Try_emplace@AEBQEBVCResource@@$$V@?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBQEBVCResource@@@Z @ 0x180047C78 (--$_Try_emplace@AEBQEBVCResource@@$$V@-$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@.c)
 * Callees:
 *     ??$_Insert_unverified@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@1@@Z @ 0x180047D20 (--$_Insert_unverified@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$_List_unchecke.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<CResource const * const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4)
{
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx

  v6 = *(_QWORD *)qword_180349418;
  if ( qword_180349420 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(v6 + 8);
  v8 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v9 = *a4;
  v10 = **a4;
  v8[3] = 0LL;
  v8[2] = v10;
  *v8 = v6;
  v8[1] = v7;
  ++qword_180349420;
  *(_QWORD *)(v6 + 8) = v8;
  *v7 = v8;
  std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Insert_unverified<std::pair<CResource const * const,CWeakResourceReference *>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource const * const,CWeakResourceReference *>>>>>(
    (unsigned __int64)v9,
    a2,
    (const unsigned __int8 *)(*(_QWORD *)qword_180349418 + 16LL),
    *(_QWORD *)qword_180349418);
  return a2;
}
