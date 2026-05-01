/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800CCD44
 * Callers:
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Insert_unverified_unsigned___int64_const_&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_unsigned___int64____std::_Iterator_base0____::_1_::catch$74 @ 0x1800C5427 (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_ea_1800C5427.c)
 * Callees:
 *     ?erase@?$list@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@2@@Z @ 0x1800CE360 (-erase@-$list@_KV-$allocator@_K@std@@@std@@QEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<unsigned __int64>::erase(a1 + 8, &v3, a2);
}
