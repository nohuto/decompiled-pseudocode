/*
 * XREFs of ??_ECTextVisual@@MEAAPEAXI@Z @ 0x180242890
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ @ 0x1802427A8 (--1-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ.c)
 */

struct CResource ***__fastcall CTextVisual::`vector deleting destructor'(struct CResource ***this, char a2)
{
  CTextVisualGeneratedT<CTextVisual,CVisual>::~CTextVisualGeneratedT<CTextVisual,CVisual>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
