/*
 * XREFs of _CxxThrowException_0 @ 0x140004318
 * Callers:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x140004114 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x14000413C (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     _std::vector_HotKeyClient::HotkeyRegistration_std::allocator_HotKeyClient::HotkeyRegistration___::_Emplace_reallocate_HotKeyClient::HotkeyRegistration_const_&__::_1_::catch$30 @ 0x14000A6E6 (_std--vector_HotKeyClient--HotkeyRegistration_std--allocator_HotKeyClient--HotkeyRegistration___.c)
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x14000B124 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 *     ?ResultFromCaughtExceptionInternal@details@wil@@YAJPEAG_KPEA_N@Z @ 0x14000B540 (-ResultFromCaughtExceptionInternal@details@wil@@YAJPEAG_KPEA_N@Z.c)
 *     ?Rethrow@details@wil@@YAXXZ @ 0x14000B770 (-Rethrow@details@wil@@YAXXZ.c)
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14000BC30 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException_0(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}
