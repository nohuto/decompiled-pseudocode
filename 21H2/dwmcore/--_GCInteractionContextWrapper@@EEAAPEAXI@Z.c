/*
 * XREFs of ??_GCInteractionContextWrapper@@EEAAPEAXI@Z @ 0x18002BDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInteractionContextWrapper@@EEAA@XZ @ 0x18002BE34 (--1CInteractionContextWrapper@@EEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::`scalar deleting destructor'(
        CInteractionContextWrapper *this,
        char a2)
{
  CInteractionContextWrapper::~CInteractionContextWrapper(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x278uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
