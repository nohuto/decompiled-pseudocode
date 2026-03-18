/*
 * XREFs of ?RecordContentInfo@CDrawListBitmap@@QEBAXPEAVCDrawingContext@@@Z @ 0x18003AE50
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18003B0CC (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801A3BF0 (-UpdateBitmaps@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateBitmaps@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x180267080 (-UpdateBitmaps@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEAAXPEAVIBitmapResource@@@Z @ 0x18004C678 (-RecordBitmapResourceInfo@CDrawingContext@@QEAAXPEAVIBitmapResource@@@Z.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z @ 0x18004EBA4 (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z @ 0x18004ECB8 (-GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z.c)
 */

void __fastcall CDrawListBitmap::RecordContentInfo(CDrawListBitmap *this, struct CDrawingContext *a2)
{
  __int64 v4; // xmm1_8
  struct IBitmapResource *v5; // rdx
  struct IBitmapRealization *v6; // [rsp+30h] [rbp+8h] BYREF

  *((_OWORD *)this + 1) = *(_OWORD *)((char *)a2 + 56);
  v4 = *((_QWORD *)a2 + 9);
  v5 = *(struct IBitmapResource **)this;
  *((_QWORD *)this + 4) = v4;
  if ( v5 )
    CDrawingContext::RecordBitmapResourceInfo(a2, v5);
  v6 = 0LL;
  if ( (int)CDrawListBitmap::GetCurrentRealization(this, &v6) >= 0 )
    CDrawingContext::RecordBitmapRealizationInfo(a2, v6);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v6);
}
