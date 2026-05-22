/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180069050
 * Callers:
 *     _std::list_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo_____::_Insert_tagMsgRoutingInfo_const_&_tagInputRoutingInfo_const_&__::_1_::dtor$0 @ 0x1800511CD (_std--list_std--pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__std--allocator_std--pair_tagM.c)
 *     _std::map_unsigned_int_std::function_void___cdecl(bool)__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::function_void___cdecl(bool)_______::_Try_emplace_unsigned_int_const_&__::_1_::dtor$18 @ 0x180051280 (_std--map_unsigned_int_std--function_void___cdecl(bool)__std--less_unsigned_int__std--allocator_.c)
 *     _std::_Tree_std::_Tmap_traits_DockInputIdentity_KeyboardDockInput_std::less_DockInputIdentity__std::allocator_std::pair_DockInputIdentity_const__KeyboardDockInput____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_DockInputIdentity_const_&__std::tuple_____::_1_::dtor$4 @ 0x180125E3B (_std--_Tree_std--_Tmap_traits_DockInputIdentity_KeyboardDockInput_std--less_DockInp_ea_180125E3B.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x68);
}
