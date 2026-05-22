/*
 * XREFs of ??1?$_List_node_insert_op@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18019F2EC
 * Callers:
 *     ??$_Assign_cast@AEAV?$shared_ptr@UHotKeyInfo@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18019D8F0 (--$_Assign_cast@AEAV-$shared_ptr@UHotKeyInfo@@@std@@V-$_List_unchecked_const_iterator@V-$_List_v.c)
 *     _std::list_std::shared_ptr_HotKeyInfo__std::allocator_std::shared_ptr_HotKeyInfo_____::_Assign_cast_std::shared_ptr_HotKeyInfo__&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo______std::_Iterator_base0____::_1_::dtor$0 @ 0x18019D9CC (_std--list_std--shared_ptr_HotKeyInfo__std--allocator_std--shared_ptr_HotKeyInfo_____--_Assign_c.c)
 *     ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@0@Z @ 0x18019D9E0 (--$_Construct_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_Li_ea_18019D9E0.c)
 *     _std::list_std::shared_ptr_HotKeyInfo__std::allocator_std::shared_ptr_HotKeyInfo_____::_Construct_range_unchecked_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo______std::_Iterator_base0____::_1_::dtor$0 @ 0x18019DA8A (_std--list_std--shared_ptr_HotKeyInfo__std--allocator_std--shared_ptr_HotKeyInfo_____--_Construc.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z @ 0x18019FA38 (--_G-$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_List_node_insert_op<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>::~_List_node_insert_op<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
        __int64 a1)
{
  char *v1; // rdi
  char *v2; // rbx

  if ( *(_QWORD *)(a1 + 16) )
  {
    **(_QWORD **)(a1 + 8) = 0LL;
    v1 = *(char **)(a1 + 24);
    while ( v1 )
    {
      v2 = v1;
      v1 = *(char **)v1;
      std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'(v2 + 16);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x20);
    }
  }
}
