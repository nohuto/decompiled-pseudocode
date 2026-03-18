/*
 * XREFs of ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008103C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z @ 0x180082818 (-Enter@CDisableCPUClipScope@CDrawingContext@@QEAAJPEAV2@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18003C0BC (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x180066574 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180080F34 (-EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x1800810EC (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::PushClippingScope(int *a1, __int64 a2, char a3, __int128 *a4, __int64 a5)
{
  char v9; // si
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0;
  v10 = CDrawingContext::FlushAllDeferredClipping((CDrawingContext *)a1);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xB47u, 0LL);
LABEL_10:
    if ( v9 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(a1 + 94, 0LL);
    return v12;
  }
  if ( a2 )
  {
    LODWORD(v18) = 4;
    *((_QWORD *)&v18 + 1) = a2;
    v16 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((unsigned int *)a1 + 94, &v18);
    v12 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xB4Cu, 0LL);
      return v12;
    }
    v9 = 1;
  }
  v13 = CScopedClipStack::EnterClippingScope((CScopedClipStack *)(a1 + 234), a3, a4, a5);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xB52u, 0LL);
    goto LABEL_10;
  }
  return v12;
}
