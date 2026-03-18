/*
 * XREFs of ??_GVisualCaptureBitsResponse@@UEAAPEAXI@Z @ 0x180026BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x180026D38 (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

VisualCaptureBitsResponse *__fastcall VisualCaptureBitsResponse::`scalar deleting destructor'(
        VisualCaptureBitsResponse *this,
        char a2)
{
  VisualCaptureBitsResponse::~VisualCaptureBitsResponse(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x6B0uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
