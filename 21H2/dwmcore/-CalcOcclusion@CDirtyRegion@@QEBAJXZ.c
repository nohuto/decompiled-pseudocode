/*
 * XREFs of ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800D79D8
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ED7C4 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLocalAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EE2F0 (-Render@CLocalAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EE8CC (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x180257EA4 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800900DC (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180090244 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800D7A7C (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirtyRegion::CalcOcclusion(CDirtyRegion *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64, char *); // rbx
  __int64 OptimizedDirtyRects; // rax
  int v8; // eax
  __int64 v9; // rcx
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 1) == GetCurrentFrameId() )
  {
    if ( !CDirtyRegion::IsEmpty(this) && *((_QWORD *)this + 4) != v4 )
    {
      v5 = *(_QWORD *)this;
      v6 = *(__int64 (__fastcall **)(__int64, __int64, char *))(**(_QWORD **)this + 216LL);
      OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects(this, v11);
      v8 = v6(v5, OptimizedDirtyRects, (char *)this + 16);
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x385u, 0LL);
    }
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292412, 0x38Au, 0LL);
  }
  return v2;
}
