/*
 * XREFs of ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800CA070
 * Callers:
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18002109C (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 * Callees:
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x180007220 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x180017298 (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800374C0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003BF94 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18003C064 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18003C0BC (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180080028 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D339C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x180179168 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x180179198 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::Pop(CDrawingContext *this)
{
  int *v1; // rsi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v1 = (int *)((char *)this + 360);
  v3 = CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
         (int *)this + 90,
         &v12);
  v6 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x1179u, 0LL);
  if ( (int)v12 > 7 )
  {
    switch ( (_DWORD)v12 )
    {
      case 8:
        CDrawingContext::PopAlpha((CDrawingContext *)((char *)this - 16), 1);
        break;
      case 9:
        CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)((char *)this - 16), 1);
        break;
      case 0xA:
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, &v12);
        v10 = CLightStack::Pop((CDrawingContext *)((char *)this + 584));
        v6 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x178Bu, 0LL);
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v6, 0x119Eu, 0LL);
        break;
      case 0xB:
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v1, &v12);
        --*((_DWORD *)this + 212);
        break;
    }
  }
  else if ( (int)v12 >= 6 )
  {
    v8 = CDrawingContext::PopLayer((CDrawingContext *)((char *)this - 16));
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x118Eu, 0LL);
  }
  else
  {
    switch ( (_DWORD)v12 )
    {
      case 1:
        goto LABEL_12;
      case 2:
        CDrawingContext::PopCpuClip((CDrawingContext *)((char *)this - 16));
        return (unsigned int)v6;
      case 3:
LABEL_12:
        CDrawingContext::PopGpuClipRectInternal((CDrawingContext *)((char *)this - 16), 1, v5);
        break;
      case 4:
        CDrawingContext::PopClippingScope((CDrawingContext *)((char *)this - 16), 1);
        break;
      case 5:
        CDrawingContext::PopTransformInternal((CDrawingContext *)((char *)this - 16), 1);
        break;
    }
  }
  return (unsigned int)v6;
}
