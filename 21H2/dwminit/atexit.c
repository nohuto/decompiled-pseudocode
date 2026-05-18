/*
 * XREFs of atexit @ 0x18000CC6C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001330 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001350 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800013B0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001460 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     _dynamic_initializer_for__gDwmStateLock__ @ 0x1800014E0 (_dynamic_initializer_for__gDwmStateLock__.c)
 *     _dynamic_initializer_for__g_PortClient__ @ 0x180001500 (_dynamic_initializer_for__g_PortClient__.c)
 * Callees:
 *     _onexit @ 0x18000CC14 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
