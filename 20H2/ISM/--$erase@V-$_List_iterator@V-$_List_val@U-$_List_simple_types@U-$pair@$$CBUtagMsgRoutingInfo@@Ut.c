/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@V21@@Z @ 0x180102FD4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_tagInputRoutingInfo_std::_Uhash_compare_tagMsgRoutingInfo_std::hash_tagMsgRoutingInfo__std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo____0___::_Insert_unverified_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__________::_1_::catch$56 @ 0x18005111D (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_tagInputRoutingInfo_std--_Uhash_com_ea_18005111D.c)
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_tagInputRoutingInfo_std::_Uhash_compare_tagMsgRoutingInfo_std::hash_tagMsgRoutingInfo__std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo____0___::_Insert_unverified_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__________::_1_::catch$56 @ 0x180102FA4 (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_tagInputRoutingInfo_std--_Uhash_com_ea_180102FA4.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@@Z @ 0x1801036D0 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V-$allocator@U-$pair@$.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>,void>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax

  v5 = a1[6] & (*(unsigned int *)(a3 + 20) | ((unsigned __int64)*(unsigned int *)(a3 + 16) << 32));
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
  std::list<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>::erase(a1 + 1, a2);
  return a2;
}
