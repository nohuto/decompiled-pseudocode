/*
 * XREFs of ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x18019FA30
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CTransformGroup@@MEAA@XZ @ 0x180242BCC (--1CTransformGroup@@MEAA@XZ.c)
 */

CTransformGroup *__fastcall CTransformGroup::`scalar deleting destructor'(CTransformGroup *this, char a2)
{
  CTransformGroup::~CTransformGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
