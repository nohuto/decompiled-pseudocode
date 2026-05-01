/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18008C650
 * Callers:
 *     _std::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____enum_JavaOption_std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__enum_JavaOption_____::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____enum_JavaOption_std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__enum_JavaOption______::_1_::dtor$0 @ 0x1800BE599 (_std--map_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsig.c)
 *     _GetJavaOption_::_2_::_dynamic_atexit_destructor_for__javaOptions__ @ 0x1801064F0 (_GetJavaOption_--_2_--_dynamic_atexit_destructor_for__javaOptions__.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@PEAX@1@@Z @ 0x1800BD1B4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$.c)
 */

void std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>()
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>,void *>>>(
    &qword_1805CD4E8,
    &qword_1805CD4E8,
    *(_QWORD *)(qword_1805CD4E8 + 8));
  std::_Deallocate<16,0>((void *)qword_1805CD4E8, (const struct std::nothrow_t *)0x48);
}
