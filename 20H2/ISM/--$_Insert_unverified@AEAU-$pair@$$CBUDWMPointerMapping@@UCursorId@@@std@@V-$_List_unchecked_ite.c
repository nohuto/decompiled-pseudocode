/*
 * XREFs of ??$_Insert_unverified@AEAU?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUDWMPointerMapping@@UCursorId@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@1@@Z @ 0x18019B058
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18019C170 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPoi.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180026098 (-_Check_size@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPointe.c)
 *     ?erase@?$list@U?$pair@$$CBKUtagPOINTF@@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@2@@Z @ 0x1800880A4 (-erase@-$list@U-$pair@$$CBKUtagPOINTF@@@std@@V-$allocator@U-$pair@$$CBKUtagPOINTF@@@std@@@2@@std.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Insert_unverified<std::pair<DWMPointerMapping const,CursorId> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<DWMPointerMapping const,CursorId>>>>>(
        _QWORD *a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 a4)
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
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // r8
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v29; // [rsp+60h] [rbp+18h] BYREF
  __int64 v30; // [rsp+68h] [rbp+20h]

  v30 = a4;
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
        std::list<std::pair<unsigned long const,tagPOINTF>>::erase((__int64)(a1 + 1), &v29, (__int64 *)a4);
        *(_QWORD *)a2 = v15;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v18 = *(_QWORD *)a4;
  if ( v15 != *(_QWORD *)a4 )
  {
    **(_QWORD **)(a4 + 8) = v18;
    **(_QWORD **)(v18 + 8) = v15;
    **(_QWORD **)(v15 + 8) = a4;
    v19 = *(_QWORD *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = *(_QWORD *)(v18 + 8);
    *(_QWORD *)(v18 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v19;
  }
  v20 = a1[3];
  v21 = *(_QWORD *)(v20 + 16 * v12);
  if ( v21 == a1[1] )
  {
    *(_QWORD *)(v20 + 16 * v12) = a4;
    v22 = a1[3];
    *(_QWORD *)(v22 + 16 * v12 + 8) = a4;
  }
  else
  {
    v23 = (_QWORD *)(v20 + 16 * v12);
    if ( v21 == v15 )
    {
      *v23 = a4;
    }
    else
    {
      v24 = (__int64 *)v23[1];
      v25 = *v24;
      v23[1] = *v24;
      if ( v25 != a4 )
      {
        v26 = a1[3];
        v27 = *(_QWORD *)(v26 + 8 * v13 + 8);
        *(_QWORD *)(v26 + 8 * v13 + 8) = *(_QWORD *)(v27 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Check_size((__int64)a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::erase(
      a1,
      &v29,
      v30);
    throw;
  }
  return result;
}
