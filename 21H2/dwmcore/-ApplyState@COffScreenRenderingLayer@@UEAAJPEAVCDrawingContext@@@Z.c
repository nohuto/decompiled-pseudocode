/*
 * XREFs of ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800D1A00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x18008F04C (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800D1C04 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x1801B2D58 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801D8424 (-RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall COffScreenRenderingLayer::ApplyState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  char v4; // bp
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  __int64 v15; // rcx
  int v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = (int)FLOAT_1_0;
  v4 = 0;
  v5 = CWatermarkStack<float,64,2,10>::Push((unsigned int *)a2 + 776, &v16);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x1145u);
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v7, 0x3Du);
  }
  else
  {
    v4 = 1;
    v8 = CExternalLayer::ApplyRenderTarget(this, a2);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v10 = *((_QWORD *)a2 + 5);
      v11 = 0LL;
      v12 = *(_DWORD *)(v10 + 368);
      if ( v12 )
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 344) + 8LL * (unsigned int)(v12 - 1));
      *(_BYTE *)(v11 + 74) = 1;
      v13 = *((_QWORD *)a2 + 993);
      *((_QWORD *)a2 + 993) = 0LL;
      *((_QWORD *)this + 5) = v13;
      return v7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x44u);
  }
  CExternalLayer::RestoreRenderTarget(this, a2);
  if ( v4 )
    CDrawingContext::PopAlpha(a2, 0);
  return v7;
}
