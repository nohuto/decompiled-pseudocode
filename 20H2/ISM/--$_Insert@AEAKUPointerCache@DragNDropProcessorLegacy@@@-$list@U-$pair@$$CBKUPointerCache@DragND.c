/*
 * XREFs of ??$_Insert@AEAKUPointerCache@DragNDropProcessorLegacy@@@?$list@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAK$$QEAUPointerCache@DragNDropProcessorLegacy@@@Z @ 0x1801741CC
 * Callers:
 *     ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180175470 (-OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessor.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>::_Insert<unsigned long &,DragNDropProcessorLegacy::PointerCache>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _OWORD *a4)
{
  _QWORD *v8; // rdi
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x666666666666666LL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *((_DWORD *)result + 4) = *a3;
  *(_OWORD *)((char *)result + 20) = *a4;
  *result = a2;
  result[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v8 = result;
  return result;
}
