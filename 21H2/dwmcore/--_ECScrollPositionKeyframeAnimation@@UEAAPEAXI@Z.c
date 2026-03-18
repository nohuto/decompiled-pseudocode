/*
 * XREFs of ??_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z @ 0x180255210
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x18025F4D4 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 */

CScrollPositionKeyframeAnimation *__fastcall CScrollPositionKeyframeAnimation::`vector deleting destructor'(
        CScrollPositionKeyframeAnimation *this,
        char a2)
{
  CScrollKeyframeAnimation::~CScrollKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
