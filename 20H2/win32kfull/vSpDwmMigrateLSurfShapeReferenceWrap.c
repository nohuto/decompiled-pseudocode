/*
 * XREFs of vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C012C270
 * Callers:
 *     <none>
 * Callees:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00C4C5C (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 */

_BOOL8 __fastcall vSpDwmMigrateLSurfShapeReferenceWrap(HDEV a1, SFMLOGICALSURFACE *this, __int64 a3)
{
  _BOOL8 result; // rax

  result = SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
  if ( a3 )
    return SFMLOGICALSURFACE::SetShape(this, a1, (struct _SURFOBJ *)(a3 + 24));
  return result;
}
