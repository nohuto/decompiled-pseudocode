/*
 * XREFs of ??_GCSurfaceBrush@@MEAAPEAXI@Z @ 0x180042A30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x180042AD0 (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CSurfaceBrush *__fastcall CSurfaceBrush::`scalar deleting destructor'(CSurfaceBrush *this, char a2)
{
  CSurfaceBrush::~CSurfaceBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xD8uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
