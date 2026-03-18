/*
 * XREFs of ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x1800C74E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800C7524 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CCompositionSurfaceBitmap *__fastcall CCompositionSurfaceBitmap::`scalar deleting destructor'(
        CCompositionSurfaceBitmap *this,
        char a2)
{
  CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xF0uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
