/*
 * XREFs of ModuleAccessFilter @ 0x4B33B678
 * Callers:
 *     _WerEscalationReadImageVersionInfoForModuleBaseSafe@12 @ 0x4B2DA76C (_WerEscalationReadImageVersionInfoForModuleBaseSafe@12.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ModuleAccessFilter(int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // edx
  BOOL result; // eax

  result = 0;
  if ( (a1 == -1073741818 || a1 == -1073741819) && !*(_DWORD *)(*(_DWORD *)a2 + 20) )
  {
    if ( !a4 )
      return 1;
    v4 = *(_DWORD *)(*(_DWORD *)a2 + 24);
    if ( v4 >= a3 && v4 < a4 + a3 )
      return 1;
  }
  return result;
}
