/*
 * XREFs of ?CleanupShape@SFMLOGICALSURFACE@@QAEXPAVSURFACE@@@Z @ 0x205FE
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x24A46 (-DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 * Callees:
 *     _GreDereferenceObject@8 @ 0x206B0 (_GreDereferenceObject@8.c)
 */

void __thiscall SFMLOGICALSURFACE::CleanupShape(SFMLOGICALSURFACE *this, HSURF *a2)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 39);
  if ( (v3 & 0x20) != 0 )
  {
    if ( a2 )
    {
      GreDereferenceObject(a2[5]);
      v3 = *((_DWORD *)this + 39);
    }
    *((_DWORD *)this + 39) = v3 & 0xFFFFFFDF;
  }
}
