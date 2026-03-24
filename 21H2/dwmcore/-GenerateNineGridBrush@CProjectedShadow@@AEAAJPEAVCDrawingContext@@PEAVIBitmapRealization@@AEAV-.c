/*
 * XREFs of ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x180020338
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180008E98 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x18001D5E4 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-$.c)
 *     ?SetCanUseSurfaceTransform@CNineGridBrush@@QEAAX_N@Z @ 0x180020010 (-SetCanUseSurfaceTransform@CNineGridBrush@@QEAAX_N@Z.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002D2C0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F358 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetInsetProperty@CNineGridBrush@@QEAAXKM@Z @ 0x1800CB5DC (-SetInsetProperty@CNineGridBrush@@QEAAXKM@Z.c)
 *     ??0CNineGridBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800D32D4 (--0CNineGridBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x1800D5034 (-SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::GenerateNineGridBrush(
        __int64 a1,
        __int64 a2,
        struct IBitmapRealization *a3,
        __int64 a4,
        CNineGridBrush **a5)
{
  CNineGridBrush **v5; // r14
  CNineGridBrush *v9; // rax
  unsigned int v10; // ecx
  CNineGridBrush *v11; // rsi
  CNineGridBrush *v12; // rbx
  __int64 v13; // rdx
  int SurfaceBrush; // eax
  unsigned int v15; // edi
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-28h]
  struct CBrush *v19; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  v19 = 0LL;
  *a5 = 0LL;
  v9 = (CNineGridBrush *)DefaultHeap::AllocClear(0xC0uLL);
  if ( v9 )
    v11 = CNineGridBrush::CNineGridBrush(v9, *(struct CComposition **)(a1 + 16));
  else
    v11 = 0LL;
  v12 = v11;
  if ( v11 )
  {
    (*(void (__fastcall **)(CNineGridBrush *))(*(_QWORD *)v11 + 8LL))(v11);
    SurfaceBrush = CProjectedShadow::GenerateSurfaceBrush(a1, v13, a3, a4, (struct CBitmapResource *)&v19);
    v15 = SurfaceBrush;
    if ( SurfaceBrush < 0 )
    {
      v18 = 1202;
    }
    else
    {
      SurfaceBrush = CNineGridBrush::SetSource(v11, v19);
      v15 = SurfaceBrush;
      if ( SurfaceBrush >= 0 )
      {
        CNineGridBrush::SetInsetProperty(v11, 0, 80.0);
        CNineGridBrush::SetInsetProperty(v11, 8u, 80.0);
        CNineGridBrush::SetInsetProperty(v11, 5u, 80.0);
        CNineGridBrush::SetInsetProperty(v11, 3u, 80.0);
        CNineGridBrush::SetCanUseSurfaceTransform(v11);
        v12 = 0LL;
        *v5 = v11;
        goto LABEL_7;
      }
      v18 = 1204;
    }
    v17 = SurfaceBrush;
  }
  else
  {
    v15 = -2147024882;
    v17 = -2147024882;
    v18 = 1197;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v17, v18, 0LL);
LABEL_7:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v19);
  if ( v12 )
    (*(void (__fastcall **)(CNineGridBrush *))(*(_QWORD *)v12 + 16LL))(v12);
  return v15;
}
