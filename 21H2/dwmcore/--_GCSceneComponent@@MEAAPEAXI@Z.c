/*
 * XREFs of ??_GCSceneComponent@@MEAAPEAXI@Z @ 0x18025BA30
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSceneComponent@@MEAA@XZ @ 0x18025B9D8 (--1CSceneComponent@@MEAA@XZ.c)
 */

CSceneComponent *__fastcall CSceneComponent::`scalar deleting destructor'(CSceneComponent *this, char a2)
{
  CSceneComponent::~CSceneComponent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
