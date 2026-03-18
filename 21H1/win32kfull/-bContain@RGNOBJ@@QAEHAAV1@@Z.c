/*
 * XREFs of ?bContain@RGNOBJ@@QAEHAAV1@@Z @ 0x7A4CA
 * Callers:
 *     ?bTightenRao@DC@@QAEHXZ @ 0x7A1A2 (-bTightenRao@DC@@QAEHXZ.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall RGNOBJ::bContain(RGNOBJ *this, struct RGNOBJ *a2)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // edx

  v2 = *(_DWORD **)this;
  v3 = *(_DWORD **)a2;
  return v2[16] <= *(_DWORD *)(*(_DWORD *)a2 + 64) && v2[18] >= v3[18] && v2[17] <= v3[17] && v2[19] >= v3[19];
}
