/*
 * XREFs of EngLoadModule @ 0x1C028ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C0289F8C (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 */

HANDLE __stdcall EngLoadModule(LPWSTR pwsz)
{
  return (HANDLE)LoadModuleWorkHorse((char *)pwsz, 0);
}
