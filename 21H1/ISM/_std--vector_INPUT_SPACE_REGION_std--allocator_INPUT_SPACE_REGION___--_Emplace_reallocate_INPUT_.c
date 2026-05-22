/*
 * XREFs of _std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Emplace_reallocate_INPUT_SPACE_REGION_&__::_1_::catch$26 @ 0x18012B186
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Emplace_reallocate_INPUT_SPACE_REGION____::_1_::catch_26(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), (const struct std::nothrow_t *)(200LL * *(_QWORD *)(a2 + 80)));
  throw;
}
