/*
 * XREFs of ??$_Assign_cast@AEAUKeyEventData@VirtualHotKeyTracker@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x180180AB4
 * Callers:
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801813EC (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x180180A30 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@.c)
 *     ??1?$_List_node_insert_op@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801813AC (--1-$_List_node_insert_op@V-$allocator@U-$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@st.c)
 *     ?_Unchecked_erase@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@2@V32@0@Z @ 0x180181A68 (-_Unchecked_erase@-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allocator@UKeyEventData@VirtualH.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<VirtualHotKeyTracker::KeyEventData>::_Assign_cast<VirtualHotKeyTracker::KeyEventData &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
        __int64 ***a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 **v5; // r9
  __int64 **v6; // r8
  __int128 v7; // xmm1
  __int64 **v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 ***v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-40h]
  _QWORD v16[7]; // [rsp+38h] [rbp-38h] BYREF
  char v17; // [rsp+80h] [rbp+10h] BYREF

  v5 = *a1;
  v6 = (__int64 **)**a1;
  while ( v6 != v5 )
  {
    if ( (__int64 *)a2 == a3 )
      return std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(a1, &v17);
    v7 = *(_OWORD *)(a2 + 32);
    *((_OWORD *)v6 + 1) = *(_OWORD *)(a2 + 16);
    *((_OWORD *)v6 + 2) = v7;
    v6 = (__int64 **)*v6;
    a2 = *(_QWORD *)a2;
  }
  v13 = a1;
  v14 = v16;
  v15 = 0LL;
  std::_List_node_insert_op<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
    (__int64)&v13,
    (__int64 *)a2,
    a3);
  v9 = *a1;
  v10 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    a1[1] = (__int64 **)((char *)a1[1] + v10);
    *v14 = (__int64)v9;
    v11 = v9[1];
    v9[1] = v14;
    v12 = v16[0];
    *v11 = v16[0];
    *(_QWORD *)(v12 + 8) = v11;
    v14 = v16;
  }
  return std::_List_node_insert_op<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::~_List_node_insert_op<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>(
           &v13,
           v9);
}
