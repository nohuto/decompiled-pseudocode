/*
 * XREFs of ??_GCRenderTarget@@MEAAPEAXI@Z @ 0x18019F630
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderTarget@@MEAA@XZ @ 0x18001D420 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CRenderTarget *__fastcall CRenderTarget::`scalar deleting destructor'(CRenderTarget *this, char a2)
{
  CRenderTarget::~CRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
