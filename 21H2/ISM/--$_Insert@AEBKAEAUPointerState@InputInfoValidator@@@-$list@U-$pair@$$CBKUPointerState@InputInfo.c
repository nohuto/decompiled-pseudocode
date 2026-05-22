/*
 * XREFs of ??$_Insert@AEBKAEAUPointerState@InputInfoValidator@@@?$list@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x18019AECC
 * Callers:
 *     ??$_Insert_or_assign@AEBKAEAUPointerState@InputInfoValidator@@@?$unordered_map@KUPointerState@InputInfoValidator@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUPointerState@InputInfoValidator@@@Z @ 0x18019AF7C (--$_Insert_or_assign@AEBKAEAUPointerState@InputInfoValidator@@@-$unordered_map@KUPointerState@In.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::_Insert<unsigned long const &,InputInfoValidator::PointerState &>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  _QWORD *v8; // rdi
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *((_DWORD *)result + 4) = *a3;
  *(_QWORD *)((char *)result + 20) = *a4;
  *result = a2;
  result[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v8 = result;
  return result;
}
