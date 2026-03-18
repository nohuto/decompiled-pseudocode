/*
 * XREFs of _dynamic_atexit_destructor_for__g_spHotkeyCallback__ @ 0x140004C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall dynamic_atexit_destructor_for__g_spHotkeyCallback__()
{
  return wil::com_ptr_t<HotKeyCallback,wil::err_returncode_policy>::~com_ptr_t<HotKeyCallback,wil::err_returncode_policy>();
}
