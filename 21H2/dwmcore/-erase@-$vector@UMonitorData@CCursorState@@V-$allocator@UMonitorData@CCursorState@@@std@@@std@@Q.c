/*
 * XREFs of ?erase@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@2@@Z @ 0x18026BA04
 * Callers:
 *     ?DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z @ 0x180269878 (-DisableHardwareCursor@CCursorState@@QEAAXU_LUID@@I@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4MonitorData@CCursorState@@QEAAAEAU01@$$QEAU01@@Z @ 0x180268D04 (--4MonitorData@CCursorState@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

_QWORD *__fastcall std::vector<CCursorState::MonitorData>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 144;
  v8 = v3;
  if ( a3 + 144 != v3 )
  {
    do
    {
      CCursorState::MonitorData::operator=(v4 - 144, v4);
      v4 += 144LL;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD *)(a1 + 8);
    v8 = v3;
  }
  v9 = *(std::_Ref_count_base **)(v3 - 40);
  if ( v9 )
  {
    std::_Ref_count_base::_Decref(v9);
    v8 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 144;
  result = a2;
  *a2 = a3;
  return result;
}
