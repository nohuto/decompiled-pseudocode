/*
 * XREFs of ??$emplace_front@UDWMPointerMapping@@AEAUCursorId@@@?$list@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@2@@std@@QEAAAEAU?$pair@$$CBUDWMPointerMapping@@UCursorId@@@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180025BD8
 * Callers:
 *     ??$_Insert_or_assign@AEBUCursorId@@AEAPEAVDWMCursor@@@?$unordered_map@UCursorId@@PEAVDWMCursor@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@std@@_N@1@AEBUCursorId@@AEAPEAVDWMCursor@@@Z @ 0x180024718 (--$_Insert_or_assign@AEBUCursorId@@AEAPEAVDWMCursor@@@-$unordered_map@UCursorId@@PEAVDWMCursor@@.c)
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180025EC0 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<DWMPointerMapping const,CursorId>>::emplace_front<DWMPointerMapping,CursorId &>(
        __int64 **a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax

  v6 = **a1;
  if ( a1[1] == (__int64 *)0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(v6 + 8);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v8[2] = *a2;
  v8[3] = *a3;
  *v8 = v6;
  v8[1] = v7;
  a1[1] = (__int64 *)((char *)a1[1] + 1);
  *(_QWORD *)(v6 + 8) = v8;
  *v7 = v8;
  return **a1 + 16;
}
