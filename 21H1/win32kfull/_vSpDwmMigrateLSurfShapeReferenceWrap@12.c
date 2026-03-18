/*
 * XREFs of _vSpDwmMigrateLSurfShapeReferenceWrap@12 @ 0xAEC6C
 * Callers:
 *     <none>
 * Callees:
 *     ?SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z @ 0x22FA6 (-SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z.c)
 */

int __stdcall vSpDwmMigrateLSurfShapeReferenceWrap(HDEV a1, SFMLOGICALSURFACE *a2, int a3)
{
  int result; // eax

  SFMLOGICALSURFACE::SetShape(a2, a1, 0);
  result = a3;
  if ( a3 )
    return SFMLOGICALSURFACE::SetShape(a2, a1, (struct _SURFOBJ *)(a3 + 16));
  return result;
}
