/*
 * XREFs of ??_GCBackdropVisualImage@@UEAAPEAXI@Z @ 0x1800D41E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x1800D4224 (--1CBackdropVisualImage@@UEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CBackdropVisualImage *__fastcall CBackdropVisualImage::`scalar deleting destructor'(
        CBackdropVisualImage *this,
        char a2)
{
  CBackdropVisualImage::~CBackdropVisualImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x808uLL);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
