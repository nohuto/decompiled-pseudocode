/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800013B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_1800140D8 = 0LL;
  xmmword_1800140A8 = 0LL;
  xmmword_1800140B8 = 0LL;
  xmmword_1800140C8 = 0LL;
  InitializeCriticalSectionEx(&stru_1800140E0, 0, 0);
  qword_180014148 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180014108 = 0LL;
  xmmword_180014118 = 0LL;
  xmmword_180014128 = 0LL;
  xmmword_180014138 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
