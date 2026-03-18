/*
 * XREFs of ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x180210774
 * Callers:
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x1801CCBB0 (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1802065CC (--0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180092FE0 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 */

CScrollKeyframeAnimation *__fastcall CScrollKeyframeAnimation::CScrollKeyframeAnimation(
        CScrollKeyframeAnimation *this,
        struct CComposition *a2,
        struct CInteractionTracker *a3)
{
  CScrollKeyframeAnimation *result; // rax

  CKeyframeAnimation::CKeyframeAnimation(this, a2);
  *((_QWORD *)this + 68) = a3;
  *(_QWORD *)this = &CScrollKeyframeAnimation::`vftable';
  memset_0((char *)this + 552, 0, 0x40uLL);
  *((_QWORD *)this + 77) = 0LL;
  *((_DWORD *)this + 156) = 18;
  *((_BYTE *)this + 628) = 0;
  memset_0((char *)this + 632, 0, 0x40uLL);
  *((_QWORD *)this + 87) = 0LL;
  result = this;
  *((_DWORD *)this + 176) = 18;
  *((_BYTE *)this + 708) = 0;
  *((_DWORD *)this + 51) = 88;
  return result;
}
