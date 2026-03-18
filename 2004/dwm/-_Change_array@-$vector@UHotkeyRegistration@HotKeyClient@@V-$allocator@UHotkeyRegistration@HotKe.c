/*
 * XREFs of ?_Change_array@?$vector@UHotkeyRegistration@HotKeyClient@@V?$allocator@UHotkeyRegistration@HotKeyClient@@@std@@@std@@AEAAXQEAUHotkeyRegistration@HotKeyClient@@_K1@Z @ 0x14000BD94
 * Callers:
 *     ??$_Emplace_reallocate@AEBUHotkeyRegistration@HotKeyClient@@@?$vector@UHotkeyRegistration@HotKeyClient@@V?$allocator@UHotkeyRegistration@HotKeyClient@@@std@@@std@@QEAAPEAUHotkeyRegistration@HotKeyClient@@QEAU23@AEBU23@@Z @ 0x14000A574 (--$_Emplace_reallocate@AEBUHotkeyRegistration@HotKeyClient@@@-$vector@UHotkeyRegistration@HotKey.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140008458 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall std::vector<HotKeyClient::HotkeyRegistration>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(char **)a1, 20 * ((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 20LL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 20 * a3;
  result = 5 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 20 * a4;
  return result;
}
