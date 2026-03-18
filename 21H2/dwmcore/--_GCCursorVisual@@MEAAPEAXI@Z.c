/*
 * XREFs of ??_GCCursorVisual@@MEAAPEAXI@Z @ 0x180211B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCursorVisual@@MEAA@XZ @ 0x180211AB4 (--1CCursorVisual@@MEAA@XZ.c)
 */

CCursorVisual *__fastcall CCursorVisual::`scalar deleting destructor'(CCursorVisual *this, char a2)
{
  CCursorVisual::~CCursorVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
