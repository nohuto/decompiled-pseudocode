/*
 * XREFs of ?_Unchecked_erase@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@V32@0@Z @ 0x1801A1F2C
 * Callers:
 *     ??$_Assign_cast@AEAV?$shared_ptr@UHotKeyInfo@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18019D440 (--$_Assign_cast@AEAV-$shared_ptr@UHotKeyInfo@@@std@@V-$_List_unchecked_const_iterator@V-$_List_v.c)
 *     _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x18019F1F8 (_lambda_139f71076f5ab0ecef881a1ffc08c112_--operator().c)
 *     ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x18019F670 (-CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV-$list@V-$shared_p.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18019D84C (--$_Free_non_head@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-.c)
 *     ??_G?$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z @ 0x18019F588 (--_G-$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::list<std::shared_ptr<HotKeyInfo>>::_Unchecked_erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD **a3,
        _QWORD **a4)
{
  _QWORD **v6; // rdx
  _QWORD **v7; // rbx
  _QWORD **v9; // rsi

  v6 = (_QWORD **)*a1;
  v7 = a3;
  if ( a3 == *(_QWORD ***)*a1 && a4 == v6 )
  {
    std::_List_node<std::shared_ptr<HotKeyInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
      (__int64)a1,
      v6);
    *(_QWORD *)*a1 = *a1;
    *(_QWORD *)(*a1 + 8LL) = *a1;
    a1[1] = 0LL;
    *a2 = *a1;
  }
  else
  {
    while ( v7 != a4 )
    {
      v9 = (_QWORD **)*v7;
      *v7[1] = *v7;
      (*v7)[1] = v7[1];
      std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'((__int64)(v7 + 2));
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x20);
      --a1[1];
      v7 = v9;
    }
    *a2 = a4;
  }
  return a2;
}
