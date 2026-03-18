/*
 * XREFs of ??_ECHolographicViewer@@MEAAPEAXI@Z @ 0x18029C690
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CHolographicViewer@@MEAA@XZ @ 0x18029C63C (--1CHolographicViewer@@MEAA@XZ.c)
 */

CHolographicViewer *__fastcall CHolographicViewer::`vector deleting destructor'(CHolographicViewer *this, char a2)
{
  CHolographicViewer::~CHolographicViewer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
