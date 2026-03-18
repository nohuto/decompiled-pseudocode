/*
 * XREFs of ??_GCDebugVisualImage@@UEAAPEAXI@Z @ 0x1801FF790
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800637AC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CDebugVisualImage *__fastcall CDebugVisualImage::`scalar deleting destructor'(CDebugVisualImage *this, char a2)
{
  CCachedVisualImage::~CCachedVisualImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
