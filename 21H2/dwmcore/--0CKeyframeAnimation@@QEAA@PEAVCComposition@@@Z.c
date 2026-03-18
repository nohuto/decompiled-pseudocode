/*
 * XREFs of ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180046514
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801F6D64 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ @ 0x18022DBD8 (-AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x18025F444 (--0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x180049C0C (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::CKeyframeAnimation(
        CKeyframeAnimation *this,
        struct CComposition *a2)
{
  CKeyframeAnimation *result; // rax

  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  *((_QWORD *)this + 49) = (char *)this + 424;
  *((_QWORD *)this + 50) = (char *)this + 424;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 102) = 2;
  *(_QWORD *)((char *)this + 412) = 2LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 136) = 1065353216;
  *((_DWORD *)this + 130) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 564) = 0LL;
  *(_QWORD *)((char *)this + 524) = 0LL;
  return result;
}
