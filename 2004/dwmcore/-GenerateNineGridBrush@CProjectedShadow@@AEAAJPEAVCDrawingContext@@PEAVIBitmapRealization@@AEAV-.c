/*
 * XREFs of ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x18001D8B8
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000ADA8 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?SetCanUseSurfaceTransform@CNineGridBrush@@QEAAX_N@Z @ 0x18001D9F8 (-SetCanUseSurfaceTransform@CNineGridBrush@@QEAAX_N@Z.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x18001DA30 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-$.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800374A0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800A2588 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetInsetProperty@CNineGridBrush@@QEAAXKM@Z @ 0x1800C7E3C (-SetInsetProperty@CNineGridBrush@@QEAAXKM@Z.c)
 *     ??0CNineGridBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800CFA04 (--0CNineGridBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z @ 0x1800D0DE4 (-SetSource@CNineGridBrush@@QEAAJPEAVCBrush@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::GenerateNineGridBrush(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CNineGridBrush **a5)
{
  CNineGridBrush **v5; // r14
  CNineGridBrush *v9; // rax
  unsigned int v10; // ecx
  CNineGridBrush *v11; // rsi
  CNineGridBrush *v12; // rbx
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // edi
  bool v16; // dl
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-28h]
  struct CBrush *v20; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  v20 = 0LL;
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
    v14 = CProjectedShadow::GenerateSurfaceBrush(a1, v13, a3, a4, &v20);
    v15 = v14;
    if ( v14 < 0 )
    {
      v19 = 1202;
    }
    else
    {
      v14 = CNineGridBrush::SetSource(v11, v20);
      v15 = v14;
      if ( v14 >= 0 )
      {
        CNineGridBrush::SetInsetProperty(v11, 0, 80.0);
        CNineGridBrush::SetInsetProperty(v11, 8u, 80.0);
        CNineGridBrush::SetInsetProperty(v11, 5u, 80.0);
        CNineGridBrush::SetInsetProperty(v11, 3u, 80.0);
        CNineGridBrush::SetCanUseSurfaceTransform(v11, v16);
        v12 = 0LL;
        *v5 = v11;
        goto LABEL_7;
      }
      v19 = 1204;
    }
    v18 = v14;
  }
  else
  {
    v15 = -2147024882;
    v18 = -2147024882;
    v19 = 1197;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v18, v19, 0LL);
LABEL_7:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v20);
  if ( v12 )
    (*(void (__fastcall **)(CNineGridBrush *))(*(_QWORD *)v12 + 16LL))(v12);
  return v15;
}
