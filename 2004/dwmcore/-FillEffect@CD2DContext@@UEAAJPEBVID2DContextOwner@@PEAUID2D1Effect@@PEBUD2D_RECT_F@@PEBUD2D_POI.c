/*
 * XREFs of ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800CA530
 * Callers:
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000F390 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18018F460 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007B89C (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007BD48 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800CA60C (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::FillEffect(
        ID2D1DeviceContext **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Effect *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_POINT_2F *a5,
        enum D2D1_INTERPOLATION_MODE a6,
        enum D2D1_COMPOSITE_MODE a7)
{
  const struct D2D_POINT_2F *v11; // r8
  FLOAT y; // xmm1_4
  _DWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-50h] BYREF

  CD2DContext::FlushDrawList((CD2DContext *)this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  (*(void (__fastcall **)(const struct ID2DContextOwner *, _BYTE *))(*(_QWORD *)a2 + 8LL))(a2, v15);
  (*(void (__fastcall **)(ID2D1DeviceContext *, _BYTE *))(*(_QWORD *)this[30] + 240LL))(this[30], v15);
  v11 = 0LL;
  if ( a5 )
  {
    v11 = (const struct D2D_POINT_2F *)v14;
    y = a5->y;
    v14[0] = LODWORD(a5->x);
    *(FLOAT *)&v14[1] = y;
  }
  ID2D1DeviceContext::DrawImage(this[30], a3, v11, a4, a6, a7);
  return 0LL;
}
