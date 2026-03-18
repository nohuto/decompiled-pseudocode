/*
 * XREFs of ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180061450
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowNode@@MEAA@XZ @ 0x180061494 (--1CWindowNode@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CWindowNode *__fastcall CWindowNode::`scalar deleting destructor'(CWindowNode *this, char a2)
{
  CWindowNode::~CWindowNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x3A0uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
