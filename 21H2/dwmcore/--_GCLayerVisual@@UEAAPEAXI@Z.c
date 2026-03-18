/*
 * XREFs of ??_GCLayerVisual@@UEAAPEAXI@Z @ 0x1800F4ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CLayerVisual@@UEAA@XZ @ 0x1800F4F14 (--1CLayerVisual@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CLayerVisual *__fastcall CLayerVisual::`scalar deleting destructor'(CLayerVisual *this, char a2)
{
  CLayerVisual::~CLayerVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x2F8uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
