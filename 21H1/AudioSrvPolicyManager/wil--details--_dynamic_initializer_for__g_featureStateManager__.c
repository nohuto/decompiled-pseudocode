/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180002130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  xmmword_180055168 = 0LL;
  xmmword_180055178 = 0LL;
  InitializeCriticalSectionEx(&stru_180055188, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_1800551B0 = 0LL;
  xmmword_1800551C0 = 0LL;
  xmmword_1800551D0 = 0LL;
  xmmword_1800551E0 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
