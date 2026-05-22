/*
 * XREFs of ??$_Insert@AEAKUPointerCache@ResizeProcessor@@@?$list@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAK$$QEAUPointerCache@ResizeProcessor@@@Z @ 0x1800FD4D8
 * Callers:
 *     ?OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800FE470 (-OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::pair<unsigned long const,ResizeProcessor::PointerCache>>::_Insert<unsigned long &,ResizeProcessor::PointerCache>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  _QWORD *v8; // rdi
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *((_DWORD *)result + 4) = *a3;
  *(_QWORD *)((char *)result + 20) = *(_QWORD *)a4;
  *((_DWORD *)result + 7) = *(_DWORD *)(a4 + 8);
  *result = a2;
  result[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v8 = result;
  return result;
}
