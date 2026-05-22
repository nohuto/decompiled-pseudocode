/*
 * XREFs of _std::vector_unsigned___int64_std::allocator_unsigned___int64___::_Emplace_reallocate_unsigned___int64_const_&__::_1_::catch$61 @ 0x18004F480
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned___int64_std::allocator_unsigned___int64___::_Emplace_reallocate_unsigned___int64_const____::_1_::catch_61(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 80), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 88)));
  throw;
}
