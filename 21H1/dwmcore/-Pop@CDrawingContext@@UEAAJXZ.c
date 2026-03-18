/*
 * XREFs of ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800C3530
 * Callers:
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x1800214CC (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18000E334 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x180017958 (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180029D10 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18007183C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18007190C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180071964 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800CB60C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800CE830 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18017BD78 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18017BDA8 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this)
{
  int *v1; // rsi
  int v3; // eax
  __int64 v4; // rcx
  int v5; // edi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v1 = (int *)((char *)this + 360);
  v3 = CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
         (int *)this + 90,
         &v11);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x1179u, 0LL);
  if ( (int)v11 > 7 )
  {
    switch ( (_DWORD)v11 )
    {
      case 8:
        CDrawingContext::PopAlpha((CDrawingContext *)((char *)this - 16), 1);
        break;
      case 9:
        CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)((char *)this - 16), 1);
        break;
      case 0xA:
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, &v11);
        v9 = CLightStack::Pop((CDrawingContext *)((char *)this + 584));
        v5 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x178Bu, 0LL);
        if ( v5 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v5, 0x119Eu, 0LL);
        break;
      case 0xB:
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, &v11);
        --*((_DWORD *)this + 212);
        break;
    }
  }
  else if ( (int)v11 >= 6 )
  {
    v7 = CDrawingContext::PopLayer((CDrawingContext *)((char *)this - 16));
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x118Eu, 0LL);
  }
  else
  {
    switch ( (_DWORD)v11 )
    {
      case 1:
        goto LABEL_12;
      case 2:
        CDrawingContext::PopCpuClip((CDrawingContext *)((char *)this - 16));
        return (unsigned int)v5;
      case 3:
LABEL_12:
        CDrawingContext::PopGpuClipRectInternal((CDrawingContext *)((char *)this - 16), 1);
        break;
      case 4:
        CDrawingContext::PopClippingScope((CDrawingContext *)((char *)this - 16), 1);
        break;
      case 5:
        CDrawingContext::PopTransformInternal((CDrawingContext *)((char *)this - 16), 1);
        break;
    }
  }
  return (unsigned int)v5;
}
