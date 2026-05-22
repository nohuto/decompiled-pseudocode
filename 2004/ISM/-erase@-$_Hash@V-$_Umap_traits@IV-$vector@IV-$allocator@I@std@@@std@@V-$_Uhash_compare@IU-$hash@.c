/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@IV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800B3BA0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_std::vector_unsigned_int_std::allocator_unsigned_int____std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::vector_unsigned_int_std::allocator_unsigned_int________0___::_Insert_unverified_std::pair_unsigned_int_const__std::vector_unsigned_int_std::allocator_unsigned_int______&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__std::vector_unsigned_int_std::allocator_unsigned_int______________::_1_::catch$55 @ 0x1800AD0D6 (_std--_Hash_std--_Umap_traits_unsigned_int_std--vector_unsigned_int_std--allocator__ea_1800AD0D6.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_std::vector_unsigned_int_std::allocator_unsigned_int____std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__std::vector_unsigned_int_std::allocator_unsigned_int________0___::_Insert_unverified_std::pair_unsigned_int_const__std::vector_unsigned_int_std::allocator_unsigned_int______std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__std::vector_unsigned_int_std::allocator_unsigned_int______________::_1_::catch$55 @ 0x1800ADAF4 (_std--_Hash_std--_Umap_traits_unsigned_int_std--vector_unsigned_int_std--allocator__ea_1800ADAF4.c)
 *     ?UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z @ 0x1800B28D4 (-UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800B3DF8 (-erase@-$list@U-$pair@$$CBIV-$vector@IV-$allocator@I@std@@@std@@@std@@V-$allocator@U-$pair@$$CBI.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>::erase(
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
  std::list<std::pair<unsigned int const,std::vector<unsigned int>>>::erase(a1 + 1, a2, v6);
  return a2;
}
