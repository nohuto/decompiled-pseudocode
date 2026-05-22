/*
 * XREFs of _std::_Hash_std::_Umap_traits_unsigned_char_KeyboardProcessor::TargetingInfo_std::_Uhash_compare_unsigned_char_std::hash_unsigned_char__std::equal_to_unsigned_char____std::allocator_std::pair_unsigned_char_const__KeyboardProcessor::TargetingInfo____0___::_Insert_unverified_std::pair_unsigned_char_const__KeyboardProcessor::TargetingInfo__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_char_const__KeyboardProcessor::TargetingInfo__________::_1_::catch$47 @ 0x1800478EA
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?_Make_iter@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@QEBA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@2@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180045324 (-_Make_iter@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_compare@KU-$.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V?$_Uhash_compare@EU?$hash@E@std@@U?$equal_to@E@2@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@1@V21@@Z @ 0x18004797C (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTargetingInfo@Keyboa.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_unsigned_char_KeyboardProcessor::TargetingInfo_std::_Uhash_compare_unsigned_char_std::hash_unsigned_char__std::equal_to_unsigned_char____std::allocator_std::pair_unsigned_char_const__KeyboardProcessor::TargetingInfo____0___::_Insert_unverified_std::pair_unsigned_char_const__KeyboardProcessor::TargetingInfo__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_char_const__KeyboardProcessor::TargetingInfo__________::_1_::catch_47(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *iter; // rax

  iter = std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Make_iter(
           a1,
           a2 + 12,
           a2[13]);
  std::_Hash<std::_Umap_traits<unsigned char,KeyboardProcessor::TargetingInfo,std::_Uhash_compare<unsigned char,std::hash<unsigned char>,std::equal_to<unsigned char>>,std::allocator<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>,void>(
    a2[10],
    a2 + 4,
    *iter);
  throw;
}
