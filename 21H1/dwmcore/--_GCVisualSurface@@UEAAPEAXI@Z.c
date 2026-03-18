/*
 * XREFs of ??_GCVisualSurface@@UEAAPEAXI@Z @ 0x180172610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CVisualSurface@@UEAA@XZ @ 0x1801F5F10 (--1CVisualSurface@@UEAA@XZ.c)
 */

CVisualSurface *__fastcall CVisualSurface::`scalar deleting destructor'(CVisualSurface *this, char a2)
{
  CVisualSurface::~CVisualSurface(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
