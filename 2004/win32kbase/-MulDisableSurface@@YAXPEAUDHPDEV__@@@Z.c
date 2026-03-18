/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0145200
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0145A80 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     EngUnlockSurface @ 0x1C00878E0 (EngUnlockSurface.c)
 *     bDeleteSurface @ 0x1C00C0E40 (bDeleteSurface.c)
 *     EngDeleteClip @ 0x1C014F800 (EngDeleteClip.c)
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
