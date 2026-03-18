/*
 * XREFs of ??_GCSceneWorld@@MEAAPEAXI@Z @ 0x180252E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSceneWorld@@MEAA@XZ @ 0x180252D2C (--1CSceneWorld@@MEAA@XZ.c)
 */

CSceneWorld *__fastcall CSceneWorld::`scalar deleting destructor'(CSceneWorld *this, char a2)
{
  CSceneWorld::~CSceneWorld(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
