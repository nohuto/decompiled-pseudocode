/*
 * XREFs of ??$_Insert_or_assign@AEBUCursorId@@AEAPEAVDWMCursor@@@?$unordered_map@UCursorId@@PEAVDWMCursor@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@_N@1@AEBUCursorId@@AEAPEAVDWMCursor@@@Z @ 0x180024718
 * Callers:
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1800234CC (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KPEAULegacyDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@2@_K@Z @ 0x1800242A0 (-_End@-$_Hash@V-$_Umap_traits@KPEAULegacyDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_.c)
 *     ??$_Insert_unverified@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUCursorId@@PEAVDWMCursor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@1@@Z @ 0x1800247E0 (--$_Insert_unverified@U-$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@V-$_List_unchecked_iterator@V-.c)
 *     ??$emplace_front@UDWMPointerMapping@@AEAUCursorId@@@?$list@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@2@@std@@QEAAAEAU?$pair@$$CBUDWMPointerMapping@@UCursorId@@@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180025BD8 (--$emplace_front@UDWMPointerMapping@@AEAUCursorId@@@-$list@U-$pair@$$CBUDWMPointerMapping@@UCurs.c)
 */

__int64 __fastcall std::unordered_map<CursorId,DWMCursor *,CursorIdHash,std::equal_to<CursorId>,std::allocator<std::pair<CursorId const,DWMCursor *>>>::_Insert_or_assign<CursorId const &,DWMCursor * &>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3,
        _QWORD *a4)
{
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r10
  _QWORD **v11; // rdi
  __int64 v12; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v8 = *(_QWORD *)(a1 + 48) & std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  while ( 1 )
  {
    v9 = std::_Hash<std::_Umap_traits<unsigned long,LegacyDeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,LegacyDeviceInfo *>>,0>>::_End(
           a1,
           &v14,
           v8);
    if ( v10 == *v9 )
      break;
    if ( *(_DWORD *)(v10 + 16) == *(_DWORD *)a3 )
    {
      v11 = (_QWORD **)(a1 + 8);
      v12 = *(_QWORD *)(a1 + 8);
      goto LABEL_5;
    }
  }
  v11 = (_QWORD **)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  v12 = v10;
LABEL_5:
  if ( v10 == v12 )
  {
    std::list<std::pair<DWMPointerMapping const,CursorId>>::emplace_front<DWMPointerMapping,CursorId &>(v11, a3, a4);
    std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::_Insert_unverified<std::pair<CursorId const,DWMCursor *>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CursorId const,DWMCursor *>>>>>(
      a1,
      a2,
      **v11 + 16LL);
  }
  else
  {
    *(_QWORD *)(v10 + 24) = *a4;
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
