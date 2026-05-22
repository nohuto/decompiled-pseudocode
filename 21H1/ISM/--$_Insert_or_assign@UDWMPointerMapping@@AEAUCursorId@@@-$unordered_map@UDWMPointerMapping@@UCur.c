/*
 * XREFs of ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180025E60
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x180025C20 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$emplace_front@UDWMPointerMapping@@AEAUCursorId@@@?$list@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@2@@std@@QEAAAEAU?$pair@$$CBUDWMPointerMapping@@UCursorId@@@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180025B78 (--$emplace_front@UDWMPointerMapping@@AEAUCursorId@@@-$list@U-$pair@$$CBUDWMPointerMapping@@UCurs.c)
 *     ??$_Insert_unverified@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUDWMPointerMapping@@UCursorId@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@1@@Z @ 0x180025F24 (--$_Insert_unverified@U-$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V-$_List_unchecked_iterat.c)
 */

__int64 __fastcall std::unordered_map<DWMPointerMapping,CursorId,DWMMappingHash,std::equal_to<DWMPointerMapping>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>>::_Insert_or_assign<DWMPointerMapping,CursorId &>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        _QWORD *a4)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 appended; // rax
  __int64 v11; // r9
  _QWORD *v12; // r14
  __int64 v13; // r11
  __int64 v14; // rdx
  _QWORD *v15; // r8
  _QWORD *i; // rcx
  _QWORD *v17; // rax

  std::_Fnv1a_append_bytes(a1, a3 + 4, 4uLL);
  appended = std::_Fnv1a_append_bytes(v8, a3, v9);
  v11 = *(_QWORD *)(a1 + 24);
  v12 = (_QWORD *)(a1 + 8);
  v14 = 2 * (*(_QWORD *)(a1 + 48) & (v13 ^ appended));
  v15 = *(_QWORD **)(v11 + 16 * (*(_QWORD *)(a1 + 48) & (v13 ^ appended)));
  for ( i = v15; ; i = (_QWORD *)*i )
  {
    v17 = v15 == (_QWORD *)*v12 ? (_QWORD *)*v12 : **(_QWORD ***)(v11 + 8 * v14 + 8);
    if ( i == v17 )
      break;
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 && *((_DWORD *)i + 5) == *((_DWORD *)a3 + 1) )
      goto LABEL_6;
  }
  i = (_QWORD *)*v12;
LABEL_6:
  if ( i == (_QWORD *)*v12 )
  {
    std::list<std::pair<DWMPointerMapping const,CursorId>>::emplace_front<DWMPointerMapping,CursorId &>(
      (__int64 **)(a1 + 8),
      a3,
      a4);
    std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Insert_unverified<std::pair<DWMPointerMapping const,CursorId>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<DWMPointerMapping const,CursorId>>>>>(
      a1,
      a2,
      *(_QWORD *)*v12 + 16LL);
  }
  else
  {
    i[3] = *a4;
    *(_QWORD *)a2 = i;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
