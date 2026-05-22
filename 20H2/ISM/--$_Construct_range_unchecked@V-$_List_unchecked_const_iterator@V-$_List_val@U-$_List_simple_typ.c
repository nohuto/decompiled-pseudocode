/*
 * XREFs of ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@0@Z @ 0x180180630
 * Callers:
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x180180E9C (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801804E0 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@.c)
 *     ??1?$_List_node_insert_op@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180180E5C (--1-$_List_node_insert_op@V-$allocator@U-$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@st.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::list<VirtualHotKeyTracker::KeyEventData>::_Construct_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *v10; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-48h]
  __int64 v12; // [rsp+40h] [rbp-40h]
  _QWORD v13[7]; // [rsp+48h] [rbp-38h] BYREF

  v10 = a1;
  v11 = v13;
  v4 = 0LL;
  v12 = 0LL;
  std::_List_node_insert_op<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
    (__int64)&v10,
    a2,
    a3);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
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
  return std::_List_node_insert_op<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::~_List_node_insert_op<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>(
           &v10,
           v6);
}
