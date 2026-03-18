/*
 * XREFs of ??_ECGlobalInputManager@@UEAAPEAXI@Z @ 0x1802722D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CGlobalInputManager@@UEAA@XZ @ 0x180272278 (--1CGlobalInputManager@@UEAA@XZ.c)
 */

CGlobalInputManager *__fastcall CGlobalInputManager::`vector deleting destructor'(CGlobalInputManager *this, char a2)
{
  CGlobalInputManager::~CGlobalInputManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
