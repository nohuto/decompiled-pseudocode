/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@1@V21@@Z @ 0x1803674A8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_bool_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__bool____0___::_Insert_unverified_std::pair_unsigned_int_const__bool__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__bool__________::_1_::catch$55 @ 0x180366EA6 (_std--_Hash_std--_Umap_traits_unsigned_int_bool_std--_Uhash_compare_unsigned_int_st_ea_180366EA6.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180073B14 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@2@@Z @ 0x1800CFE40 (-erase@-$list@_KV-$allocator@_K@std@@@std@@QEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,bool>>>>,void>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 appended; // rax
  __int64 *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax

  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)(a3 + 16), 4uLL);
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
  std::list<unsigned __int64>::erase((__int64)(a1 + 1), a2, v6);
  return a2;
}
