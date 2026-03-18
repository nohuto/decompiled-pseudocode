/*
 * XREFs of ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180253D20
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18021A620 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180255D48 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x180049C0C (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CScrollAnimation *__fastcall CScrollAnimation::CScrollAnimation(CScrollAnimation *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CScrollAnimation::`vftable';
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 106) = 0;
  return this;
}
