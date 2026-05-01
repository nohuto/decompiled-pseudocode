/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@@Z @ 0x1800CCCD8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_winrt::guid_unsigned___int64_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_std::pair_winrt::guid_const__unsigned___int64____0___::_Insert_unverified_std::pair_winrt::guid_const__unsigned___int64__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_winrt::guid_const__unsigned___int64__________::_1_::catch$47 @ 0x1800C4DB3 (_std--_Hash_std--_Umap_traits_winrt--guid_unsigned___int64_std--_Uhash_compare_winrt--guid_std--.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_winrt::guid_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::guid____0___::_Insert_unverified_std::pair_unsigned___int64_const__winrt::guid__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned___int64_const__winrt::guid__________::_1_::catch$48 @ 0x1800C50EB (_std--_Hash_std--_Umap_traits_unsigned___int64_winrt--guid_std--_Uhash_compare_unsigned___int64_.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CB_KUguid@winrt@@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@2@@Z @ 0x1800CE280 (-erase@-$list@U-$pair@$$CB_KUguid@winrt@@@std@@V-$allocator@U-$pair@$$CB_KUguid@winrt@@@std@@@2@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::pair<unsigned __int64 const,winrt::guid>>::erase(a1 + 8, &v3, a2);
}
