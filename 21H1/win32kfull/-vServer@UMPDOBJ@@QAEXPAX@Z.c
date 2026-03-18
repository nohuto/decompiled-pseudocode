/*
 * XREFs of ?vServer@UMPDOBJ@@QAEXPAX@Z @ 0x1F474D
 * Callers:
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ?UMPDServer@@YGHPAVSURFACE@@@Z @ 0x20FC34 (-UMPDServer@@YGHPAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall UMPDOBJ::vServer(UMPDOBJ *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // ecx

  if ( !*((_WORD *)a2 + 24) && *((char *)a2 + 50) < 0 && !a2[103] )
  {
    v2 = a2[7];
    v3 = a2[8];
    a2[7] = a2[101];
    a2[8] = a2[102];
    a2[103] = 1;
    a2[101] = v2;
    a2[102] = v3;
  }
}
