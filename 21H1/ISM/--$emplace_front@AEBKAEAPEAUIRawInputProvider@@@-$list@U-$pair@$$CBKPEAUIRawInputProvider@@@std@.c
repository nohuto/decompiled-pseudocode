/*
 * XREFs of ??$emplace_front@AEBKAEAPEAUIRawInputProvider@@@?$list@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@2@@std@@QEAAAEAU?$pair@$$CBKPEAUIRawInputProvider@@@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x180028EFC
 * Callers:
 *     ??$_Insert_or_assign@AEBKAEAPEAULegacyDeviceInfo@@@?$unordered_map@KPEAULegacyDeviceInfo@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAULegacyDeviceInfo@@@Z @ 0x180028D28 (--$_Insert_or_assign@AEBKAEAPEAULegacyDeviceInfo@@@-$unordered_map@KPEAULegacyDeviceInfo@@U-$has.c)
 *     ??$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x18002912C (--$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@-$unordered_map@KPEAUIRawInputProvider@@U-$h.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<unsigned long const,IRawInputProvider *>>::emplace_front<unsigned long const &,IRawInputProvider * &>(
        __int64 **a1,
        _DWORD *a2,
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
  *((_DWORD *)v8 + 4) = *a2;
  v8[3] = *a3;
  *v8 = v6;
  v8[1] = v7;
  a1[1] = (__int64 *)((char *)a1[1] + 1);
  *(_QWORD *)(v6 + 8) = v8;
  *v7 = v8;
  return **a1 + 16;
}
