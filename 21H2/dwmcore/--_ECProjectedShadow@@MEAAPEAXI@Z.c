/*
 * XREFs of ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x180232A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x180232820 (--1CProjectedShadow@@MEAA@XZ.c)
 */

CProjectedShadow *__fastcall CProjectedShadow::`vector deleting destructor'(CProjectedShadow *this, char a2)
{
  CProjectedShadow::~CProjectedShadow(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
