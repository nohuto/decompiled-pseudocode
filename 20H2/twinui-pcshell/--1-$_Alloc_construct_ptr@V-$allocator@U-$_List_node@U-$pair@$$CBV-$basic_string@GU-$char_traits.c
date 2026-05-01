/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18021EA7C
 * Callers:
 *     _std::list_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_PenWorkspace::Discover::AppUsageData____std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_PenWorkspace::Discover::AppUsageData_______::_Insert_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____&_std::shared_ptr_PenWorkspace::Discover::AppUsageData__&__::_1_::dtor$0 @ 0x180104F8A (_std--list_std--pair_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allo.c)
 *     _std::list_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_PenWorkspace::Discover::AppUsageData____std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_PenWorkspace::Discover::AppUsageData_______::_Insert_std::piecewise_construct_t_const_&_std::tuple_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&__std::tuple_____::_1_::dtor$0 @ 0x18021DD8C (_std--list_std--pair_std--basic_string_unsigned_short_std--char_traits_unsigned_sho_ea_18021DD8C.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_DisplayRegionInfo_std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__DisplayRegionInfo____0___::emplace_unsigned_long_&_DisplayRegionInfo_&__::_1_::dtor$4 @ 0x1802E5AF2 (_std--_Tree_std--_Tmap_traits_unsigned_long_DisplayRegionInfo_std--less_unsigned_lo_ea_1802E5AF2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x40);
}
