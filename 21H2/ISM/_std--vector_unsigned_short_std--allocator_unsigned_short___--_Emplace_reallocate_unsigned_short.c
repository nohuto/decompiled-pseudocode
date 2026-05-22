/*
 * XREFs of _std::vector_unsigned_short_std::allocator_unsigned_short___::_Emplace_reallocate_unsigned_short_const_&__::_1_::catch$35 @ 0x1800970A7
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_short_std::allocator_unsigned_short___::_Emplace_reallocate_unsigned_short_const____::_1_::catch_35(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), (const struct std::nothrow_t *)(2LL * *(_QWORD *)(a2 + 80)));
  throw;
}
