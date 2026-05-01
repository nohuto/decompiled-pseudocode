/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@2@V32@@Z @ 0x1800CFA8C
 * Callers:
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Insert_unverified_unsigned___int64_const__std::_Not_a_node_tag__::_1_::catch$43 @ 0x1800C6718 (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_1800C6718.c)
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Insert_unverified_unsigned___int64_const_&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_unsigned___int64____std::_Iterator_base0____::_1_::catch$73 @ 0x1800C6F2B (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_1800C6F2B.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180073B14 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@2@@Z @ 0x1800CFE40 (-erase@-$list@_KV-$allocator@_K@std@@@std@@QEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *result; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

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
  v10 = *(_QWORD *)std::list<unsigned __int64>::erase(a1 + 1, &v12, v6);
  result = a2;
  *a2 = v10;
  return result;
}
