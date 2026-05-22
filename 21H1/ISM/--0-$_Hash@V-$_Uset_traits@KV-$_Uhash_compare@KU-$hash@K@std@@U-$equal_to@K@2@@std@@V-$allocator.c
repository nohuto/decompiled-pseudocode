/*
 * XREFs of ??0?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@K@1@@Z @ 0x1800AE6AC
 * Callers:
 *     ??0?$unordered_map@KW4ContextualProcessorState@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@@std@@QEAA@XZ @ 0x1800AE744 (--0-$unordered_map@KW4ContextualProcessorState@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$p.c)
 * Callees:
 *     ??$_Construct_n_copies_of_ty@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@1@@Z @ 0x1800ACE58 (--$_Construct_n_copies_of_ty@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simp_ea_1800ACE58.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBKW4ContextualProcessorState@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@2@@std@@AEAAXXZ @ 0x1800B2F7C (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBKW4ContextualProcessorState@@@std@@V-$allocator@U-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  *(_DWORD *)a1 = *a2;
  v4 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  std::list<std::pair<unsigned long const,enum ContextualProcessorState>>::_Alloc_sentinel_and_proxy(a1 + 8);
  v6 = *v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,tagRECT>>>>>::_Construct_n_copies_of_ty<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,tagRECT>>>>>(
    (__int64 **)(a1 + 24),
    0x10uLL,
    &v6);
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  return a1;
}
