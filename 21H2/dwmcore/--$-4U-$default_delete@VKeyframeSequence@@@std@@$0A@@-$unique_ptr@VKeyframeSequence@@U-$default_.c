/*
 * XREFs of ??$?4U?$default_delete@VKeyframeSequence@@@std@@$0A@@?$unique_ptr@VKeyframeSequence@@U?$default_delete@VKeyframeSequence@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004F990
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18004D7F8 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18006FCEC (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

KeyframeSequence **__fastcall std::unique_ptr<KeyframeSequence>::operator=<std::default_delete<KeyframeSequence>,0>(
        KeyframeSequence **a1,
        KeyframeSequence **a2)
{
  KeyframeSequence *v3; // rax
  KeyframeSequence *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      KeyframeSequence::RemoveAllKeyFrames(v4);
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)v4 + 64);
      DefaultHeap::Free(v4);
    }
  }
  return a1;
}
