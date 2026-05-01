/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800C9184
 * Callers:
 *     _std::list_std::pair_unsigned___int64_const__winrt::guid__std::allocator_std::pair_unsigned___int64_const__winrt::guid_____::_Insert_unsigned___int64_&_winrt::guid_const_&__::_1_::dtor$0 @ 0x1800C62B0 (_std--list_std--pair_unsigned___int64_const__winrt--guid__std--allocator_std--pair_unsigned___in.c)
 *     ??$_Insert@AEBUguid@winrt@@AEA_K@?$list@U?$pair@$$CBUguid@winrt@@_K@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUguid@winrt@@AEA_K@Z @ 0x1800C6364 (--$_Insert@AEBUguid@winrt@@AEA_K@-$list@U-$pair@$$CBUguid@winrt@@_K@std@@V-$allocator@U-$pair@$$.c)
 *     _std::list_std::pair_winrt::guid_const__unsigned___int64__std::allocator_std::pair_winrt::guid_const__unsigned___int64_____::_Insert_winrt::guid_const_&_unsigned___int64__::_1_::dtor$0 @ 0x1800C6414 (_std--list_std--pair_winrt--guid_const__unsigned___int64__std--allocator_std--pair_winrt--guid_c.c)
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUguid@winrt@@@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBUguid@winrt@@_K@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUguid@winrt@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C6428 (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUguid@winrt@@@2@V-$tuple@$$V@2@@-$list@U-$.c)
 *     _std::list_std::pair_winrt::guid_const__unsigned___int64__std::allocator_std::pair_winrt::guid_const__unsigned___int64_____::_Insert_std::piecewise_construct_t_const_&_std::tuple_winrt::guid_const_&__std::tuple_____::_1_::dtor$0 @ 0x1800C64CC (_std--list_std--pair_winrt--guid_const__unsigned___int64__std--allocator_std--pair__ea_1800C64CC.c)
 *     _std::list_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow____std::allocator_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow_______::_Insert_winrt::guid_winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow__&__::_1_::dtor$0 @ 0x1800D1F30 (_std--list_std--pair_winrt--guid_const__winrt--com_ptr_winrt--Windows--Internal--Shell--implemen.c)
 *     _std::list_std::pair_winrt::guid_const__winrt::Windows::Internal::UI::Shell::WindowTabView__std::allocator_std::pair_winrt::guid_const__winrt::Windows::Internal::UI::Shell::WindowTabView_____::_Insert_winrt::guid_winrt::Windows::Internal::UI::Shell::WindowTabView_const_&__::_1_::dtor$0 @ 0x1800D1FE9 (_std--list_std--pair_winrt--guid_const__winrt--Windows--Internal--UI--Shell--WindowTabView__std-.c)
 *     _ViewGroupManager::CreateViewGroup_::_1_::dtor$9 @ 0x18028B419 (_ViewGroupManager--CreateViewGroup_--_1_--dtor$9.c)
 *     _ViewGroup::AddView_::_1_::dtor$7 @ 0x180296113 (_ViewGroup--AddView_--_1_--dtor$7.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_Windows::Foundation::Size_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__Windows::Foundation::Size____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_unsigned_int_const_&__std::tuple_____::_1_::dtor$4 @ 0x180367359 (_std--_Tree_std--_Tmap_traits_unsigned_int_Windows--Foundation--Size_std--less_unsi_ea_180367359.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x28);
}
