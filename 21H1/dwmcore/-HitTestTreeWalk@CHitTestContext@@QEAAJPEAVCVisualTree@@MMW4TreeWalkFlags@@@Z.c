/*
 * XREFs of ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x180035438
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001E3A8 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180034D74 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18007B750 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800B6434 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 */

__int64 __fastcall CHitTestContext::HitTestTreeWalk(__int64 a1, __int64 a2, float a3, float a4, int a5)
{
  __int64 v5; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  v5 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = v5;
  *(_DWORD *)(a1 + 208) = a5;
  *(float *)(a1 + 88) = a3;
  *(float *)(a1 + 92) = a4;
  CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push(
    a1 + 144,
    &CRenderState::sc_DefaultBackfaceVisibility);
  *(_QWORD *)(a1 + 72) = a2;
  v8 = CVisualTreeIterator::WalkSubtree<CHitTestContext>(a1 + 8, *(_QWORD *)(a2 + 56), a1);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1AEu, 0LL);
  return v10;
}
