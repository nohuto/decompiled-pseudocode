/*
 * XREFs of ??_GCVisualSurface@@UEAAPEAXI@Z @ 0x180063CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualSurface@@UEAA@XZ @ 0x180063D04 (--1CVisualSurface@@UEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CVisualSurface *__fastcall CVisualSurface::`scalar deleting destructor'(CVisualSurface *this, char a2)
{
  CVisualSurface::~CVisualSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xD0uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
