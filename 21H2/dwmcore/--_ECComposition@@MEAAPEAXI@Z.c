/*
 * XREFs of ??_ECComposition@@MEAAPEAXI@Z @ 0x180192B70
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18019233C (--1CComposition@@MEAA@XZ.c)
 */

CComposition *__fastcall CComposition::`vector deleting destructor'(CComposition *this, int a2)
{
  char v2; // di

  v2 = a2;
  CComposition::~CComposition(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
