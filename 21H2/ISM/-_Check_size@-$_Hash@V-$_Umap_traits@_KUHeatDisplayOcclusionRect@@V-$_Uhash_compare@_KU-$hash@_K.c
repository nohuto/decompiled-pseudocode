/*
 * XREFs of ?_Check_size@?$_Hash@V?$_Umap_traits@_KUHeatDisplayOcclusionRect@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18012D854
 * Callers:
 *     ??$_Insert_unverified@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUHeatDisplayOcclusionRect@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CB_KUHeatDisplayOcclusionRect@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@1@@Z @ 0x18012B6B8 (--$_Insert_unverified@U-$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@V-$_List_unchecked_iterator.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@V?$_Uhash_compare@PEAUIInputTarget@@U?$hash@PEAUIInputTarget@@@std@@U?$equal_to@PEAUIInputTarget@@@3@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@$0A@@std@@@std@@IEBA_KXZ @ 0x180045FC8 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@PEAUIInputTarget@@V-$unordered_set@KU-$hash@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUHeatDisplayOcclusionRect@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18012D9E0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KUHeatDisplayOcclusionRect@@V-$_Uhash_compare@_KU-$hash.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,HeatDisplayOcclusionRect,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>,0>>::_Check_size(
        __int64 a1)
{
  __int64 v1; // rdx
  float v3; // xmm0_4
  __int64 v4; // rax
  __int64 v5; // rcx
  float v6; // xmm1_4
  unsigned __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 < 0 )
  {
    v4 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
    v3 = (float)(int)v4 + (float)(int)v4;
  }
  else
  {
    v3 = (float)(int)v1;
  }
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 < 0 )
    v6 = (float)(v5 & 1 | (unsigned int)((unsigned __int64)v5 >> 1))
       + (float)(v5 & 1 | (unsigned int)((unsigned __int64)v5 >> 1));
  else
    v6 = (float)(int)v5;
  if ( (float)(v3 / v6) > *(float *)a1 )
  {
    v7 = std::_Hash<std::_Umap_traits<IInputTarget *,std::unordered_set<unsigned long>,std::_Uhash_compare<IInputTarget *,std::hash<IInputTarget *>,std::equal_to<IInputTarget *>>,std::allocator<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned __int64,HeatDisplayOcclusionRect,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>,0>>::_Forced_rehash(
      a1,
      v7);
  }
}
