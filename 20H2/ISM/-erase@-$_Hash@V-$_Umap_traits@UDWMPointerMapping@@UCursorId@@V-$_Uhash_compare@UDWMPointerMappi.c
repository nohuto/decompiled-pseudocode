/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@@Z @ 0x18019C384
 * Callers:
 *     _std::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0___::_Insert_unverified_std::pair_DWMPointerMapping_const__CursorId__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_DWMPointerMapping_const__CursorId__________::_1_::catch$69 @ 0x18004ED62 (_std--_Hash_std--_Umap_traits_DWMPointerMapping_CursorId_std--_Uhash_compare_DWMPoi_ea_18004ED62.c)
 *     _std::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0___::_Insert_unverified_std::pair_DWMPointerMapping_const__CursorId__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_DWMPointerMapping_const__CursorId__________::_1_::catch$69 @ 0x18019B1CC (_std--_Hash_std--_Umap_traits_DWMPointerMapping_CursorId_std--_Uhash_compare_DWMPoi_ea_18019B1CC.c)
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18019BF7C (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CBKUtagPOINTF@@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@2@@Z @ 0x1800880A4 (-erase@-$list@U-$pair@$$CBKUtagPOINTF@@@std@@V-$allocator@U-$pair@$$CBKUtagPOINTF@@@std@@@2@@std.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // r11
  __int64 appended; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 *v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax

  appended = std::_Fnv1a_append_bytes((__int64)a1, (const unsigned __int8 *const)(a3 + 20), 4uLL);
  v9 = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)(v5 + 16), v8);
  v11 = a1[3];
  v12 = 2 * (a1[6] & (appended ^ v9));
  if ( *(__int64 **)(v11 + 16 * (a1[6] & (appended ^ v9)) + 8) == v10 )
  {
    if ( *(__int64 **)(v11 + 16 * (a1[6] & (appended ^ v9))) == v10 )
    {
      *(_QWORD *)(v11 + 16 * (a1[6] & (appended ^ v9))) = a1[1];
      v11 = a1[3];
      v13 = a1[1];
    }
    else
    {
      v13 = v10[1];
    }
    *(_QWORD *)(v11 + 8 * v12 + 8) = v13;
  }
  else if ( *(__int64 **)(v11 + 16 * (a1[6] & (appended ^ v9))) == v10 )
  {
    *(_QWORD *)(v11 + 16 * (a1[6] & (appended ^ v9))) = *v10;
  }
  std::list<std::pair<unsigned long const,tagPOINTF>>::erase((__int64)(a1 + 1), a2, v10);
  return a2;
}
