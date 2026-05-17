/*
 * XREFs of _EtwpGetKmRegHandle@12 @ 0x4B38077C
 * Callers:
 *     _EtwEventWriteEndScenario@20 @ 0x4B380AB0 (_EtwEventWriteEndScenario@20.c)
 *     _EtwEventWriteStartScenario@20 @ 0x4B380B90 (_EtwEventWriteStartScenario@20.c)
 * Callees:
 *     <none>
 */

int __thiscall EtwpGetKmRegHandle(_DWORD *this, int a2, __int16 a3)
{
  if ( !this )
    return 87;
  *this = 0;
  if ( a3 && (a2 & 1) == 0 && a3 == *(_WORD *)(a2 + 52) )
  {
    *this = *(_DWORD *)(a2 + 48);
    return 0;
  }
  return 6;
}
