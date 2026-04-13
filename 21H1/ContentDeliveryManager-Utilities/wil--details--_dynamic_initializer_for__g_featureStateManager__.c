/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180003B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  xmmword_1801924F8 = 0LL;
  xmmword_180192508 = 0LL;
  InitializeCriticalSectionEx(&stru_180192518, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_180192540 = 0LL;
  xmmword_180192550 = 0LL;
  xmmword_180192560 = 0LL;
  xmmword_180192570 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
