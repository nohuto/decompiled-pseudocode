/*
 * XREFs of EngDeleteSurface @ 0x1C00C0270
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C00C0E40 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface(hsurf);
  return result;
}
