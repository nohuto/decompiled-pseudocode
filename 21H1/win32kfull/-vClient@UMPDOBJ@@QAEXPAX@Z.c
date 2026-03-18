/*
 * XREFs of ?vClient@UMPDOBJ@@QAEXPAX@Z @ 0x1F46FC
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QAEHXZ @ 0x1F41F3 (-bCleanupWorker@UMPDOBJ@@QAEHXZ.c)
 *     ?UMPDDrvEnableSurface@@YGPAUHSURF__@@PAUDHPDEV__@@@Z @ 0x20BFD4 (-UMPDDrvEnableSurface@@YGPAUHSURF__@@PAUDHPDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall UMPDOBJ::vClient(UMPDOBJ *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // ecx

  if ( !*((_WORD *)a2 + 24) && *((char *)a2 + 50) < 0 && a2[103] == 1 )
  {
    v2 = a2[7];
    v3 = a2[8];
    a2[7] = a2[101];
    a2[8] = a2[102];
    a2[103] = 0;
    a2[101] = v2;
    a2[102] = v3;
  }
}
