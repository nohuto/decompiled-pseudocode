/*
 * XREFs of ??$_Try_emplace@AEBQEBVCResource@@$$V@?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBQEBVCResource@@@Z @ 0x18005BD24
 * Callers:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18007024C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x180070334 (--0CWeakResourceReference@@AEAA@PEAVCResource@@@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800ABB58 (--1CResource@@MEAA@XZ.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x180030D3C (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEBVCResource@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEBVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18005C038 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEBVCResource@@@2@V-$tuple@$$V@2@@-$_Hash@.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BF834 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall std::unordered_map<CResource const *,CWeakResourceReference *>::_Try_emplace<CResource const * const &,>(
        unsigned __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r10
  _QWORD *v8; // r11
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = (_QWORD *)a1;
  v4 = xmmword_180348430 & std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  while ( 1 )
  {
    v5 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
           (__int64)&CWeakResourceReference::s_weakReferenceMap,
           &v10,
           v4);
    if ( v7 == *v5 )
      break;
    if ( *(_QWORD *)(v7 + 16) == *v8 )
      goto LABEL_4;
  }
  v7 = qword_180348408;
LABEL_4:
  if ( v7 == qword_180348408 )
  {
    v10 = v8;
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<CResource const * const &>,std::tuple<>>(
      qword_180348408,
      a2,
      v6,
      &v10);
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
