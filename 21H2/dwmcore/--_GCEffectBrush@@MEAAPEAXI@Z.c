/*
 * XREFs of ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x180040350
 * Callers:
 *     <none>
 * Callees:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x180040464 (--1CEffectBrush@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CEffectBrush *__fastcall CEffectBrush::`scalar deleting destructor'(CEffectBrush *this, char a2)
{
  CEffectBrush::~CEffectBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xD0uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
