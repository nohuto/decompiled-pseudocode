/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@V21@@Z @ 0x18006868C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__unsigned___int64____0___::_Insert_unverified_std::pair_unsigned___int64_const__unsigned___int64__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__unsigned___int64__________::_1_::catch$69 @ 0x18004D586 (_std--_Hash_std--_Umap_traits_unsigned___int64_unsigned___int64_std--_Uhash_compare_unsigned___i.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__unsigned___int64____0___::_Insert_unverified_std::pair_unsigned___int64_const__unsigned___int64__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__unsigned___int64__________::_1_::catch$77 @ 0x18004D950 (_std--_Hash_std--_Umap_traits_unsigned___int64_unsigned___int64_std--_Uhash_compare_ea_18004D950.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@@Z @ 0x180013D18 (-erase@-$list@U-$pair@$$CB_K_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@std@@QEAA-AV-$_List_i.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>>,void>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 appended; // rax
  __int64 *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax

  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)(a3 + 16), 8uLL);
  v7 = a1[3];
  v8 = 2 * (a1[6] & appended);
  if ( *(__int64 **)(v7 + 16 * (a1[6] & appended) + 8) == v6 )
  {
    if ( *(__int64 **)(v7 + 16 * (a1[6] & appended)) == v6 )
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
  else if ( *(__int64 **)(v7 + 16 * (a1[6] & appended)) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & appended)) = *v6;
  }
  std::list<std::pair<unsigned __int64 const,unsigned __int64>>::erase((__int64)(a1 + 1), a2, v6);
  return a2;
}
