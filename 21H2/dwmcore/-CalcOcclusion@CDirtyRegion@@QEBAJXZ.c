/*
 * XREFs of ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800FE59C
 * Callers:
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800FE630 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C2FEC (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x18029A220 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800B99FC (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800FE910 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirtyRegion::CalcOcclusion(CDirtyRegion *this)
{
  unsigned int v2; // ebx
  struct CComposition *CurrentFrameId; // rax
  CDirtyRegion *v4; // rcx
  __int64 v5; // r11
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD *, char *); // rbx
  _QWORD *DirtyRects; // rax
  int v9; // eax
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  CurrentFrameId = GetCurrentFrameId();
  if ( *((struct CComposition **)v4 + 1) == CurrentFrameId )
  {
    if ( !CDirtyRegion::IsEmpty(v4) && *((_QWORD *)this + 5) != v5 )
    {
      v6 = *(_QWORD *)this;
      v7 = *(__int64 (__fastcall **)(__int64, _QWORD *, char *))(**(_QWORD **)this + 192LL);
      DirtyRects = CDirtyRegion::GetDirtyRects((__int64)this, v12);
      v9 = v7(v6, DirtyRects, (char *)this + 16);
      v2 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x42Cu);
    }
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v4, 0LL, 0LL, -2003292412, 0x431u);
  }
  return v2;
}
