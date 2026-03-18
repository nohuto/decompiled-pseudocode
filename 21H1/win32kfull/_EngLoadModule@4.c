/*
 * XREFs of _EngLoadModule@4 @ 0x1E9081
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadModuleWorkHorse@@YGPAXPAGH@Z @ 0x1E888C (-LoadModuleWorkHorse@@YGPAXPAGH@Z.c)
 */

HANDLE __stdcall EngLoadModule(LPWSTR pwsz)
{
  return LoadModuleWorkHorse(pwsz, 0);
}
