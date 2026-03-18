/*
 * XREFs of ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapResource@@PEBVCDrawingContext@@_N@Z @ 0x180035800
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180015A60 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x1800356C8 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180035E30 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180046610 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M@Z @ 0x1800700DC (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801BF640 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C81B0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801D6590 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801EB700 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x180032574 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     ?EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z @ 0x18004A720 (-EnsureDeviceResource@CDrawListBitmap@@QEBAJPEBVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::Initialize(
        CDrawListBitmap *this,
        struct IBitmapResource *a2,
        const struct CDrawingContext *a3)
{
  bool v6; // bp
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx

  v6 = (*(unsigned __int8 (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)a2 + 16LL))(a2) != 0;
  wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=((__int64 *)this, (__int64)a2);
  v7 = CDrawListBitmap::EnsureDeviceResource(this, a3);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802DC558, 2u, v7, 0x27u, 0LL);
  else
    *((_BYTE *)this + 40) = v6;
  if ( v9 < 0 )
  {
    v11 = *(_QWORD *)this;
    *(_QWORD *)this = 0LL;
    if ( v11 )
    {
      v12 = v11 + 8 + *(int *)(*(_QWORD *)(v11 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return (unsigned int)v9;
}
