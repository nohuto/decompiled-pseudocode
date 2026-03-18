/*
 * XREFs of ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800CA60C
 * Callers:
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800CA530 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18023A350 (-DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ID2D1DeviceContext::DrawImage(
        ID2D1DeviceContext *this,
        struct ID2D1Effect *a2,
        const struct D2D_POINT_2F *a3,
        const struct D2D_RECT_F *a4,
        enum D2D1_INTERPOLATION_MODE a5,
        enum D2D1_COMPOSITE_MODE a6)
{
  __int64 v6; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_QWORD *)a2;
  v10 = 0LL;
  (*(void (__fastcall **)(struct ID2D1Effect *, __int64 *))(v6 + 144))(a2, &v10);
  (*(void (__fastcall **)(ID2D1DeviceContext *, __int64, const struct D2D_POINT_2F *, const struct D2D_RECT_F *, enum D2D1_INTERPOLATION_MODE, enum D2D1_COMPOSITE_MODE))(*(_QWORD *)this + 664LL))(
    this,
    v10,
    a3,
    a4,
    a5,
    a6);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
