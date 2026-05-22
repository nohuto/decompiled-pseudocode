/*
 * XREFs of ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@0@Z @ 0x18019D9E0
 * Callers:
 *     ??0?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18019EF9C (--0-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@@std@@@2@@std.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18019D844 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List__ea_18019D844.c)
 *     ??1?$_List_node_insert_op@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18019F2EC (--1-$_List_node_insert_op@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::list<std::shared_ptr<HotKeyInfo>>::_Construct_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *v10; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-30h]
  _QWORD v13[5]; // [rsp+48h] [rbp-28h] BYREF

  v10 = a1;
  v11 = v13;
  v4 = 0LL;
  v12 = 0LL;
  std::_List_node_insert_op<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>>(
    (__int64 *)&v10,
    a2,
    a3);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v7 = v5;
  if ( v12 )
  {
    *v5 = v13[0];
    v5[1] = v11;
    *(_QWORD *)(v13[0] + 8LL) = v5;
    *v11 = v5;
    v8 = v12;
    v12 = 0LL;
    v6 = v13;
    v11 = v13;
    v4 = v8;
  }
  else
  {
    *v5 = v5;
    v5[1] = v5;
  }
  a1[1] = v4;
  *a1 = v7;
  return std::_List_node_insert_op<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>::~_List_node_insert_op<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
           &v10,
           v6);
}
