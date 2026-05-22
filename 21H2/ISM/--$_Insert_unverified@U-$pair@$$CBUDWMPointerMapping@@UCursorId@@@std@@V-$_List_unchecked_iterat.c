/*
 * XREFs of ??$_Insert_unverified@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUDWMPointerMapping@@UCursorId@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@1@@Z @ 0x180025DE4
 * Callers:
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180025D20 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180025EC8 (-_Check_size@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPointe.c)
 *     ?erase@?$list@U?$pair@$$CBKUtagPOINTF@@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@2@@Z @ 0x1800884FC (-erase@-$list@U-$pair@$$CBKUtagPOINTF@@@std@@V-$allocator@U-$pair@$$CBKUtagPOINTF@@@std@@@2@@std.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Insert_unverified<std::pair<DWMPointerMapping const,CursorId>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<DWMPointerMapping const,CursorId>>>>>(
        _QWORD *a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 appended; // rax
  __int64 v11; // r11
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 **v22; // r8
  __int64 **v23; // rax
  __int64 *v24; // rcx
  char v25; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v26; // [rsp+68h] [rbp+20h]

  v26 = a4;
  std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  appended = std::_Fnv1a_append_bytes(v8, a3 + 4, v9);
  v12 = a1[6] & (v11 ^ appended);
  v13 = 2 * v12;
  v14 = a1[3];
  v15 = a1[1];
  v16 = *(_QWORD *)(v14 + 16 * v12);
  if ( v15 != v16 )
  {
    v15 = **(_QWORD **)(v14 + 16 * v12 + 8);
    while ( v15 != v16 )
    {
      v15 = *(_QWORD *)(v15 + 8);
      if ( *(_DWORD *)a3 == *(_DWORD *)(v15 + 16) && *((_DWORD *)a3 + 1) == *(_DWORD *)(v15 + 20) )
      {
        std::list<std::pair<unsigned long const,tagPOINTF>>::erase(a1 + 1, &v25, a4);
        *(_QWORD *)a2 = v15;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v17 = *a4;
  if ( v15 != *a4 )
  {
    *(_QWORD *)a4[1] = v17;
    **(_QWORD **)(v17 + 8) = v15;
    **(_QWORD **)(v15 + 8) = a4;
    v18 = *(_QWORD *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = *(_QWORD *)(v17 + 8);
    *(_QWORD *)(v17 + 8) = a4[1];
    a4[1] = v18;
  }
  v19 = a1[3];
  v20 = *(_QWORD *)(v19 + 16 * v12);
  if ( v20 == a1[1] )
  {
    *(_QWORD *)(v19 + 16 * v12) = a4;
    *(_QWORD *)(a1[3] + 16 * v12 + 8) = a4;
  }
  else
  {
    v22 = (__int64 **)(v19 + 16 * v12);
    if ( v20 == v15 )
    {
      *v22 = a4;
    }
    else
    {
      v23 = (__int64 **)v22[1];
      v24 = *v23;
      v22[1] = *v23;
      if ( v24 != a4 )
        *(_QWORD *)(a1[3] + 8 * v13 + 8) = *(_QWORD *)(*(_QWORD *)(a1[3] + 8 * v13 + 8) + 8LL);
    }
  }
  std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Check_size(a1);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
