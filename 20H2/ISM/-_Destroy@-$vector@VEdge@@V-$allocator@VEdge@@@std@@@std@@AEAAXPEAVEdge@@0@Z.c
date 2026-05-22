/*
 * XREFs of ?_Destroy@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXPEAVEdge@@0@Z @ 0x180177868
 * Callers:
 *     _std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const_&__::_1_::catch$35 @ 0x1801783B9 (_std--vector_Edge_std--allocator_Edge___--_Emplace_reallocate_Edge_const_-__--_1_--catch$35.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::vector<Edge>::_Destroy(__int64 a1, __int64 *a2, __int64 *a3)
{
  return std::_Destroy_range<std::allocator<Edge>>(a2, a3);
}
