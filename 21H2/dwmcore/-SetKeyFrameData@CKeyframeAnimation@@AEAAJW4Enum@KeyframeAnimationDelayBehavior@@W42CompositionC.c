/*
 * XREFs of ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18004D7F8
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180046768 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1802223E0 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18004D958 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEAUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x18004F928 (-DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Composit.c)
 *     ??$?4U?$default_delete@VKeyframeSequence@@@std@@$0A@@?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004F990 (--$-4U-$default_delete@VKeyframeSequence@@@std@@$0A@@-$unique_ptr@VKeyframeSequence@@U-$default_.c)
 *     ??0KeyframeSequence@@QEAA@I@Z @ 0x18004F9D0 (--0KeyframeSequence@@QEAA@I@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18006FCEC (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CKeyframeAnimation::SetKeyFrameData(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  KeyframeSequence *v7; // rax
  KeyframeSequence *v8; // rbx
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rbp
  float v13; // xmm6_4
  int v14; // r15d
  __int64 v15; // rcx
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-48h]
  KeyframeSequence *v19; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v21; // [rsp+78h] [rbp+10h] BYREF

  if ( a2 > 1 )
  {
    v11 = -2003303421;
    v17 = -2003303421;
    v18 = 577;
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 560) = a2;
  v7 = (KeyframeSequence *)DefaultHeap::AllocClear(0x90uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v19 = KeyframeSequence::KeyframeSequence(v7, *(_DWORD *)(a1 + 360));
  std::unique_ptr<KeyframeSequence>::operator=<std::default_delete<KeyframeSequence>,0>(a1 + 384, &v19);
  v8 = v19;
  if ( v19 )
  {
    KeyframeSequence::RemoveAllKeyFrames(v19);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)v8 + 64);
    DefaultHeap::Free(v8);
  }
  v9 = CKeyframeAnimation::DetermineCoordinateSpace(*(unsigned int *)(a1 + 152), a3, &v21);
  v11 = v9;
  if ( v9 < 0 )
  {
    v18 = 590;
LABEL_17:
    v17 = v9;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v17, v18, 0LL);
    return v11;
  }
  v12 = 0LL;
  v13 = 0.0;
  if ( *(_DWORD *)(a1 + 360) )
  {
    v14 = v21;
    while ( 1 )
    {
      if ( (_DWORD)v12 )
      {
        v15 = (unsigned int)v12;
        v13 = fmaxf(v13 + 0.001, *(float *)(a4 + 48 * v12));
      }
      else
      {
        v13 = 0.0;
        v15 = 0LL;
      }
      v9 = CKeyframeAnimation::AddKeyframeData(a1, (unsigned int)v12, v10, a4 + 48 * v15, v14);
      v11 = v9;
      if ( v9 < 0 )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 360) )
        goto LABEL_12;
    }
    v18 = 615;
    goto LABEL_17;
  }
LABEL_12:
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_DWORD *)(a1 + 524) = 0;
  *(_DWORD *)(a1 + 552) = 0;
  *(_DWORD *)(a1 + 556) = 0;
  return v11;
}
