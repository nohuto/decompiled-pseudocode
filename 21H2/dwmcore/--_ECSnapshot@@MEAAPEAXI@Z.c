/*
 * XREFs of ??_ECSnapshot@@MEAAPEAXI@Z @ 0x18019F8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CSnapshot@@MEAA@XZ @ 0x18019DD44 (--1CSnapshot@@MEAA@XZ.c)
 */

CSnapshot *__fastcall CSnapshot::`vector deleting destructor'(CSnapshot *this, char a2)
{
  CSnapshot::~CSnapshot(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
