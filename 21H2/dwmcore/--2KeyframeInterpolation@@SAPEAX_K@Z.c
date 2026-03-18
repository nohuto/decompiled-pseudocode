/*
 * XREFs of ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x18004D79C
 * Callers:
 *     ?Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpolation@@@Z @ 0x18004D494 (-Create@StepInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@HHH_N1PEAPEAVKeyframeInterpola.c)
 *     ?Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation@@@Z @ 0x18004D5E8 (-Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation.c)
 *     ?Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInterpolation@@@Z @ 0x18004D660 (-Create@CubicBezierInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@MMMMPEAPEAVKeyframeInte.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1800C6AC0 (-Initialize@CDesktopTree@@MEAAJXZ.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x1800D48AC (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_SETW.c)
 *     ?Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x1800F0BFC (-Create@XamlPowerInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasing.c)
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x18022D114 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x180256DD4 (-Create@XamlBackInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 *     ?Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x180256EAC (-Create@XamlBounceInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x180256FA4 (-Create@XamlCircleInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasin.c)
 *     ?Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@HMPEAPEAVKeyframeInterpolation@@@Z @ 0x180257044 (-Create@XamlElasticInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasi.c)
 *     ?Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@MPEAPEAVKeyframeInterpolation@@@Z @ 0x180257120 (-Create@XamlExponentialInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimation.c)
 *     ?Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x1802571F4 (-Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingM.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void *__fastcall KeyframeInterpolation::operator new(unsigned __int64 a1)
{
  void *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(a1);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
