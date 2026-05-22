/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@KV?$array@G$0BE@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x18009A354
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::array_unsigned_short_20__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::array_unsigned_short_20______0___::_Insert_unverified_std::pair_unsigned_long_const__std::array_unsigned_short_20____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__std::array_unsigned_short_20____________::_1_::catch$69 @ 0x1800516EB (_std--_Hash_std--_Umap_traits_unsigned_long_std--array_unsigned_short_20__std--_Uhash_compare_un.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_std::array_unsigned_short_20__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__std::array_unsigned_short_20______0___::_Insert_unverified_std::pair_unsigned_long_const__std::array_unsigned_short_20____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__std::array_unsigned_short_20____________::_1_::catch$69 @ 0x18009A324 (_std--_Hash_std--_Umap_traits_unsigned_long_std--array_unsigned_short_20__std--_Uha_ea_18009A324.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@Z @ 0x18009ACC0 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V-$allocator@U-$pair@$$CBU.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::array<unsigned short,20>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::array<unsigned short,20>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::array<unsigned short,20>>>>>,void>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax

  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)(a3 + 16), 4uLL);
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
  std::list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::erase(a1 + 1, a2, v6);
  return a2;
}
