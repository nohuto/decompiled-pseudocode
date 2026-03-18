/*
 * XREFs of _std::vector_HotKeyClient::HotkeyRegistration_std::allocator_HotKeyClient::HotkeyRegistration___::_Emplace_reallocate_HotKeyClient::HotkeyRegistration_const_&__::_1_::catch$30 @ 0x14000A6E6
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x140004318 (_CxxThrowException_0.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140008458 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall __noreturn std::vector_HotKeyClient::HotkeyRegistration_std::allocator_HotKeyClient::HotkeyRegistration___::_Emplace_reallocate_HotKeyClient::HotkeyRegistration_const____::_1_::catch_30(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(char **)(a2 + 88), 20LL * *(_QWORD *)(a2 + 80));
  throw;
}
