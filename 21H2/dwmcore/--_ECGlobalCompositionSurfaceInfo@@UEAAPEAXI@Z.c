/*
 * XREFs of ??_ECGlobalCompositionSurfaceInfo@@UEAAPEAXI@Z @ 0x1800C75F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x1800C7640 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800C7E3C (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CGlobalCompositionSurfaceInfo *__fastcall CGlobalCompositionSurfaceInfo::`vector deleting destructor'(
        CGlobalCompositionSurfaceInfo *this,
        char a2)
{
  CGlobalCompositionSurfaceInfo::CBindInfo::~CBindInfo((CGlobalCompositionSurfaceInfo *)((char *)this + 88));
  CCompositionSurfaceInfo::~CCompositionSurfaceInfo(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x190uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
