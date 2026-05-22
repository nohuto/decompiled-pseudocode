/*
 * XREFs of _std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const_&__::_1_::catch$35 @ 0x1801783B9
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z @ 0x180177868 (-_Destroy@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z.c)
 *     ?deallocate@?$allocator@VEdge@@@std@@QEAAXQEAVEdge@@_K@Z @ 0x18017787C (-deallocate@-$allocator@VEdge@@@std@@QEAAXQEAVEdge@@_K@Z.c)
 */

void __fastcall __noreturn std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const____::_1_::catch_35(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<Edge>::_Destroy(a1, *(__int64 **)(a2 + 128), *(__int64 **)(a2 + 152));
  std::allocator<Edge>::deallocate(v3, *(void **)(a2 + 40), *(_QWORD *)(a2 + 32));
  throw;
}
