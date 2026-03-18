/*
 * XREFs of ?IsAppShellGhosted@@YGHPAUtagTHREADINFO@@@Z @ 0xC11B0
 * Callers:
 *     _IsAdaptiveQueueDetachExempted@4 @ 0xC1162 (_IsAdaptiveQueueDetachExempted@4.c)
 * Callees:
 *     _IsIAMThread@4 @ 0xAC466 (_IsIAMThread@4.c)
 */

BOOL __thiscall IsAppShellGhosted(_DWORD *this)
{
  int v1; // ecx
  int v2; // eax
  BOOL result; // eax

  v1 = *(_DWORD *)(this[199] + 60);
  result = 0;
  if ( v1 )
  {
    LOBYTE(v2) = IsIAMThread(*(_DWORD **)(v1 + 8));
    if ( v2 )
      return 1;
  }
  return result;
}
