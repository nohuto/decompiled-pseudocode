/*
 * XREFs of McTemplateU0ffff_EventWriteTransfer @ 0x18018DEB0
 * Callers:
 *     ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x18004E1A0 (-Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B6BB4 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18018D7E0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180239100 (-DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180239700 (-FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?FillRectangles@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180239B20 (-FillRectangles@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV-$T.c)
 *     ?FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180239C10 (-FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0ffff_EventWriteTransfer(
        REGHANDLE *a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        float a4,
        char a5,
        char a6)
{
  int v6; // xmm2_4
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-19h] BYREF
  int *v9; // [rsp+40h] [rbp-9h]
  __int64 v10; // [rsp+48h] [rbp-1h]
  float *v11; // [rsp+50h] [rbp+7h]
  __int64 v12; // [rsp+58h] [rbp+Fh]
  char *v13; // [rsp+60h] [rbp+17h]
  __int64 v14; // [rsp+68h] [rbp+1Fh]
  char *v15; // [rsp+70h] [rbp+27h]
  __int64 v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+B0h] [rbp+67h] BYREF
  float v18; // [rsp+B8h] [rbp+6Fh] BYREF

  v18 = a4;
  v17 = v6;
  v10 = 4LL;
  v9 = &v17;
  v12 = 4LL;
  v11 = &v18;
  v13 = &a5;
  v15 = &a6;
  v14 = 4LL;
  v16 = 4LL;
  return McGenEventWrite_EventWriteTransfer(a1, a2, a3, 5u, &v8);
}
