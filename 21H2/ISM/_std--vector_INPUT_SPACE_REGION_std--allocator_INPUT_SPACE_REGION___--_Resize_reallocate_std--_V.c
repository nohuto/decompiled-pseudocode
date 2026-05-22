/*
 * XREFs of _std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$17 @ 0x180051F54
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_17(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), (const struct std::nothrow_t *)(200LL * *(_QWORD *)(a2 + 80)));
  throw;
}
