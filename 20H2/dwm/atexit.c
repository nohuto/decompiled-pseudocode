/*
 * XREFs of atexit @ 0x14000361C
 * Callers:
 *     _dynamic_initializer_for__g_dwmAppHost__ @ 0x140001050 (_dynamic_initializer_for__g_dwmAppHost__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x1400010A0 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     _dynamic_initializer_for__g_spHotkeyCallback__ @ 0x1400010B0 (_dynamic_initializer_for__g_spHotkeyCallback__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1400010C0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     pre_c_initialization @ 0x140002EF0 (pre_c_initialization.c)
 *     __scrt_initialize_thread_safe_statics @ 0x140003640 (__scrt_initialize_thread_safe_statics.c)
 * Callees:
 *     _onexit @ 0x1400035C4 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
