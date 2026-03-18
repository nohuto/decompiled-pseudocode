/*
 * XREFs of ?IsHardwareProtected@CD3DSurface@@UEBA_NXZ @ 0x1802481D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CD3DSurface::IsHardwareProtected(CD3DSurface *this)
{
  return (*((_DWORD *)this + 39) & 0x80000) != 0;
}
