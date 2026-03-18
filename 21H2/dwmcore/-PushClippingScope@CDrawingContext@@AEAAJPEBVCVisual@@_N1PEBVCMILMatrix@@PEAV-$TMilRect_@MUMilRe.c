/*
 * XREFs of ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B3174
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnterClippingScope@CScopedClipStack@@QEAAJ_N0PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007EBA0 (-EnterClippingScope@CScopedClipStack@@QEAAJ_N0PEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18008B404 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x180097784 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800D5558 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 */

__int64 __fastcall CDrawingContext::PushClippingScope(__int64 a1, __int64 a2, char a3, char a4, __int64 a5, _OWORD *a6)
{
  char v6; // r14
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0;
  if ( a4 || (v11 = CDrawingContext::FlushAllDeferredClipping((CDrawingContext *)a1), v13 = v11, v11 >= 0) )
  {
    if ( a2 )
    {
      LODWORD(v19) = 4;
      *((_QWORD *)&v19 + 1) = a2;
      v14 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)(a1 + 336), &v19);
      v13 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0xBD0u);
        return v13;
      }
      v6 = 1;
    }
    v16 = CScopedClipStack::EnterClippingScope(a1 + 864, a3, a4 ^ 1u, a5, a6);
    v13 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0xBD7u);
      if ( v6 )
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)(a1 + 336), 0LL);
    }
    else if ( a4 )
    {
      *(_BYTE *)(a1 + 8042) = 0;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0xBCAu);
  }
  return v13;
}
