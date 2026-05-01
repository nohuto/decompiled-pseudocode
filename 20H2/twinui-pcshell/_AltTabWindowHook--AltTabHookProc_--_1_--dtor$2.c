/*
 * XREFs of _AltTabWindowHook::AltTabHookProc_::_1_::dtor$2 @ 0x18031F8F1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AltTabWindowHook::AltTabHookProc_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler>(*(_QWORD *)(a2 + 120));
}
