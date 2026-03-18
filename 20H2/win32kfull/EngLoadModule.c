/*
 * XREFs of EngLoadModule @ 0x1C0289630
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C0288A1C (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 */

HANDLE __stdcall EngLoadModule(LPWSTR pwsz)
{
  return (HANDLE)LoadModuleWorkHorse((char *)pwsz, 0);
}
