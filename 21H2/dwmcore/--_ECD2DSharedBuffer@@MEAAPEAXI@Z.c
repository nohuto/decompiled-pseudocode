/*
 * XREFs of ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x18000C6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DSharedBuffer@@MEAA@XZ @ 0x18000C734 (--1CD2DSharedBuffer@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CD2DSharedBuffer *__fastcall CD2DSharedBuffer::`vector deleting destructor'(CD2DSharedBuffer *this, char a2)
{
  CD2DSharedBuffer::~CD2DSharedBuffer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x28uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
