/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800DE74C
 * Callers:
 *     _std::_Hash_std::_Umap_traits__GUID_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject__std::_Uhash_compare__GUID_Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash_std::equal_to__GUID____std::allocator_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject______0___::_Insert_unverified_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair__GUID_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject____________::_1_::catch$56 @ 0x1800DE573 (_std--_Hash_std--_Umap_traits__GUID_std--shared_ptr_Windows--Internal--SpatialInter_ea_1800DE573.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800E2860 (-erase@-$list@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteractionSourceObject@SpatialInteracti.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>>>,void>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rax

  v5 = a1[6] & (*(unsigned int *)(a3 + 16) ^ (*(unsigned __int16 *)(a3 + 22) | ((unsigned __int64)*(unsigned __int16 *)(a3 + 20) << 16)) ^ (*(unsigned __int8 *)(a3 + 31) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 26) << 24)));
  v6 = a1[3];
  v7 = 2 * v5;
  if ( *(_QWORD *)(v6 + 8 * v7 + 8) == a3 )
  {
    if ( *(_QWORD *)(v6 + 8 * v7) == a3 )
    {
      *(_QWORD *)(v6 + 8 * v7) = a1[1];
      v6 = a1[3];
      v8 = a1[1];
    }
    else
    {
      v8 = *(_QWORD *)(a3 + 8);
    }
    *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
  }
  else if ( *(_QWORD *)(v6 + 8 * v7) == a3 )
  {
    *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)a3;
  }
  std::list<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>::erase(
    a1 + 1,
    a2,
    a3);
  return a2;
}
