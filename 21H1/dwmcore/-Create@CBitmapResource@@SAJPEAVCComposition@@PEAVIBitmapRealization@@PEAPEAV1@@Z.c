/*
 * XREFs of ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x180006778
 * Callers:
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x18000663C (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-$.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x1801C5984 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CBitmapResource@@IEAA@PEAVCComposition@@PEAVIBitmapRealization@@@Z @ 0x18008EB9C (--0CBitmapResource@@IEAA@PEAVCComposition@@PEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::Create(
        struct CComposition *a1,
        struct IBitmapRealization *a2,
        struct CBitmapResource **a3)
{
  unsigned int v3; // edi
  CBitmapResource *v7; // rax
  unsigned int v8; // ecx
  struct CBitmapResource *v9; // rbx
  struct CBitmapResource *v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v7 = (CBitmapResource *)DefaultHeap::Alloc(0x70uLL);
  if ( v7 )
    v9 = CBitmapResource::CBitmapResource(v7, a1, a2);
  else
    v9 = 0LL;
  v11 = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(struct CBitmapResource *))(*(_QWORD *)v9 + 8LL))(v9);
    v11 = 0LL;
    *a3 = v9;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
  return v3;
}
