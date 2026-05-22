/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@PEAX@2@@Z @ 0x1801671E8
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@1@Z @ 0x18015244C (--$_Insert_at@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@V-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VW.c)
 *     _std::_Tree_std::_Tmap_traits_SPATIAL_NODE_ID_std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef____Windows::Internal::Holographic::SpatialNodeIdComp_std::allocator_std::pair_SPATIAL_NODE_ID_const__std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef________0___::_Insert_nohint_std::pair_SPATIAL_NODE_ID_const__std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef______&_std::_Tree_node_std::pair_SPATIAL_NODE_ID_const__std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef______void_______::_1_::catch$24 @ 0x180154A64 (_std--_Tree_std--_Tmap_traits_SPATIAL_NODE_ID_std--vector_Microsoft--WRL--WeakRef_std--allocator.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18001AE84 (--$_Destroy_range@V-$allocator@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Int.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::vector<Microsoft::WRL::WeakRef>,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,std::vector<Microsoft::WRL::WeakRef>>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  __int64 *v2; // rdi

  v2 = *(__int64 **)(a2 + 48);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
      v2,
      *(__int64 **)(a2 + 56));
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a2 + 64) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  std::_Deallocate<16,0>((void *)a2, (const struct std::nothrow_t *)0x48);
}
