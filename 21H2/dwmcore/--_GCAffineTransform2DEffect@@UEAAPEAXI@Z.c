/*
 * XREFs of ??_GCAffineTransform2DEffect@@UEAAPEAXI@Z @ 0x18019E920
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18019DC44 (--1CFilterEffect@@MEAA@XZ.c)
 */

CAffineTransform2DEffect *__fastcall CAffineTransform2DEffect::`scalar deleting destructor'(
        CAffineTransform2DEffect *this,
        char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
