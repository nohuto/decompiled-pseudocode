/*
 * XREFs of ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x180256560
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180253D68 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1CMotion@@QEAA@XZ @ 0x180255D94 (--1CMotion@@QEAA@XZ.c)
 */

CInteractionTrackerScaleAnimation *__fastcall CInteractionTrackerScaleAnimation::`vector deleting destructor'(
        CInteractionTrackerScaleAnimation *this,
        char a2)
{
  CMotion::~CMotion((CInteractionTrackerScaleAnimation *)((char *)this + 456));
  CScrollAnimation::~CScrollAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
