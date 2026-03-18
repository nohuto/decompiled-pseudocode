/*
 * XREFs of ??_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z @ 0x1800CE5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x1800CE604 (--1CSolidColorLegacyMilBrush@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CSolidColorLegacyMilBrush *__fastcall CSolidColorLegacyMilBrush::`vector deleting destructor'(
        CSolidColorLegacyMilBrush *this,
        char a2)
{
  CSolidColorLegacyMilBrush::~CSolidColorLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x70uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
