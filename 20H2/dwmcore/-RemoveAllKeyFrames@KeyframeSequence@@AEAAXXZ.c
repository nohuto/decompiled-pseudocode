/*
 * XREFs of ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x180024494
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180024324 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800249F8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180025458 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ??4?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002727C (--4-$unique_ptr@VKeyframeSequence@@U-$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801D0AC0 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18009F650 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4C64 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E36F4 (--_V@YAXPEAX_K@Z.c)
 */

void __fastcall KeyframeSequence::RemoveAllKeyFrames(KeyframeSequence *this)
{
  __int64 i; // rbp
  __int64 v3; // rbx
  char *v4; // rcx
  char *v5; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + 13);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v3 + 8 + 24 * i);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v3 + 16 + 24 * i);
  }
  v4 = (char *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    v5 = v4 - 8;
    `vector destructor iterator'(
      v4,
      0x18uLL,
      *((_QWORD *)v4 - 1),
      (void (*)(void *))KeyframeSequence::Keyframe::~Keyframe);
    operator delete[](v5, 24LL * *(_QWORD *)v5 + 8);
  }
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_BYTE *)this + 140) &= ~4u;
}
