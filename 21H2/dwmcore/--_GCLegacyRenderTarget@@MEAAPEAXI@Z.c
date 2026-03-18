/*
 * XREFs of ??_GCLegacyRenderTarget@@MEAAPEAXI@Z @ 0x18001BD30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x18001C54C (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CLegacyRenderTarget *__fastcall CLegacyRenderTarget::`scalar deleting destructor'(CLegacyRenderTarget *this, char a2)
{
  CLegacyRenderTarget::~CLegacyRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x4910uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
