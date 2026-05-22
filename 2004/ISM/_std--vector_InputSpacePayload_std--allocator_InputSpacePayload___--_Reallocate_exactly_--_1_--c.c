/*
 * XREFs of _std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Reallocate_exactly_::_1_::catch$11 @ 0x18012D9DD
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Reallocate_exactly_::_1_::catch_11(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), (const struct std::nothrow_t *)(40LL * *(_QWORD *)(a2 + 72)));
  throw;
}
