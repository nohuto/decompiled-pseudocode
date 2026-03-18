/*
 * XREFs of ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x18016C134
 * Callers:
 *     ??0CComputeScribbleScheduler@@AEAA@PEAUID3D12CommandQueue@@@Z @ 0x1801A7F0C (--0CComputeScribbleScheduler@@AEAA@PEAUID3D12CommandQueue@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  result[1] = 0LL;
  *a1 = result;
  *result = a1;
  return result;
}
