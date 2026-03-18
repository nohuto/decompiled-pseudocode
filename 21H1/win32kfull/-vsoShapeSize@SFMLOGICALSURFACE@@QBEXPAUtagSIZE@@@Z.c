/*
 * XREFs of ?vsoShapeSize@SFMLOGICALSURFACE@@QBEXPAUtagSIZE@@@Z @ 0xC67EE
 * Callers:
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 * Callees:
 *     <none>
 */

void __thiscall SFMLOGICALSURFACE::vsoShapeSize(SFMLOGICALSURFACE *this, struct tagSIZE *a2)
{
  int v2; // edx

  v2 = *((_DWORD *)this + 28);
  if ( v2 )
    *a2 = *(struct tagSIZE *)(v2 + 16);
}
