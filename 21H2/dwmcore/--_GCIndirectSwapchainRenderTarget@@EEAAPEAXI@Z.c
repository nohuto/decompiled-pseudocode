/*
 * XREFs of ??_GCIndirectSwapchainRenderTarget@@EEAAPEAXI@Z @ 0x18019EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x1801C6480 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 */

CIndirectSwapchainRenderTarget *__fastcall CIndirectSwapchainRenderTarget::`scalar deleting destructor'(
        CIndirectSwapchainRenderTarget *this,
        char a2)
{
  CIndirectSwapchainRenderTarget::~CIndirectSwapchainRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
