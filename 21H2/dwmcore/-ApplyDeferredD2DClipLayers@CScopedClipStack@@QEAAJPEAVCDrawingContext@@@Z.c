/*
 * XREFs of ?ApplyDeferredD2DClipLayers@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800977D4
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180096690 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x180097784 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800DC340 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CScopedClipStack::ApplyDeferredD2DClipLayers(CScopedClipStack *this, struct CDrawingContext *a2)
{
  unsigned int v2; // ebp
  int v3; // edi
  unsigned int v5; // edx
  unsigned int i; // esi
  __int64 v8; // r9
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax

  v2 = 0;
  v3 = 0;
  v5 = *((_DWORD *)this + 538);
  for ( i = *(_DWORD *)(88LL * (unsigned int)(*((_DWORD *)this + 6) - 1) + *(_QWORD *)this + 12); i < v5; ++i )
  {
    v10 = CD2DLayer::ApplyState(*(CD2DLayer **)(*((_QWORD *)this + 266) + 8LL * i), a2);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x1F5u);
      v5 = *((_DWORD *)this + 538);
      break;
    }
    v5 = *((_DWORD *)this + 538);
    ++v3;
  }
  v8 = (unsigned int)(v3 + *(_DWORD *)(88LL * (unsigned int)(*((_DWORD *)this + 6) - 1) + *(_QWORD *)this + 12));
  while ( (unsigned int)v8 < v5 )
  {
    v12 = *((_QWORD *)this + 266);
    v13 = (unsigned int)(v8 - v3);
    v14 = *(_QWORD *)(v12 + 8 * v8);
    v8 = (unsigned int)(v8 + 1);
    *(_QWORD *)(v12 + 8 * v13) = v14;
    v5 = *((_DWORD *)this + 538);
  }
  result = v2;
  *((_DWORD *)this + 538) = v5 - v3;
  return result;
}
