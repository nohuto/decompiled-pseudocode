/*
 * XREFs of _dynamic_initializer_for__TsSessionListLock__ @ 0x180002330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__TsSessionListLock__()
{
  InitializeCriticalSectionEx(&stru_180056188, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__TsSessionListLock__);
}
