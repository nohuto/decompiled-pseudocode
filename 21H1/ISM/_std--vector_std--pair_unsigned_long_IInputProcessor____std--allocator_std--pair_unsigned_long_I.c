/*
 * XREFs of _std::vector_std::pair_unsigned_long_IInputProcessor____std::allocator_std::pair_unsigned_long_IInputProcessor_______::_Emplace_reallocate_unsigned_long_&_IInputProcessor____::_1_::catch$41 @ 0x18005098C
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CBA6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_long_IInputProcessor____std::allocator_std::pair_unsigned_long_IInputProcessor_______::_Emplace_reallocate_unsigned_long___IInputProcessor____::_1_::catch_41(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 80)));
  throw;
}
