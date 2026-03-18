/*
 * XREFs of ??_GCSceneNode@@MEAAPEAXI@Z @ 0x18023DFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSceneNode@@MEAA@XZ @ 0x18023DEE8 (--1CSceneNode@@MEAA@XZ.c)
 */

CSceneNode *__fastcall CSceneNode::`scalar deleting destructor'(CSceneNode *this, char a2)
{
  CSceneNode::~CSceneNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
