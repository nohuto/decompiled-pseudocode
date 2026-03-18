/*
 * XREFs of ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QAEPAVSURFACE@@PAUHLSURF__@@H@Z @ 0x24B50
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x24A46 (-DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 * Callees:
 *     _GreReferenceObject@4 @ 0x20BD0 (_GreReferenceObject@4.c)
 */

struct SURFACE *__thiscall SFMLOGICALSURFACE::OwnsSurfaceCleanup(SFMLOGICALSURFACE *this, HLSURF a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // esi

  v3 = *((_DWORD *)this + 28);
  if ( !v3 )
    return 0;
  v4 = *((_DWORD *)this + 39);
  if ( (v4 & 0x20) != 0 )
    return 0;
  v5 = v3 - 16;
  *((_DWORD *)this + 39) = v4 | 0x20;
  GreReferenceObject(*(HSURF *)(v5 + 20));
  return (struct SURFACE *)v5;
}
