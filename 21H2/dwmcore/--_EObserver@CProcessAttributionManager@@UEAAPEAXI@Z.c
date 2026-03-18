/*
 * XREFs of ??_EObserver@CProcessAttributionManager@@UEAAPEAXI@Z @ 0x1801AE880
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x1801AE7BC (--1Observer@CProcessAttributionManager@@UEAA@XZ.c)
 */

CProcessAttributionManager **__fastcall CProcessAttributionManager::Observer::`vector deleting destructor'(
        CProcessAttributionManager **this,
        char a2)
{
  CProcessAttributionManager::Observer::~Observer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
