/*
 * XREFs of _std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo___::_Emplace_reallocate_HidChannelValueInfo_const_&__::_1_::catch$30 @ 0x1800A49CD
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo___::_Emplace_reallocate_HidChannelValueInfo_const____::_1_::catch_30(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), (const struct std::nothrow_t *)(72LL * *(_QWORD *)(a2 + 80)));
  throw;
}
