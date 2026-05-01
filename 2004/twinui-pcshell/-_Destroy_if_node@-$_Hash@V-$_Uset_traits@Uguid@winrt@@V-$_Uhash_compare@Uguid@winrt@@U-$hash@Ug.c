/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800CCD20
 * Callers:
 *     _std::_Hash_std::_Uset_traits_winrt::guid_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_winrt::guid__0___::_Insert_unverified_winrt::guid_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_winrt::guid____std::_Iterator_base0____::_1_::catch$47 @ 0x1800C528B (_std--_Hash_std--_Uset_traits_winrt--guid_std--_Uhash_compare_winrt--guid_std--hash_winrt--guid_.c)
 * Callees:
 *     ?erase@?$list@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@2@@Z @ 0x1800CE314 (-erase@-$list@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_List_iterator@V-$_Lis.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<winrt::guid>::erase(a1 + 8, &v3, a2);
}
