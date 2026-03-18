/*
 * XREFs of ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180063E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisualTree@@UEAA@XZ @ 0x180063EB4 (--1CVisualTree@@UEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CVisualTree *__fastcall CVisualTree::`vector deleting destructor'(CVisualTree *this, char a2)
{
  CVisualTree::~CVisualTree(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x1270uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
