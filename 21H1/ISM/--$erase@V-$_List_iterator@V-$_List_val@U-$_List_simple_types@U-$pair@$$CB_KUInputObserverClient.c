/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800F4C1C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_CBaseInputObserverServer_12_::InputObserverClient_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__CBaseInputObserverServer_12_::InputObserverClient____0___::_Insert_unverified_std::pair_unsigned___int64_const__CBaseInputObserverServer_12_::InputObserverClient__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__CBaseInputObserverServer_12_::InputObserverClient__________::_1_::catch$55 @ 0x1800F4A6B (_std--_Hash_std--_Umap_traits_unsigned___int64_CBaseInputObserverServer_12_--InputO_ea_1800F4A6B.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@2@@Z @ 0x1800F556C (-erase@-$list@U-$pair@$$CB_KUInputObserverClient@-$CBaseInputObserverServer@$0M@@@@std@@V-$alloc.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<12>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>>>,void>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax

  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)(a3 + 16), 8uLL);
  v7 = a1[3];
  v8 = 2 * (a1[6] & appended);
  if ( *(_QWORD **)(v7 + 16 * (a1[6] & appended) + 8) == v6 )
  {
    if ( *(_QWORD **)(v7 + 16 * (a1[6] & appended)) == v6 )
    {
      *(_QWORD *)(v7 + 16 * (a1[6] & appended)) = a1[1];
      v7 = a1[3];
      v9 = a1[1];
    }
    else
    {
      v9 = v6[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 16 * (a1[6] & appended)) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & appended)) = *v6;
  }
  std::list<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>::erase(a1 + 1, a2, v6);
  return a2;
}
