/*
 * XREFs of ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800956F0
 * Callers:
 *     ?PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x18001063C (-PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x18001346C (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009759C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180098620 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
        unsigned int *a1,
        _OWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned __int64 v8; // rsi
  HANDLE ProcessHeap; // rax
  void *v10; // rdi
  unsigned __int64 v11; // rax
  void *v12; // rbp
  int v13; // r9d
  HANDLE v14; // rax
  HANDLE v15; // rax

  v2 = *a1;
  if ( *a1 == a1[1] )
  {
    v8 = 2LL * a1[1];
    if ( v8 > 0xFFFFFFFF )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, -2147024362, 0x64u);
      return v6;
    }
    if ( (unsigned int)v8 <= 8 )
      LODWORD(v8) = 8;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v8 <= 0x10 )
    {
      v13 = -2147024809;
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v10 = HeapAlloc(ProcessHeap, 0, 16LL * (unsigned int)v8);
      if ( v10 )
      {
        v11 = 16LL * *a1;
        if ( v11 > 0xFFFFFFFF )
        {
          v6 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, -2147024362, 0x6Du);
          v15 = GetProcessHeap();
          HeapFree(v15, 0, v10);
          return v6;
        }
        memcpy_0(v10, *((const void **)a1 + 2), (unsigned int)v11);
        v12 = (void *)*((_QWORD *)a1 + 2);
        if ( v12 )
        {
          v14 = GetProcessHeap();
          HeapFree(v14, 0, v12);
        }
        v2 = *a1;
        *((_QWORD *)a1 + 2) = v10;
        a1[1] = v8;
        goto LABEL_2;
      }
      v13 = -2147024882;
    }
    v6 = v13;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, v13, 0x6Bu);
    return v6;
  }
LABEL_2:
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * v2) = *a2;
  v5 = a1[6];
  if ( v5 <= ++*a1 )
    v5 = *a1;
  a1[6] = v5;
  return 0;
}
