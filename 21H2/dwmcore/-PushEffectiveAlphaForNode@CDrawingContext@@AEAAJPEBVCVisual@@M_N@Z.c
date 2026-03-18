/*
 * XREFs of ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x1800DF9B0
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180098620 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1801D9F74 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18008B404 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x18008F04C (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800D5558 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 */

__int64 __fastcall CDrawingContext::PushEffectiveAlphaForNode(
        CDrawingContext *this,
        const struct CVisual *a2,
        float a3,
        char a4)
{
  char v4; // bp
  unsigned int *v5; // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF
  float v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  v4 = 0;
  v5 = (unsigned int *)((char *)this + 336);
  if ( a4 )
  {
    *((_QWORD *)&v13 + 1) = a2;
    LODWORD(v13) = 8;
    v7 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(v5, &v13);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x1141u);
      return v9;
    }
    v4 = 1;
  }
  v10 = CWatermarkStack<float,64,2,10>::Push((unsigned int *)this + 776, &v14);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x1145u);
    if ( v4 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)v5, 0LL);
  }
  return v9;
}
