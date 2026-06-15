/*
 * XREFs of _std::vector_IAudioStreamInfo___std::allocator_IAudioStreamInfo_____::_Emplace_reallocate_IAudioStreamInfo___const_&__::_1_::catch$60 @ 0x18007BDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180074B37 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_IAudioStreamInfo___std::allocator_IAudioStreamInfo_____::_Emplace_reallocate_IAudioStreamInfo___const____::_1_::catch_60(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 80)));
  throw;
}
