/*
 * XREFs of ??_ECVirtualMonitorCaptureRenderTarget@@MEAAPEAXI@Z @ 0x18019FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x1801C5AD0 (--1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ.c)
 */

CVirtualMonitorCaptureRenderTarget *__fastcall CVirtualMonitorCaptureRenderTarget::`vector deleting destructor'(
        CVirtualMonitorCaptureRenderTarget *this,
        char a2)
{
  CVirtualMonitorCaptureRenderTarget::~CVirtualMonitorCaptureRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
