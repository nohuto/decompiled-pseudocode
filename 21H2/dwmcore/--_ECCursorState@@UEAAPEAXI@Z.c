/*
 * XREFs of ??_ECCursorState@@UEAAPEAXI@Z @ 0x180268E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CCursorState@@UEAA@XZ @ 0x180268B24 (--1CCursorState@@UEAA@XZ.c)
 */

CCursorState *__fastcall CCursorState::`vector deleting destructor'(CCursorState *this, char a2)
{
  CCursorState::~CCursorState(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
