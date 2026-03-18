/*
 * XREFs of ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800BCC70
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800099AC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x18000C9B4 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18003EEB0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x180055710 (-GenerateEffectInput@CBackdropVisualImage@@QEAA-AUEffectInput@@XZ.c)
 *     ?PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z @ 0x1800BA398 (-PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x1801133BE (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801B2258 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18023A940 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802524EC (-RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?attach@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1800BCCE8 (-attach@-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVIBitmapReali.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall CDrawListBitmap::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v5 = *a1;
  *a1 = v2;
  if ( v5 )
  {
    v8 = *(int *)(*(_QWORD *)(v5 + 8) + 4LL) + v5 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v6 = a2[1];
  a2[1] = 0LL;
  wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::attach(a1 + 1, v6);
  *((_BYTE *)a1 + 16) = *((_BYTE *)a2 + 16);
  return a1;
}
