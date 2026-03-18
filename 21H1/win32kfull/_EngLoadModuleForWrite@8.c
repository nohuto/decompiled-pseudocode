/*
 * XREFs of _EngLoadModuleForWrite@8 @ 0x1E9099
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadModuleWorkHorse@@YGPAXPAGH@Z @ 0x1E888C (-LoadModuleWorkHorse@@YGPAXPAGH@Z.c)
 */

HANDLE __stdcall EngLoadModuleForWrite(LPWSTR pwsz, ULONG cjSizeOfModule)
{
  ULONG v2; // edx

  v2 = cjSizeOfModule;
  if ( !cjSizeOfModule )
    v2 = -1;
  return LoadModuleWorkHorse(pwsz, v2);
}
