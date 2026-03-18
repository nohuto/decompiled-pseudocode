/*
 * XREFs of ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18006FCEC
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180046768 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18004D7F8 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ??$?4U?$default_delete@VKeyframeSequence@@@std@@$0A@@?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004F990 (--$-4U-$default_delete@VKeyframeSequence@@@std@@$0A@@-$unique_ptr@VKeyframeSequence@@U-$default_.c)
 *     ??1KeyframeSequence@@QEAA@XZ @ 0x1802222B4 (--1KeyframeSequence@@QEAA@XZ.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1802223E0 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008EF8C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5C3C (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D75D0 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1801012A0 (--_V@YAXPEAX_K@Z.c)
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
    Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(v3 + 8 + 24 * i);
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
    operator delete[](v5);
  }
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_BYTE *)this + 140) &= ~4u;
}
