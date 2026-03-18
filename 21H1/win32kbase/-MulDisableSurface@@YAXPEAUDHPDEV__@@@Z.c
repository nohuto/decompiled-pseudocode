/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C014B550
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C014BDD0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     EngUnlockSurface @ 0x1C0080860 (EngUnlockSurface.c)
 *     bDeleteSurface @ 0x1C009AEA0 (bDeleteSurface.c)
 *     EngDeleteClip @ 0x1C0155B50 (EngDeleteClip.c)
 */

void __fastcall MulDisableSurface(struct DHPDEV__ *a1)
{
  __int64 v2; // rcx

  EngDeleteClip(*((CLIPOBJ **)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 6));
  v2 = *((_QWORD *)a1 + 3);
  if ( v2 )
    bDeleteSurface(v2);
}
