/*
 * XREFs of ??$?0V?$allocator@U?$_List_node@KPEAX@std@@@std@@@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$_List_node@KPEAX@std@@@1@@Z @ 0x1801497EC
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18014B210 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18014C404 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?OnDeferredContextualProcessorResponse@ContextualProcessorBuffer@@UEAAJPEAUIContextualProcessor@@AEAUContextualProcessorResponse@@@Z @ 0x18014C780 (-OnDeferredContextualProcessorResponse@ContextualProcessorBuffer@@UEAAJPEAUIContextualProcessor@.c)
 * Callees:
 *     ??$_Insert_unverified@KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@U_Iterator_base0@2@@std@@@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@$$QEAKV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x180097158 (--$_Insert_unverified@KV-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@K@st.c)
 *     ??$_Construct_n_copies_of_ty@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@1@@Z @ 0x1800AC8F8 (--$_Construct_n_copies_of_ty@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simp_ea_1800AC8F8.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBKW4ContextualProcessorState@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@2@@std@@AEAAXXZ @ 0x1800B2A1C (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBKW4ContextualProcessorState@@@std@@V-$allocator@U-.c)
 *     ??$_Insert@AEBK@?$list@KV?$allocator@K@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@U_Iterator_base0@2@@1@AEBK@Z @ 0x1800F6768 (--$_Insert@AEBK@-$list@KV-$allocator@K@std@@@std@@QEAAXV-$_List_unchecked_const_iterator@V-$_Lis.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 **v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 **v7; // r14
  __int64 *i; // rbx
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v5 = (__int64 **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  std::list<std::pair<unsigned long const,enum ContextualProcessorState>>::_Alloc_sentinel_and_proxy((_QWORD *)(a1 + 8));
  v11 = *v5;
  v6 = (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,tagRECT>>>>>::_Construct_n_copies_of_ty<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,tagRECT>>>>>(
    (__int64 **)(a1 + 24),
    v6,
    (__int64 *)&v11);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  v7 = *(__int64 ***)(a2 + 8);
  for ( i = *v7; i != (__int64 *)v7; i = (__int64 *)*i )
  {
    std::list<unsigned long>::_Insert<unsigned long const &>((__int64)v5, **v5, (_DWORD *)i + 4);
    std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Insert_unverified<unsigned long,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned long>>,std::_Iterator_base0>>(
      a1,
      (__int64)v10,
      (const unsigned __int8 *)(**v5 + 16),
      (__int64 *)**v5);
  }
  return a1;
}
