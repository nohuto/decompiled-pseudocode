/*
 * XREFs of ?_Destroy_if_node@?$_Hash@V?$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V?$_Uhash_compare@EU?$hash@E@std@@U?$equal_to@E@2@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180047E34
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_char_KeyboardProcessor::TargetingInfo_std::_Uhash_compare_unsigned_char_std::hash_unsigned_char__std::equal_to_unsigned_char____std::allocator_std::pair_unsigned_char_const__KeyboardProcessor::TargetingInfo____0___::_Insert_unverified_std::pair_unsigned_char_const__KeyboardProcessor::TargetingInfo__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_char_const__KeyboardProcessor::TargetingInfo__________::_1_::catch$48 @ 0x180047916 (_std--_Hash_std--_Umap_traits_unsigned_char_KeyboardProcessor--TargetingInfo_std--_Uhash_compare.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ButtonProcessor::TargetingInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo____0___::_Insert_unverified_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__ButtonProcessor::TargetingInfo__________::_1_::catch$48 @ 0x180049CC2 (_std--_Hash_std--_Umap_traits_unsigned_long_ButtonProcessor--TargetingInfo_std--_Uh_ea_180049CC2.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180047F58 (-erase@-$list@U-$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@V-$allocator@U-$pair@$$CBEUTa.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned char,KeyboardProcessor::TargetingInfo,std::_Uhash_compare<unsigned char,std::hash<unsigned char>,std::equal_to<unsigned char>>,std::allocator<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 a2)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>::erase(a1 + 8, &v3, a2);
}
