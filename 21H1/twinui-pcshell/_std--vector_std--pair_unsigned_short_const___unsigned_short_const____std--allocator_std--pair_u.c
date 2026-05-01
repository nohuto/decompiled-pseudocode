/*
 * XREFs of _std::vector_std::pair_unsigned_short_const___unsigned_short_const____std::allocator_std::pair_unsigned_short_const___unsigned_short_const_______::_Emplace_reallocate_std::pair_unsigned_short_const___unsigned_short_const______::_1_::catch$37 @ 0x180178368
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18008D664 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_short_const___unsigned_short_const____std::allocator_std::pair_unsigned_short_const___unsigned_short_const_______::_Emplace_reallocate_std::pair_unsigned_short_const___unsigned_short_const______::_1_::catch_37(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 80)));
  throw;
}
