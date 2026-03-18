/*
 * XREFs of ?vKill@PFFOBJ@@QAEXXZ @ 0xCE698
 * Callers:
 *     ?bDeleteLoadRef@PFFOBJ@@QAEHKPAUtagPvtData@@PAH@Z @ 0xCDBEA (-bDeleteLoadRef@PFFOBJ@@QAEHKPAUtagPvtData@@PAH@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z @ 0xCDD06 (-bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall PFFOBJ::vKill(PFFOBJ *this)
{
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // edx
  int v5; // ecx
  int v6; // esi
  int v7; // eax

  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)(v2 + 32);
  if ( (v3 & 1) == 0 )
  {
    v4 = 0;
    *(_DWORD *)(v2 + 32) = v3 | 1;
    v5 = *(_DWORD *)this;
    if ( *(_DWORD *)(*(_DWORD *)this + 124) )
    {
      v6 = 132;
      do
      {
        v7 = *(_DWORD *)(v6 + v5);
        if ( v7 )
        {
          *(_DWORD *)(v7 + 8) |= 2u;
          v5 = *(_DWORD *)this;
        }
        ++v4;
        v6 += 4;
      }
      while ( v4 < *(_DWORD *)(v5 + 124) );
    }
  }
}
