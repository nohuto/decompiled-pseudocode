/*
 * XREFs of ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180097B50
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801AE784 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ @ 0x1801DFF28 (-AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ??0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x18020DDB4 (--0CScrollKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18009B46C (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::CKeyframeAnimation(
        CKeyframeAnimation *this,
        struct CComposition *a2)
{
  CKeyframeAnimation *result; // rax

  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CKeyframeAnimation::`vftable';
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = (char *)this + 400;
  *((_QWORD *)this + 47) = (char *)this + 400;
  *((_DWORD *)this + 96) = 2;
  *(_QWORD *)((char *)this + 388) = 2LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 128) = 1065353216;
  *((_DWORD *)this + 122) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 532) = 0LL;
  *(_QWORD *)((char *)this + 492) = 0LL;
  return result;
}
