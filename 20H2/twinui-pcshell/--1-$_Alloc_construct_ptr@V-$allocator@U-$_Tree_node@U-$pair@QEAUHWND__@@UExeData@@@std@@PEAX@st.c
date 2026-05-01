/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18045BD74
 * Callers:
 *     _std::_Tree_std::_Tmap_traits_HWND_____ExeData_std::less_HWND______std::allocator_std::pair_HWND_____const_ExeData____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple_HWND_____const_&__std::tuple_unsigned_int_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&____::_1_::dtor$4 @ 0x18045BA0C (_std--_Tree_std--_Tmap_traits_HWND_____ExeData_std--less_HWND______std--allocator_s_ea_18045BA0C.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x70);
}
