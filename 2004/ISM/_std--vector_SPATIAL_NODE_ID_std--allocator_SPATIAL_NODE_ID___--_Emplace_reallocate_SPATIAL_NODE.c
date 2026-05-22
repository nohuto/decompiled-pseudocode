/*
 * XREFs of _std::vector_SPATIAL_NODE_ID_std::allocator_SPATIAL_NODE_ID___::_Emplace_reallocate_SPATIAL_NODE_ID_const_&__::_1_::catch$35 @ 0x18010277C
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_SPATIAL_NODE_ID_std::allocator_SPATIAL_NODE_ID___::_Emplace_reallocate_SPATIAL_NODE_ID_const____::_1_::catch_35(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 80)));
  throw;
}
