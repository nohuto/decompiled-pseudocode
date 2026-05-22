/*
 * XREFs of ??1?$_List_node_insert_op@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180180EEC
 * Callers:
 *     ??$_Assign_cast@AEAUKeyEventData@VirtualHotKeyTracker@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801805F4 (--$_Assign_cast@AEAUKeyEventData@VirtualHotKeyTracker@@V-$_List_unchecked_const_iterator@V-$_Lis.c)
 *     _std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData___::_Assign_cast_VirtualHotKeyTracker::KeyEventData_&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData____std::_Iterator_base0____::_1_::dtor$0 @ 0x1801806AC (_std--list_VirtualHotKeyTracker--KeyEventData_std--allocator_VirtualHotKeyTracker--KeyEventData_.c)
 *     ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@0@Z @ 0x1801806C0 (--$_Construct_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_typ.c)
 *     _std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData___::_Construct_range_unchecked_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData____std::_Iterator_base0____::_1_::dtor$0 @ 0x180180770 (_std--list_VirtualHotKeyTracker--KeyEventData_std--allocator_VirtualHotKeyTracker--_ea_180180770.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_insert_op<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::~_List_node_insert_op<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>(
        __int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    **(_QWORD **)(a1 + 8) = 0LL;
    v1 = *(_QWORD **)(a1 + 24);
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x30);
    }
  }
}
