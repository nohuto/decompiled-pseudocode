/*
 * XREFs of ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x18019FB20
 * Callers:
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801A1A88 (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801A1EE0 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 * Callees:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___ @ 0x18019EE0C (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKey.c)
 *     ?_Unchecked_erase@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@V32@0@Z @ 0x1801A23DC (-_Unchecked_erase@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo.c)
 */

__int64 __fastcall HotKeyProcessor::CleanupClientHotKeys(__int64 a1, __int64 a2, _QWORD **a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF
  char v12; // [rsp+80h] [rbp+30h] BYREF

  v11 = a2;
  v10 = a1;
  *a4 = 0;
  v4 = *a3;
  v8[0] = &v11;
  v8[1] = a4;
  v9[0] = &v11;
  v9[1] = a4;
  v9[2] = v8;
  v6 = std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___(
         &v10,
         (_QWORD *)*v4,
         v4,
         (__int64)v9);
  return std::list<std::shared_ptr<HotKeyInfo>>::_Unchecked_erase(a3, &v12, *v6, v4);
}
