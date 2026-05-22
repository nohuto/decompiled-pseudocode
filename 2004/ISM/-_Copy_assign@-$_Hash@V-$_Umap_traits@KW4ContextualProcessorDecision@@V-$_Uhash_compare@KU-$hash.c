/*
 * XREFs of ?_Copy_assign@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x18014D820
 * Callers:
 *     ??4ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAAAEAU01@AEBU01@@Z @ 0x18014B13C (--4ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x18014C494 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 *     ?OnDeferredContextualProcessorResponse@ContextualProcessorBuffer@@UEAAJPEAUIContextualProcessor@@AEAUContextualProcessorResponse@@@Z @ 0x18014C810 (-OnDeferredContextualProcessorResponse@ContextualProcessorBuffer@@UEAAJPEAUIContextualProcessor@.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@V?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@$0A@@std@@@std@@IEBA_KXZ @ 0x180045188 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@PEAUIInputTarget@@V-$unordered_set@KU-$hash@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KIV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800B324C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KIV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ??$_Assign_cast@AEAU?$pair@KW4ContextualProcessorDecision@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x180149C68 (--$_Assign_cast@AEAU-$pair@KW4ContextualProcessorDecision@@@std@@V-$_List_unchecked_const_iterat.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Copy_assign(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  _QWORD *result; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  v3 = (__int64)(a1 + 1);
  try
  {
    std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::_Assign_cast<std::pair<unsigned long,enum ContextualProcessorDecision> &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>,std::_Iterator_base0>>(
      v3,
      **(__int64 ***)(a2 + 8),
      *(__int64 **)(a2 + 8));
    v4 = std::_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>::_Desired_grow_bucket_count((__int64)a1);
    result = std::_Hash<std::_Umap_traits<unsigned long,unsigned int,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned int>>,0>>::_Forced_rehash(
               a1,
               v4);
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::clear(a1);
    throw;
  }
  return result;
}
