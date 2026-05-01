/*
 * XREFs of _std::vector_tagRECT_std::allocator_tagRECT___::_Emplace_reallocate_tagRECT_const_&__::_1_::catch$34 @ 0x1803F1650
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18008DF14 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_tagRECT_std::allocator_tagRECT___::_Emplace_reallocate_tagRECT_const____::_1_::catch_34(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 80)));
  throw;
}
