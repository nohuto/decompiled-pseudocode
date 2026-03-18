/*
 * XREFs of ??_ECAnimationTrigger@@UEAAPEAXI@Z @ 0x180209C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x180209BA0 (--1-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ.c)
 */

CAnimationTrigger *__fastcall CAnimationTrigger::`vector deleting destructor'(CAnimationTrigger *this, char a2)
{
  CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>::~CAnimationTriggerGeneratedT<CAnimationTrigger,CPropertyChangeResource>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
