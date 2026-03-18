/*
 * XREFs of ??_ECGlobalDrawingContext@@UEAAPEAXI@Z @ 0x1800464D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800499A8 (--1CDrawingContext@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CGlobalDrawingContext *__fastcall CGlobalDrawingContext::`vector deleting destructor'(
        CGlobalDrawingContext *this,
        char a2)
{
  CDrawingContext::~CDrawingContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x1F70uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
