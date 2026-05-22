/*
 * XREFs of ?_Change_array@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@AEAAXQEAUHotKeyRegistrationData@@_K1@Z @ 0x1800BB1AC
 * Callers:
 *     ??$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@QEAAPEAUHotKeyRegistrationData@@QEAU2@AEBU2@@Z @ 0x1800BAD84 (--$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@-$vector@UHotKeyRegistrationData@@V-$allocat.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<HotKeyRegistrationData>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(12 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 12LL)));
  *(_QWORD *)a1 = a2;
  result = 3 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 12 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 12 * a4;
  return result;
}
