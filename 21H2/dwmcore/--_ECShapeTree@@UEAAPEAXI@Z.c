/*
 * XREFs of ??_ECShapeTree@@UEAAPEAXI@Z @ 0x180040D40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CContainerVectorShape@@MEAA@XZ @ 0x1800431C4 (--1CContainerVectorShape@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CShapeTree *__fastcall CShapeTree::`vector deleting destructor'(CShapeTree *this, char a2)
{
  CContainerVectorShape::~CContainerVectorShape(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xA8uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
