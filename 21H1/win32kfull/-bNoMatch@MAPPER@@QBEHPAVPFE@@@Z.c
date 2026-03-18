/*
 * XREFs of ?bNoMatch@MAPPER@@QBEHPAVPFE@@@Z @ 0x4B006
 * Callers:
 *     ?bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z @ 0x4A670 (-bNearMatch@MAPPER@@QAEHAAVPFEOBJ@@PAEH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall MAPPER::bNoMatch(MAPPER *this, struct PFE *a2)
{
  unsigned int v2; // eax
  int v3; // edx

  v2 = *((_DWORD *)this + 43);
  v3 = 1;
  if ( v2 < *((_DWORD *)this + 42) )
    return 0;
  if ( v2 == *((_DWORD *)this + 42) && (*((_DWORD *)this + 55) & 0x1000080) == 0 )
    return *((_DWORD *)a2 + 12) >= *((_DWORD *)this + 48);
  return v3;
}
