/*
 * XREFs of _std::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0___::_Insert_unverified_std::pair_DWMPointerMapping_const__CursorId__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_DWMPointerMapping_const__CursorId__________::_1_::catch$70 @ 0x18019B6A0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 *     ?erase@?$list@U?$pair@$$CBKUtagPOINTF@@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@2@@Z @ 0x180088604 (-erase@-$list@U-$pair@$$CBKUtagPOINTF@@@std@@V-$allocator@U-$pair@$$CBKUtagPOINTF@@@std@@@2@@std.c)
 */

void __fastcall __noreturn std::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0___::_Insert_unverified_std::pair_DWMPointerMapping_const__CursorId____std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_DWMPointerMapping_const__CursorId__________::_1_::catch_70(
        __int64 a1,
        __int64 a2)
{
  std::list<std::pair<unsigned long const,tagPOINTF>>::erase(
    *(_QWORD *)(a2 + 80) + 8LL,
    (_QWORD *)(a2 + 80),
    *(__int64 **)(a2 + 104));
  throw;
}
