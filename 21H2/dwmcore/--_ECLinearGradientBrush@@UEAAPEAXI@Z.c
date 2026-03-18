/*
 * XREFs of ??_ECLinearGradientBrush@@UEAAPEAXI@Z @ 0x180040850
 * Callers:
 *     ??_ECLinearGradientBrush@@WFI@EAAPEAXI@Z @ 0x1801076F0 (--_ECLinearGradientBrush@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1800409A0 (--1CGradientBrush@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::`vector deleting destructor'(
        CLinearGradientBrush *this,
        char a2)
{
  CGradientBrush::~CGradientBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x120uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
