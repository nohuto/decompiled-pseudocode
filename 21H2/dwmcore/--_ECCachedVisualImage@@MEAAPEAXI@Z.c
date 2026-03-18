/*
 * XREFs of ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x1800628B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800637AC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::`vector deleting destructor'(CCachedVisualImage *this, char a2)
{
  CCachedVisualImage::~CCachedVisualImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x738uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
