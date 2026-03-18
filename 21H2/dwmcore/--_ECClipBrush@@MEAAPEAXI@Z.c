/*
 * XREFs of ??_ECClipBrush@@MEAAPEAXI@Z @ 0x18020A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CClipBrush@@MEAA@XZ @ 0x18020A96C (--1CClipBrush@@MEAA@XZ.c)
 */

CClipBrush *__fastcall CClipBrush::`vector deleting destructor'(CClipBrush *this, char a2)
{
  CClipBrush::~CClipBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
