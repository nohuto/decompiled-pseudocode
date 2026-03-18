/*
 * XREFs of ??_ECD3DSurface@@MEAAPEAXI@Z @ 0x180247C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CD3DSurface@@MEAA@XZ @ 0x180247B00 (--1CD3DSurface@@MEAA@XZ.c)
 */

CD3DSurface *__fastcall CD3DSurface::`vector deleting destructor'(CD3DSurface *this, char a2)
{
  CD3DSurface::~CD3DSurface(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
