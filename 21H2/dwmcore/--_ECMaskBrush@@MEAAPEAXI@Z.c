/*
 * XREFs of ??_ECMaskBrush@@MEAAPEAXI@Z @ 0x180040B60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMaskBrush@@MEAA@XZ @ 0x180040BA4 (--1CMaskBrush@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CMaskBrush *__fastcall CMaskBrush::`vector deleting destructor'(CMaskBrush *this, char a2)
{
  CMaskBrush::~CMaskBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x90uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
