/*
 * XREFs of ?IsValid@CCompositionSurface@@MEBA_NXZ @ 0x1C001B300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurface::IsValid(CCompositionSurface *this)
{
  return *((_BYTE *)this + 32);
}
