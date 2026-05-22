/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800DE5A4
 * Callers:
 *     ?OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800E07E4 (-OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Window.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800DE3E8 (--$_Insert_unverified@AEAU-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@Spati.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD **a4)
{
  unsigned int ***v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax

  v7 = (unsigned int ***)(a1 + 8);
  v8 = **(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) == 0x555555555555555LL )
    std::_Xlength_error("list<T> too long");
  v9 = *(_QWORD **)(v8 + 8);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *((_OWORD *)v10 + 1) = **a4;
  v10[4] = 0LL;
  v10[5] = 0LL;
  *v10 = v8;
  v10[1] = v9;
  v7[1] = (unsigned int **)((char *)v7[1] + 1);
  *(_QWORD *)(v8 + 8) = v10;
  *v9 = v10;
  std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::_Insert_unverified<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>>>>(
    a1,
    a2,
    **v7 + 4,
    (_QWORD **)**v7);
  return a2;
}
