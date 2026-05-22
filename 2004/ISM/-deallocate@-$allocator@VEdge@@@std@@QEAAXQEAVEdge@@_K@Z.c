/*
 * XREFs of ?deallocate@?$allocator@VEdge@@@std@@QEAAXQEAVEdge@@_K@Z @ 0x18017790C
 * Callers:
 *     _std::vector_Edge_std::allocator_Edge___::_Emplace_reallocate_Edge_const_&__::_1_::catch$35 @ 0x180178449 (_std--vector_Edge_std--allocator_Edge___--_Emplace_reallocate_Edge_const_-__--_1_--catch$35.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<Edge>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(a3 << 7));
}
